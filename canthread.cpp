#include "canthread.h"
#include "ControlCAN.h"
#include <QTime>
#include <QCoreApplication>
#include <QMetaType>
#include <QMutexLocker>
#include <QVector>
#include <string.h>

CANThread::CANThread()
{
    stopped = false;
    //qRegisterMetaType<VCI_CAN_OBJ>("VCI_CAN_OBJ");
    //qRegisterMetaType<unsigned int>("DWORD");
}

void CANThread::stop()
{
    stopped = true;
}


//1.打开设备
bool CANThread::openDevice(UINT deviceType,UINT debicIndex,UINT baundRate,int canIndex, int mode)
{
    m_deviceType = deviceType;/* USBCAN-2A或USBCAN-2C或CANalyst-II */
    m_debicIndex = debicIndex;/* 第1个设备 */
    m_baundRate = baundRate;
    canind = canIndex;
    this->mode = mode;
    unsigned int dwRel;
    dwRel = VCI_OpenDevice(m_deviceType, m_debicIndex, canind);
    if(dwRel != 1)
        return false;

    if (!initCAN()) {
        return false;
    }
    if (!startCAN()) {
        return false;
    }
    return true;
}

//2.初始化CAN
bool CANThread::initCAN()
{
    unsigned int dwRel = VCI_ClearBuffer(m_deviceType, m_debicIndex, canind);
    VCI_INIT_CONFIG vic;
    vic.AccCode=0x80000008;
    vic.AccMask=0xFFFFFFFF;
    vic.Filter=1;
    vic.Mode=mode;
    switch (m_baundRate) {
    case 10:
        vic.Timing0=0x31;
        vic.Timing1=0x1c;
        break;
    case 20:
        vic.Timing0=0x18;
        vic.Timing1=0x1c;
        break;
    case 40:
        vic.Timing0=0x87;
        vic.Timing1=0xff;
        break;
    case 50:
        vic.Timing0=0x09;
        vic.Timing1=0x1c;
        break;
    case 80:
        vic.Timing0=0x83;
        vic.Timing1=0xff;
        break;
    case 100:
        vic.Timing0=0x04;
        vic.Timing1=0x1c;
        break;
    case 125:
        vic.Timing0=0x03;
        vic.Timing1=0x1c;
        break;
    case 200:
        vic.Timing0=0x81;
        vic.Timing1=0xfa;
        break;
    case 250:
        vic.Timing0=0x01;
        vic.Timing1=0x1c;
        break;
    case 400:
        vic.Timing0=0x80;
        vic.Timing1=0xfa;
        break;
    case 500:
        vic.Timing0=0x00;
        vic.Timing1=0x1c;
        break;
    case 666:
        vic.Timing0=0x80;
        vic.Timing1=0xb6;
        break;
    case 800:
        vic.Timing0=0x00;
        vic.Timing1=0x16;
        break;
    case 1000:
        vic.Timing0=0x00;
        vic.Timing1=0x14;
        break;
    case 33:
        vic.Timing0=0x09;
        vic.Timing1=0x6f;
        break;
    case 66:
        vic.Timing0=0x04;
        vic.Timing1=0x6f;
        break;
    case 83:
        vic.Timing0=0x03;
        vic.Timing1=0x6f;
        break;
    default:
        break;
    }
    dwRel = VCI_InitCAN(m_deviceType, m_debicIndex, canind, &vic);
    if(dwRel !=1)
        return false;
    else
        qDebug()<<"init success";

    VCI_BOARD_INFO vbi;
    dwRel = VCI_ReadBoardInfo(m_deviceType, m_debicIndex, &vbi);
    if(dwRel != 1)
        return false;
    else
        emit boardInfo(vbi);
    return true;
}

//3.启动CAN
bool CANThread::startCAN()
{
    if(VCI_StartCAN(m_deviceType, m_debicIndex, canind) !=1)
    {
        qDebug()<<"start 0 fail.";
        return false;
    }
    else
        qDebug()<<"start 0 success.";

    return true;
}

//4.发送数据
bool CANThread::sendData(UINT channel,UINT ID,BYTE remoteFlag,BYTE externFlag,const unsigned char *data,BYTE len)
{
    unsigned int dwRel;
    VCI_CAN_OBJ vco;
    vco.ID = ID ;
    vco.RemoteFlag = remoteFlag;
    vco.ExternFlag = externFlag;
    vco.DataLen = len;
    for(UINT j = 0;j < len;j++)
        vco.Data[j] = data[j];
    dwRel = VCI_Transmit(m_deviceType, m_debicIndex, canind,&vco,1);
    emit sendSignal(dwRel, vco);
    if(dwRel>0)
        return true;
    else
        return false;

}

