#include "common.h"


struct RadarStatus {
    uint8_t nvmReadStatus;
    uint8_t nvmWriteStatus;
    uint16_t maxDistanceCfg;
    uint8_t sensorID;
    uint8_t sortIndex;
    uint8_t radarPowerCfg;
    uint8_t outputTypeCfg;
    uint8_t canBaudRate;
    uint8_t rcsThreshold;
    uint8_t calibrationEnabled;
};

RadarStatus parseRadarStatus(const uint8_t data[8]) {
    uint64_t bits = 0;
    for (int i = 0; i < 8; ++i) {
        bits = (bits << 8) | data[i];
    }

    RadarStatus status;
    status.nvmReadStatus       = (bits >> (63 - 6)) & 0x1;
    status.nvmWriteStatus      = (bits >> (63 - 7)) & 0x1;
    status.maxDistanceCfg      = ((bits >> (63 - 31)) & 0x3FF) * 2;
    status.sensorID            = (bits >> (63 - 34)) & 0x7;
    status.sortIndex           = (bits >> (63 - 38)) & 0x7;
    status.radarPowerCfg       = (bits >> (63 - 41)) & 0x7;
    status.outputTypeCfg       = (bits >> (63 - 43)) & 0x3;
    status.canBaudRate         = (bits >> (63 - 55)) & 0x7;
    status.rcsThreshold        = (bits >> (63 - 60)) & 0x7;
    status.calibrationEnabled  = (bits >> (63 - 63)) & 0x3;

    return status;
}

QString radarStatusToString(const RadarStatus& s) {
    QString read  = s.nvmReadStatus == 0 ? "失败" : "成功";
    QString write = s.nvmWriteStatus == 0 ? "失败" : "成功";

    QString sort;
    switch (s.sortIndex) {
    case 0: sort = "无"; break;
    case 1: sort = "按距离"; break;
    case 2: sort = "按RCS"; break;
    default: sort = "未知"; break;
    }

    QString power;
    switch (s.radarPowerCfg) {
    case 0: power = "标准"; break;
    case 1: power = "低功率"; break;
    default: power = "未知"; break;
    }

    QString output;
    switch (s.outputTypeCfg) {
    case 0: output = "无输出"; break;
    case 1: output = "对象输出"; break;
    case 2: output = "雷达原始数据"; break;
    default: output = "未知"; break;
    }

    QString baud;
    switch (s.canBaudRate) {
    case 0: baud = "500Kbps"; break;
    case 1: baud = "250Kbps"; break;
    case 2: baud = "125Kbps"; break;
    default: baud = "未知"; break;
    }

    QString rcs;
    switch (s.rcsThreshold) {
    case 0: rcs = "标准灵敏度"; break;
    case 1: rcs = "高灵敏度"; break;
    default: rcs = "未知"; break;
    }

    QString calib;
    switch (s.calibrationEnabled) {
    case 0: calib = "关闭"; break;
    case 1: calib = "自动"; break;
    case 2: calib = "初始恢复"; break;
    default: calib = "未知"; break;
    }

    return QString("NVM读取状态:%1, NVM写入状态:%2, 最大距离配置:%3m, 雷达ID:%4, 排序索引:%5, 雷达功率:%6, 输出类型:%7, CAN波特率:%8, RCS灵敏度:%9, 标定状态:%10")
        .arg(read)
        .arg(write)
        .arg(s.maxDistanceCfg)
        .arg(s.sensorID)
        .arg(sort)
        .arg(power)
        .arg(output)
        .arg(baud)
        .arg(rcs)
        .arg(calib);
}

QString getStateString(uint8_t dynProp) {
    switch (dynProp) {
    case 0x0: return "moving";
    case 0x1: return "stationary";
    case 0x2: return "oncoming";
    case 0x3: return "crossing left";
    case 0x4: return "crossing right";
    case 0x5: return "unknown";
    case 0x6: return "stopped";
    default: return "unknown";
    }
}

QString getClassString(uint8_t objClass) {
    switch (objClass) {
    case 0x0: return "point";
    case 0x1: return "car";
    default: return "unknown";
    }
}

QString parseBbstacleData(VCI_CAN_OBJ data)
{
    QString text;
    if (data.ID == 0x060b) {
    uint8_t id = data.Data[0];
    double distLong = ((data.Data[1] * 32 + (data.Data[2] >> 3)) * 0.2) - 500;

    // 目标横向距离
    double distLat = (((data.Data[2] & 0x07) * 256 + data.Data[3]) * 0.2) - 204.6;

    // 目标纵向速度
    double vrelLong = ((data.Data[4] * 4 + (data.Data[5] >> 6)) * 0.25) - 128;

    // 目标横向速度
    double vrelLat = (((data.Data[5] & 0x3F) * 8 + (data.Data[6] >> 5)) * 0.25) - 64;

    // 目标动态属性
    uint8_t dynProp = data.Data[6] & 0x07;
    uint8_t objClass1 = (data.Data[6] >> 3) & 0x03;  // (0x18 >> 3)
    // RCS
    uint8_t rcs = (data.Data[7] * 0.5) - 64;

    QString state = getStateString(dynProp);
    QString objClass = getClassString(objClass1);
    text = QString("目标ID:%1,纵向距离:%2m,横向距离:%3m,纵向速度:%4m/s,横向速度:%5m/s,动态属性%6,类型:%7，RCS:%8")
                       .arg(id)
                       .arg(distLong)
                       .arg(distLat)
                       .arg(vrelLong)
                       .arg(vrelLat)
                       .arg(state)
                       .arg(objClass)
                       .arg(rcs);
    } else if (data.ID == 0x060a) {
        uint8_t objCount = data.Data[0];
        uint16_t measCount = (static_cast<uint16_t>(data.Data[1]) << 8) | data.Data[2];
        uint8_t interfaceVersion = (data.Data[3] >> 4) & 0x0F;
        text = QString("目标数量:%1,测量周期计数:%2,接口版本号:%3")
                   .arg(objCount)
                   .arg(measCount)
                   .arg(interfaceVersion);
    } else if (data.ID == 0x0201) {
        uint64_t bits = 0;
        for (int i = 0; i < 8; ++i) {
            bits = (bits << 8) | data.Data[i];
        }

        RadarStatus status;
        status.nvmReadStatus       = (bits >> (63 - 6)) & 0x1;
        status.nvmWriteStatus      = (bits >> (63 - 7)) & 0x1;
        status.maxDistanceCfg      = ((bits >> (63 - 31)) & 0x3FF) * 2;
        status.sensorID            = (bits >> (63 - 34)) & 0x7;
        status.sortIndex           = (bits >> (63 - 38)) & 0x7;
        status.radarPowerCfg       = (bits >> (63 - 41)) & 0x7;
        status.outputTypeCfg       = (bits >> (63 - 43)) & 0x3;
        status.canBaudRate         = (bits >> (63 - 55)) & 0x7;
        status.rcsThreshold        = (bits >> (63 - 60)) & 0x7;
        status.calibrationEnabled  = (bits >> (63 - 63)) & 0x3;
        text = radarStatusToString(status);
    } else if (data.ID == 0x700) {
        uint8_t MajorRelease = data.Data[0];
        uint8_t MinorRelease = data.Data[1];
        uint8_t PatchLevel = data.Data[2];
        text = QString("软件主版本:%1,软件次版本:%2,软件补丁版本:%3")
                   .arg(MajorRelease)
                   .arg(MinorRelease)
                   .arg(PatchLevel);
    }


    return text;
}
