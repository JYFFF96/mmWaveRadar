#ifndef CANTHREAD_H
#define CANTHREAD_H

#include <QThread>
#include "ControlCAN.h"
#include <QDebug>
#include <QMutex>
#include <QVector>

class CANThread:public QThread
{
    Q_OBJECT
public:
    CANThread();

    void stop();

    //1.打开设备
    bool openDevice(UINT deviceType,UINT debicIndex,UINT baundRate,int canIndex, int mode);

    //2.初始化CAN
    bool initCAN();

    //3.启动CAN
    bool startCAN();

    //4.发送数据
    bool sendData(UINT channel,UINT ID,BYTE remoteFlag,BYTE externFlag,const unsigned char *data,BYTE len);
    void TransmitCANThread(VCI_CAN_OBJ data);
    //5.关闭设备
    void closeDevice();

    //0.复位设备，  复位后回到3
    bool reSetCAN();

    int getDeviceCount();

    UINT m_deviceType;
    UINT m_debicIndex;
    UINT m_baundRate;
    UINT m_debicCom;
    int canind=0; //第几路can
    int mode = 0;
    bool stopped;

public:
    // 由 GUI 线程取走最近收到的 CAN 数据，避免逐帧 queued signal。
    QVector<VCI_CAN_OBJ> takeReceivedData(int maxCount);
    void clearReceivedData();
    void notifyDataReadyIfNeeded();

signals:
    void getProtocolData(VCI_CAN_OBJ *vci,unsigned int dwRel,unsigned int channel);
    void boardInfo(VCI_BOARD_INFO vbi);

    // 只通知 GUI“有新数据”，避免每一帧都进入 Qt 主线程事件队列。
    void dataReady();

    // 保留旧信号，兼容其它潜在调用方。
    void send1data(VCI_CAN_OBJ data);
    void sendSignal(bool flag, VCI_CAN_OBJ data);
private:
    void run();
    void sleep(int msec);

    void enqueueReceivedData(const VCI_CAN_OBJ *data, int count);
    QMutex receiveMutex;
    QVector<VCI_CAN_OBJ> receiveBuffer;
    bool receiveNotificationPending = false;
    static constexpr int MAX_RECEIVE_BUFFER = 20000;

};

#endif // CANTHREAD_H