//5.关闭设备
void CANThread::closeDevice()
{
    VCI_CloseDevice(m_deviceType, m_debicIndex);
}

//0.复位设备，  复位后回到3
bool CANThread::reSetCAN()
{
    if(VCI_ResetCAN(m_deviceType, m_debicIndex, 0) !=1)
    {
        qDebug()<<"reset 0 fail.";
        return false;
    }
    else
        qDebug()<<"reset 0 success.";
    if(VCI_ResetCAN(m_deviceType, m_debicIndex, 1) !=1)
    {
        qDebug()<<"reset 1 fail.";
        return false;
    }
    else
        qDebug()<<"reset 1 success.";
    return true;
}

int CANThread::getDeviceCount()
{
    VCI_BOARD_INFO boardInfo[16]; // 不初始化也可以
    memset(boardInfo, 0, sizeof(boardInfo));

    DWORD deviceCount = 0;
deviceCount = VCI_FindUsbDevice2(boardInfo); // 一些 DLL 可能访问越界会崩溃


    return 0;
}

void CANThread::run()
{
    while(!stopped)
    {
        unsigned int dwRel;
        VCI_CAN_OBJ vco[2500];
        dwRel = VCI_Receive(m_deviceType, m_debicIndex, canind, vco,2500,0);
        if(dwRel > 0){
            // 不再为每一帧发送一个 queued signal。
            // 高频 CAN 数据下，逐帧 signal 会把 GUI 主线程事件队列塞满，
            // 导致 btn_pause 的鼠标事件长时间得不到处理。
            enqueueReceivedData(vco, static_cast<int>(dwRel));
        }
        sleep(30);
    }
    stopped = false;
}


void CANThread::enqueueReceivedData(const VCI_CAN_OBJ *data, int count)
{
    if (data == nullptr || count <= 0)
        return;

    bool notify = false;
    {
        QMutexLocker locker(&receiveMutex);

        // 保留最新数据，避免 GUI 暂停/繁忙时内存无限增长。
        if (count >= MAX_RECEIVE_BUFFER) {
            receiveBuffer.clear();
            receiveBuffer.reserve(MAX_RECEIVE_BUFFER);
            for (int i = count - MAX_RECEIVE_BUFFER; i < count; ++i)
                receiveBuffer.append(data[i]);
        } else {
            const int overflow = receiveBuffer.size() + count - MAX_RECEIVE_BUFFER;
            if (overflow > 0)
                receiveBuffer.remove(0, overflow);

            receiveBuffer.reserve(qMin(MAX_RECEIVE_BUFFER, receiveBuffer.size() + count));
            for (int i = 0; i < count; ++i)
                receiveBuffer.append(data[i]);
        }

        // 一个时刻最多挂一个 dataReady 事件，彻底避免事件队列堆积。
        if (!receiveNotificationPending) {
            receiveNotificationPending = true;
            notify = true;
        }
    }

    if (notify)
        emit dataReady();
}

QVector<VCI_CAN_OBJ> CANThread::takeReceivedData(int maxCount)
{
    QVector<VCI_CAN_OBJ> result;

    if (maxCount <= 0)
        return result;

    QMutexLocker locker(&receiveMutex);

    const int count = qMin(maxCount, receiveBuffer.size());
    if (count > 0) {
        result.reserve(count);
        for (int i = 0; i < count; ++i)
            result.append(receiveBuffer.at(i));
        receiveBuffer.remove(0, count);
    }

    // 本次通知已经被 GUI 消费；如果还有数据，GUI 处理完当前批次后
    // 会再次调用 notifyDataReadyIfNeeded()。
    receiveNotificationPending = false;
    return result;
}

void CANThread::notifyDataReadyIfNeeded()
{
    bool notify = false;
    {
        QMutexLocker locker(&receiveMutex);
        if (!receiveBuffer.isEmpty() && !receiveNotificationPending) {
            receiveNotificationPending = true;
            notify = true;
        }
    }

    if (notify)
        emit dataReady();
}

void CANThread::clearReceivedData()
{
    QMutexLocker locker(&receiveMutex);
    receiveBuffer.clear();
    receiveNotificationPending = false;
}

void CANThread::sleep(int msec)
{
   QTime dieTime = QTime::currentTime().addMSecs(msec);
   while( QTime::currentTime() < dieTime )
       QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}


void CANThread::TransmitCANThread(VCI_CAN_OBJ data)
{
    unsigned int dwRel;
    dwRel = VCI_Transmit(m_deviceType, m_debicIndex, canind,&data,1);
    emit sendSignal(dwRel, data);
}

