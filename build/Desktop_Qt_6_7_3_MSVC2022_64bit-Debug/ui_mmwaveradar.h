/********************************************************************************
** Form generated from reading UI file 'mmwaveradar.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MMWAVERADAR_H
#define UI_MMWAVERADAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <mycustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_mmWaveRadar
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QWidget *wgt_top;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *btn_connet;
    QPushButton *btn_scale;
    QPushButton *btn_obstacleSet;
    QPushButton *btn_radarBD;
    QPushButton *btn_targetSet;
    QPushButton *btn_paramSet;
    QPushButton *btn_commProtocol;
    QPushButton *btn_dataSave;
    QSpacerItem *horizontalSpacer_5;
    myCustomPlot *customPlot;
    QWidget *wgt_connet;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_closeConnect;
    QFrame *line;
    QGridLayout *gridLayout;
    QComboBox *comboBox_baud;
    QComboBox *comboBox_mode;
    QLabel *label_5;
    QLabel *label_4;
    QComboBox *comboBox_canIndex;
    QLabel *label_3;
    QComboBox *comboBox_devType;
    QLabel *label_16;
    QComboBox *comboBox_devIndex;
    QLabel *label_23;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *btn_connectDev;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer;
    QWidget *wgt_scale;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_closeScale;
    QFrame *line_2;
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QLineEdit *lineEdit_xAxisRange;
    QLabel *label_7;
    QLabel *label_2;
    QLineEdit *lineEdit_yAxisRange;
    QLineEdit *lineEdit_angleRange;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *btn_setRange;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_4;
    QWidget *wgt_radarBD;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_closeRadarBD;
    QFrame *line_3;
    QLabel *label_12;
    QGridLayout *gridLayout_10;
    QCheckBox *checkBox_1mbd;
    QPushButton *btn_1mbd;
    QCheckBox *checkBox_3mbd;
    QPushButton *btn_3mbd;
    QCheckBox *checkBox_5mbd;
    QPushButton *btn_5mbd;
    QLabel *label_13;
    QGridLayout *gridLayout_5;
    QLabel *label_17;
    QCheckBox *checkBox_453mbd;
    QCheckBox *checkBox_455mbd;
    QComboBox *comboBox_45bd;
    QPushButton *btn_45bd;
    QGridLayout *gridLayout_6;
    QLabel *label_18;
    QCheckBox *checkBox_fu453mbd;
    QCheckBox *checkBox_fu455mbd;
    QComboBox *comboBox_fu45bd;
    QPushButton *btn_fu45bd;
    QSpacerItem *verticalSpacer_3;
    QWidget *wgt_obstacleSet;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btn_closeObstacleSet;
    QFrame *line_4;
    QGridLayout *gridLayout_4;
    QCheckBox *checkBox_targetAngle;
    QCheckBox *checkBox_targetRange;
    QCheckBox *checkBox_targetRCS;
    QCheckBox *checkBox_targetClass;
    QCheckBox *checkBox_targetV;
    QCheckBox *checkBox_targetState;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *btn_obstacleSetSure;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *verticalSpacer_5;
    QWidget *wgt_targetSet;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *btn_closeTargetSet;
    QFrame *line_5;
    QLabel *label_14;
    QGridLayout *gridLayout_11;
    QCheckBox *checkBox_movingTarget;
    QCheckBox *checkBox_allTarget;
    QCheckBox *checkBox_crossingRightTarget;
    QCheckBox *checkBox_stationaryTarget;
    QCheckBox *checkBox_crossingLeftTarget;
    QCheckBox *checkBox_oncomingTarget;
    QCheckBox *checkBox_stoppedTarget;
    QCheckBox *checkBox_unknownTarget;
    QLabel *label_15;
    QGridLayout *gridLayout_7;
    QCheckBox *checkBox_carType;
    QCheckBox *checkBox_pointType;
    QCheckBox *checkBox_allType;
    QGridLayout *gridLayout_8;
    QSpacerItem *verticalSpacer_6;
    QWidget *wgt_dataShow;
    QVBoxLayout *verticalLayout_8;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_15;
    QGridLayout *gridLayout_9;
    QPushButton *btn_clearTable;
    QPushButton *btn_pause;
    QCheckBox *checkBox_parseData;
    QPushButton *btn_comDoc;
    QGridLayout *gridLayout_12;
    QLabel *label_19;
    QComboBox *comboBox_sendType;
    QLabel *label_20;
    QLineEdit *lineEdit_frameID;
    QLabel *label_24;
    QLabel *label_25;
    QComboBox *comboBox_frameType;
    QLabel *label_26;
    QComboBox *comboBox_dataLen;
    QLabel *label_27;
    QLineEdit *lineEdit_data;
    QLabel *label_34;
    QComboBox *comboBox_frameFormat;
    QLabel *label_35;
    QPushButton *pushButton_send;
    QPushButton *pushButton_stop;
    QLineEdit *lineEdit_sendTimes;
    QLineEdit *lineEdit_sendCycle;
    QWidget *wgt_dataSave;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_36;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *btn_closeDataSave;
    QFrame *line_7;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_37;
    QLineEdit *lineEdit_saveLine;
    QGridLayout *gridLayout_13;
    QLabel *label_38;
    QCheckBox *checkBox_bin;
    QCheckBox *checkBox_excel;
    QCheckBox *checkBox_txt;
    QCheckBox *checkBox_asc;
    QCheckBox *checkBox_blf;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_39;
    QLineEdit *lineEdit_savaPath;
    QPushButton *pushButton_22;
    QHBoxLayout *horizontalLayout_26;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *pushButton_23;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *verticalSpacer_2;
    QWidget *wgt_paramSet;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_40;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *btn_closeParamSet;
    QFrame *line_6;
    QGridLayout *gridLayout_3;
    QSpinBox *spinBox_2;
    QCheckBox *checkBox_52;
    QSpinBox *spinBox_21;
    QCheckBox *checkBox_44;
    QSpinBox *spinBox_16;
    QSpinBox *spinBox_25;
    QLabel *label_33;
    QLabel *label_22;
    QSpinBox *spinBox_3;
    QCheckBox *checkBox_55;
    QCheckBox *checkBox_42;
    QSpinBox *spinBox_19;
    QLabel *label_32;
    QLabel *label_21;
    QCheckBox *checkBox_53;
    QCheckBox *checkBox_45;
    QSpinBox *spinBox_5;
    QSpinBox *spinBox_22;
    QSpinBox *spinBox_15;
    QSpinBox *spinBox_17;
    QCheckBox *checkBox_43;
    QSpinBox *spinBox_23;
    QLabel *label_29;
    QSpinBox *spinBox_20;
    QComboBox *comboBox_4;
    QCheckBox *checkBox_54;
    QSpinBox *spinBox_14;
    QSpinBox *spinBox;
    QSpinBox *spinBox_4;
    QLabel *label_28;
    QCheckBox *checkBox_50;
    QLabel *label_30;
    QLabel *label_41;
    QCheckBox *checkBox_51;
    QSpinBox *spinBox_18;
    QSpinBox *spinBox_24;
    QLabel *label_31;
    QComboBox *comboBox_3;
    QHBoxLayout *horizontalLayout_25;
    QPushButton *btn_returnParam;
    QPushButton *btn_paramSure;
    QSpacerItem *verticalSpacer_7;

    void setupUi(QMainWindow *mmWaveRadar)
    {
        if (mmWaveRadar->objectName().isEmpty())
            mmWaveRadar->setObjectName("mmWaveRadar");
        mmWaveRadar->resize(879, 645);
        centralwidget = new QWidget(mmWaveRadar);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 771, 51));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        wgt_top = new QWidget(layoutWidget);
        wgt_top->setObjectName("wgt_top");
        horizontalLayout_7 = new QHBoxLayout(wgt_top);
        horizontalLayout_7->setSpacing(10);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(6, 0, 1, 0);
        btn_connet = new QPushButton(wgt_top);
        btn_connet->setObjectName("btn_connet");
        btn_connet->setMinimumSize(QSize(60, 25));
        btn_connet->setCheckable(true);
        btn_connet->setChecked(false);

        horizontalLayout_7->addWidget(btn_connet);

        btn_scale = new QPushButton(wgt_top);
        btn_scale->setObjectName("btn_scale");
        btn_scale->setMinimumSize(QSize(60, 25));
        btn_scale->setStyleSheet(QString::fromUtf8(""));
        btn_scale->setCheckable(true);

        horizontalLayout_7->addWidget(btn_scale);

        btn_obstacleSet = new QPushButton(wgt_top);
        btn_obstacleSet->setObjectName("btn_obstacleSet");
        btn_obstacleSet->setMinimumSize(QSize(60, 25));
        btn_obstacleSet->setCheckable(true);

        horizontalLayout_7->addWidget(btn_obstacleSet);

        btn_radarBD = new QPushButton(wgt_top);
        btn_radarBD->setObjectName("btn_radarBD");
        btn_radarBD->setMinimumSize(QSize(60, 25));
        btn_radarBD->setCheckable(true);

        horizontalLayout_7->addWidget(btn_radarBD);

        btn_targetSet = new QPushButton(wgt_top);
        btn_targetSet->setObjectName("btn_targetSet");
        btn_targetSet->setMinimumSize(QSize(60, 25));
        btn_targetSet->setCheckable(true);

        horizontalLayout_7->addWidget(btn_targetSet);

        btn_paramSet = new QPushButton(wgt_top);
        btn_paramSet->setObjectName("btn_paramSet");
        btn_paramSet->setMinimumSize(QSize(60, 25));
        btn_paramSet->setCheckable(true);

        horizontalLayout_7->addWidget(btn_paramSet);

        btn_commProtocol = new QPushButton(wgt_top);
        btn_commProtocol->setObjectName("btn_commProtocol");
        btn_commProtocol->setMinimumSize(QSize(60, 25));
        btn_commProtocol->setCheckable(true);

        horizontalLayout_7->addWidget(btn_commProtocol);

        btn_dataSave = new QPushButton(wgt_top);
        btn_dataSave->setObjectName("btn_dataSave");
        btn_dataSave->setMinimumSize(QSize(60, 25));
        btn_dataSave->setCheckable(true);
        btn_dataSave->setChecked(false);

        horizontalLayout_7->addWidget(btn_dataSave);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);


        verticalLayout_6->addWidget(wgt_top);

        customPlot = new myCustomPlot(layoutWidget);
        customPlot->setObjectName("customPlot");
        customPlot->setMouseTracking(true);

        verticalLayout_6->addWidget(customPlot);

        verticalLayout_6->setStretch(1, 1);
        wgt_connet = new QWidget(centralwidget);
        wgt_connet->setObjectName("wgt_connet");
        wgt_connet->setEnabled(true);
        wgt_connet->setGeometry(QRect(10, 70, 139, 191));
        verticalLayout = new QVBoxLayout(wgt_connet);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(wgt_connet);
        label->setObjectName("label");
        label->setMinimumSize(QSize(75, 0));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_closeConnect = new QPushButton(wgt_connet);
        btn_closeConnect->setObjectName("btn_closeConnect");
        btn_closeConnect->setMinimumSize(QSize(17, 17));
        btn_closeConnect->setMaximumSize(QSize(17, 17));
        QFont font;
        font.setBold(true);
        btn_closeConnect->setFont(font);
        btn_closeConnect->setStyleSheet(QString::fromUtf8("border-image: url(:/images/btn_close .png);"));

        horizontalLayout->addWidget(btn_closeConnect);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(wgt_connet);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(-1, 8, -1, -1);
        comboBox_baud = new QComboBox(wgt_connet);
        comboBox_baud->addItem(QString());
        comboBox_baud->addItem(QString());
        comboBox_baud->addItem(QString());
        comboBox_baud->addItem(QString());
        comboBox_baud->setObjectName("comboBox_baud");

        gridLayout->addWidget(comboBox_baud, 7, 1, 1, 1);

        comboBox_mode = new QComboBox(wgt_connet);
        comboBox_mode->addItem(QString());
        comboBox_mode->addItem(QString());
        comboBox_mode->addItem(QString());
        comboBox_mode->setObjectName("comboBox_mode");

        gridLayout->addWidget(comboBox_mode, 5, 1, 1, 1);

        label_5 = new QLabel(wgt_connet);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        label_4 = new QLabel(wgt_connet);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 7, 0, 1, 1);

        comboBox_canIndex = new QComboBox(wgt_connet);
        comboBox_canIndex->addItem(QString());
        comboBox_canIndex->addItem(QString());
        comboBox_canIndex->setObjectName("comboBox_canIndex");

        gridLayout->addWidget(comboBox_canIndex, 3, 1, 1, 1);

        label_3 = new QLabel(wgt_connet);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        comboBox_devType = new QComboBox(wgt_connet);
        comboBox_devType->addItem(QString());
        comboBox_devType->addItem(QString());
        comboBox_devType->setObjectName("comboBox_devType");

        gridLayout->addWidget(comboBox_devType, 0, 1, 1, 1);

        label_16 = new QLabel(wgt_connet);
        label_16->setObjectName("label_16");

        gridLayout->addWidget(label_16, 0, 0, 1, 1);

        comboBox_devIndex = new QComboBox(wgt_connet);
        comboBox_devIndex->addItem(QString());
        comboBox_devIndex->addItem(QString());
        comboBox_devIndex->addItem(QString());
        comboBox_devIndex->addItem(QString());
        comboBox_devIndex->setObjectName("comboBox_devIndex");

        gridLayout->addWidget(comboBox_devIndex, 1, 1, 1, 1);

        label_23 = new QLabel(wgt_connet);
        label_23->setObjectName("label_23");

        gridLayout->addWidget(label_23, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(-1, 10, -1, -1);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        btn_connectDev = new QPushButton(wgt_connet);
        btn_connectDev->setObjectName("btn_connectDev");
        btn_connectDev->setMinimumSize(QSize(50, 20));
        btn_connectDev->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_8->addWidget(btn_connectDev);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_8);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        wgt_scale = new QWidget(centralwidget);
        wgt_scale->setObjectName("wgt_scale");
        wgt_scale->setEnabled(true);
        wgt_scale->setGeometry(QRect(180, 70, 182, 201));
        verticalLayout_2 = new QVBoxLayout(wgt_scale);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_6 = new QLabel(wgt_scale);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(75, 0));

        horizontalLayout_2->addWidget(label_6);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btn_closeScale = new QPushButton(wgt_scale);
        btn_closeScale->setObjectName("btn_closeScale");
        btn_closeScale->setMinimumSize(QSize(17, 17));
        btn_closeScale->setMaximumSize(QSize(17, 17));
        btn_closeScale->setFont(font);
        btn_closeScale->setStyleSheet(QString::fromUtf8("border-image: url(:/images/btn_close .png);"));

        horizontalLayout_2->addWidget(btn_closeScale);


        verticalLayout_2->addLayout(horizontalLayout_2);

        line_2 = new QFrame(wgt_scale);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_2->addWidget(line_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(-1, 8, -1, -1);
        label_8 = new QLabel(wgt_scale);
        label_8->setObjectName("label_8");

        gridLayout_2->addWidget(label_8, 1, 0, 1, 1);

        lineEdit_xAxisRange = new QLineEdit(wgt_scale);
        lineEdit_xAxisRange->setObjectName("lineEdit_xAxisRange");

        gridLayout_2->addWidget(lineEdit_xAxisRange, 0, 1, 1, 1);

        label_7 = new QLabel(wgt_scale);
        label_7->setObjectName("label_7");

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        label_2 = new QLabel(wgt_scale);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        lineEdit_yAxisRange = new QLineEdit(wgt_scale);
        lineEdit_yAxisRange->setObjectName("lineEdit_yAxisRange");

        gridLayout_2->addWidget(lineEdit_yAxisRange, 1, 1, 1, 1);

        lineEdit_angleRange = new QLineEdit(wgt_scale);
        lineEdit_angleRange->setObjectName("lineEdit_angleRange");

        gridLayout_2->addWidget(lineEdit_angleRange, 2, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(-1, 10, -1, -1);
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_8);

        btn_setRange = new QPushButton(wgt_scale);
        btn_setRange->setObjectName("btn_setRange");
        btn_setRange->setMinimumSize(QSize(50, 20));

        horizontalLayout_9->addWidget(btn_setRange);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);


        verticalLayout_2->addLayout(horizontalLayout_9);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        wgt_radarBD = new QWidget(centralwidget);
        wgt_radarBD->setObjectName("wgt_radarBD");
        wgt_radarBD->setEnabled(true);
        wgt_radarBD->setGeometry(QRect(0, 280, 183, 251));
        verticalLayout_3 = new QVBoxLayout(wgt_radarBD);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_9 = new QLabel(wgt_radarBD);
        label_9->setObjectName("label_9");
        label_9->setMinimumSize(QSize(75, 0));

        horizontalLayout_3->addWidget(label_9);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        btn_closeRadarBD = new QPushButton(wgt_radarBD);
        btn_closeRadarBD->setObjectName("btn_closeRadarBD");
        btn_closeRadarBD->setMinimumSize(QSize(17, 17));
        btn_closeRadarBD->setMaximumSize(QSize(17, 17));
        btn_closeRadarBD->setFont(font);
        btn_closeRadarBD->setStyleSheet(QString::fromUtf8("border-image: url(:/images/btn_close .png);"));

        horizontalLayout_3->addWidget(btn_closeRadarBD);


        verticalLayout_3->addLayout(horizontalLayout_3);

        line_3 = new QFrame(wgt_radarBD);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_3->addWidget(line_3);

        label_12 = new QLabel(wgt_radarBD);
        label_12->setObjectName("label_12");

        verticalLayout_3->addWidget(label_12);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName("gridLayout_10");
        checkBox_1mbd = new QCheckBox(wgt_radarBD);
        checkBox_1mbd->setObjectName("checkBox_1mbd");
        checkBox_1mbd->setCheckable(true);

        gridLayout_10->addWidget(checkBox_1mbd, 0, 0, 1, 1);

        btn_1mbd = new QPushButton(wgt_radarBD);
        btn_1mbd->setObjectName("btn_1mbd");

        gridLayout_10->addWidget(btn_1mbd, 0, 1, 1, 1);

        checkBox_3mbd = new QCheckBox(wgt_radarBD);
        checkBox_3mbd->setObjectName("checkBox_3mbd");
        checkBox_3mbd->setCheckable(true);

        gridLayout_10->addWidget(checkBox_3mbd, 1, 0, 1, 1);

        btn_3mbd = new QPushButton(wgt_radarBD);
        btn_3mbd->setObjectName("btn_3mbd");

        gridLayout_10->addWidget(btn_3mbd, 1, 1, 1, 1);

        checkBox_5mbd = new QCheckBox(wgt_radarBD);
        checkBox_5mbd->setObjectName("checkBox_5mbd");
        checkBox_5mbd->setCheckable(true);

        gridLayout_10->addWidget(checkBox_5mbd, 2, 0, 1, 1);

        btn_5mbd = new QPushButton(wgt_radarBD);
        btn_5mbd->setObjectName("btn_5mbd");

        gridLayout_10->addWidget(btn_5mbd, 2, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_10);

        label_13 = new QLabel(wgt_radarBD);
        label_13->setObjectName("label_13");

        verticalLayout_3->addWidget(label_13);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName("gridLayout_5");
        label_17 = new QLabel(wgt_radarBD);
        label_17->setObjectName("label_17");
        label_17->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_5->addWidget(label_17, 0, 0, 1, 1);

        checkBox_453mbd = new QCheckBox(wgt_radarBD);
        checkBox_453mbd->setObjectName("checkBox_453mbd");
        checkBox_453mbd->setCheckable(true);

        gridLayout_5->addWidget(checkBox_453mbd, 0, 1, 1, 1);

        checkBox_455mbd = new QCheckBox(wgt_radarBD);
        checkBox_455mbd->setObjectName("checkBox_455mbd");
        checkBox_455mbd->setCheckable(true);

        gridLayout_5->addWidget(checkBox_455mbd, 0, 2, 1, 1);

        comboBox_45bd = new QComboBox(wgt_radarBD);
        comboBox_45bd->addItem(QString());
        comboBox_45bd->addItem(QString());
        comboBox_45bd->setObjectName("comboBox_45bd");

        gridLayout_5->addWidget(comboBox_45bd, 1, 0, 1, 1);

        btn_45bd = new QPushButton(wgt_radarBD);
        btn_45bd->setObjectName("btn_45bd");

        gridLayout_5->addWidget(btn_45bd, 1, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout_5);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName("gridLayout_6");
        label_18 = new QLabel(wgt_radarBD);
        label_18->setObjectName("label_18");
        label_18->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_6->addWidget(label_18, 0, 0, 1, 1);

        checkBox_fu453mbd = new QCheckBox(wgt_radarBD);
        checkBox_fu453mbd->setObjectName("checkBox_fu453mbd");
        checkBox_fu453mbd->setCheckable(true);

        gridLayout_6->addWidget(checkBox_fu453mbd, 0, 1, 1, 1);

        checkBox_fu455mbd = new QCheckBox(wgt_radarBD);
        checkBox_fu455mbd->setObjectName("checkBox_fu455mbd");
        checkBox_fu455mbd->setCheckable(true);

        gridLayout_6->addWidget(checkBox_fu455mbd, 0, 2, 1, 1);

        comboBox_fu45bd = new QComboBox(wgt_radarBD);
        comboBox_fu45bd->addItem(QString());
        comboBox_fu45bd->addItem(QString());
        comboBox_fu45bd->setObjectName("comboBox_fu45bd");

        gridLayout_6->addWidget(comboBox_fu45bd, 1, 0, 1, 1);

        btn_fu45bd = new QPushButton(wgt_radarBD);
        btn_fu45bd->setObjectName("btn_fu45bd");

        gridLayout_6->addWidget(btn_fu45bd, 1, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout_6);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        wgt_obstacleSet = new QWidget(centralwidget);
        wgt_obstacleSet->setObjectName("wgt_obstacleSet");
        wgt_obstacleSet->setEnabled(true);
        wgt_obstacleSet->setGeometry(QRect(390, 70, 271, 201));
        verticalLayout_4 = new QVBoxLayout(wgt_obstacleSet);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_11 = new QLabel(wgt_obstacleSet);
        label_11->setObjectName("label_11");
        label_11->setMinimumSize(QSize(90, 0));

        horizontalLayout_4->addWidget(label_11);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        btn_closeObstacleSet = new QPushButton(wgt_obstacleSet);
        btn_closeObstacleSet->setObjectName("btn_closeObstacleSet");
        btn_closeObstacleSet->setMinimumSize(QSize(17, 17));
        btn_closeObstacleSet->setMaximumSize(QSize(17, 17));
        btn_closeObstacleSet->setFont(font);
        btn_closeObstacleSet->setStyleSheet(QString::fromUtf8("border-image: url(:/images/btn_close .png);"));

        horizontalLayout_4->addWidget(btn_closeObstacleSet);


        verticalLayout_4->addLayout(horizontalLayout_4);

        line_4 = new QFrame(wgt_obstacleSet);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_4->addWidget(line_4);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(-1, 8, -1, -1);
        checkBox_targetAngle = new QCheckBox(wgt_obstacleSet);
        checkBox_targetAngle->setObjectName("checkBox_targetAngle");
        checkBox_targetAngle->setChecked(true);

        gridLayout_4->addWidget(checkBox_targetAngle, 0, 0, 1, 1);

        checkBox_targetRange = new QCheckBox(wgt_obstacleSet);
        checkBox_targetRange->setObjectName("checkBox_targetRange");
        checkBox_targetRange->setChecked(true);

        gridLayout_4->addWidget(checkBox_targetRange, 0, 1, 1, 1);

        checkBox_targetRCS = new QCheckBox(wgt_obstacleSet);
        checkBox_targetRCS->setObjectName("checkBox_targetRCS");
        checkBox_targetRCS->setChecked(true);

        gridLayout_4->addWidget(checkBox_targetRCS, 1, 1, 1, 1);

        checkBox_targetClass = new QCheckBox(wgt_obstacleSet);
        checkBox_targetClass->setObjectName("checkBox_targetClass");
        checkBox_targetClass->setChecked(true);

        gridLayout_4->addWidget(checkBox_targetClass, 2, 1, 1, 1);

        checkBox_targetV = new QCheckBox(wgt_obstacleSet);
        checkBox_targetV->setObjectName("checkBox_targetV");
        checkBox_targetV->setChecked(true);

        gridLayout_4->addWidget(checkBox_targetV, 1, 0, 1, 1);

        checkBox_targetState = new QCheckBox(wgt_obstacleSet);
        checkBox_targetState->setObjectName("checkBox_targetState");
        checkBox_targetState->setChecked(true);

        gridLayout_4->addWidget(checkBox_targetState, 2, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout_4);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(-1, 10, -1, -1);
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_10);

        btn_obstacleSetSure = new QPushButton(wgt_obstacleSet);
        btn_obstacleSetSure->setObjectName("btn_obstacleSetSure");
        btn_obstacleSetSure->setMinimumSize(QSize(50, 20));

        horizontalLayout_10->addWidget(btn_obstacleSetSure);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_11);


        verticalLayout_4->addLayout(horizontalLayout_10);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);

        wgt_targetSet = new QWidget(centralwidget);
        wgt_targetSet->setObjectName("wgt_targetSet");
        wgt_targetSet->setEnabled(true);
        wgt_targetSet->setGeometry(QRect(210, 290, 183, 251));
        verticalLayout_5 = new QVBoxLayout(wgt_targetSet);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_10 = new QLabel(wgt_targetSet);
        label_10->setObjectName("label_10");
        label_10->setMinimumSize(QSize(75, 0));

        horizontalLayout_5->addWidget(label_10);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_12);

        btn_closeTargetSet = new QPushButton(wgt_targetSet);
        btn_closeTargetSet->setObjectName("btn_closeTargetSet");
        btn_closeTargetSet->setMinimumSize(QSize(17, 17));
        btn_closeTargetSet->setMaximumSize(QSize(17, 17));
        btn_closeTargetSet->setFont(font);
        btn_closeTargetSet->setStyleSheet(QString::fromUtf8("border-image: url(:/images/btn_close .png);"));

        horizontalLayout_5->addWidget(btn_closeTargetSet);


        verticalLayout_5->addLayout(horizontalLayout_5);

        line_5 = new QFrame(wgt_targetSet);
        line_5->setObjectName("line_5");
        line_5->setFrameShape(QFrame::Shape::HLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_5->addWidget(line_5);

        label_14 = new QLabel(wgt_targetSet);
        label_14->setObjectName("label_14");

        verticalLayout_5->addWidget(label_14);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName("gridLayout_11");
        checkBox_movingTarget = new QCheckBox(wgt_targetSet);
        checkBox_movingTarget->setObjectName("checkBox_movingTarget");
        checkBox_movingTarget->setChecked(true);

        gridLayout_11->addWidget(checkBox_movingTarget, 0, 1, 1, 1);

        checkBox_allTarget = new QCheckBox(wgt_targetSet);
        checkBox_allTarget->setObjectName("checkBox_allTarget");
        checkBox_allTarget->setChecked(true);

        gridLayout_11->addWidget(checkBox_allTarget, 0, 0, 1, 1);

        checkBox_crossingRightTarget = new QCheckBox(wgt_targetSet);
        checkBox_crossingRightTarget->setObjectName("checkBox_crossingRightTarget");
        checkBox_crossingRightTarget->setChecked(true);

        gridLayout_11->addWidget(checkBox_crossingRightTarget, 2, 1, 1, 1);

        checkBox_stationaryTarget = new QCheckBox(wgt_targetSet);
        checkBox_stationaryTarget->setObjectName("checkBox_stationaryTarget");
        checkBox_stationaryTarget->setChecked(true);

        gridLayout_11->addWidget(checkBox_stationaryTarget, 1, 0, 1, 1);

        checkBox_crossingLeftTarget = new QCheckBox(wgt_targetSet);
        checkBox_crossingLeftTarget->setObjectName("checkBox_crossingLeftTarget");
        checkBox_crossingLeftTarget->setChecked(true);

        gridLayout_11->addWidget(checkBox_crossingLeftTarget, 2, 0, 1, 1);

        checkBox_oncomingTarget = new QCheckBox(wgt_targetSet);
        checkBox_oncomingTarget->setObjectName("checkBox_oncomingTarget");
        checkBox_oncomingTarget->setChecked(true);

        gridLayout_11->addWidget(checkBox_oncomingTarget, 1, 1, 1, 1);

        checkBox_stoppedTarget = new QCheckBox(wgt_targetSet);
        checkBox_stoppedTarget->setObjectName("checkBox_stoppedTarget");
        checkBox_stoppedTarget->setChecked(true);

        gridLayout_11->addWidget(checkBox_stoppedTarget, 3, 0, 1, 1);

        checkBox_unknownTarget = new QCheckBox(wgt_targetSet);
        checkBox_unknownTarget->setObjectName("checkBox_unknownTarget");
        checkBox_unknownTarget->setChecked(true);

        gridLayout_11->addWidget(checkBox_unknownTarget, 3, 1, 1, 1);


        verticalLayout_5->addLayout(gridLayout_11);

        label_15 = new QLabel(wgt_targetSet);
        label_15->setObjectName("label_15");

        verticalLayout_5->addWidget(label_15);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName("gridLayout_7");
        checkBox_carType = new QCheckBox(wgt_targetSet);
        checkBox_carType->setObjectName("checkBox_carType");
        checkBox_carType->setChecked(true);

        gridLayout_7->addWidget(checkBox_carType, 1, 1, 1, 1);

        checkBox_pointType = new QCheckBox(wgt_targetSet);
        checkBox_pointType->setObjectName("checkBox_pointType");
        checkBox_pointType->setChecked(true);

        gridLayout_7->addWidget(checkBox_pointType, 1, 0, 1, 1);

        checkBox_allType = new QCheckBox(wgt_targetSet);
        checkBox_allType->setObjectName("checkBox_allType");
        checkBox_allType->setChecked(true);

        gridLayout_7->addWidget(checkBox_allType, 0, 0, 1, 1);


        verticalLayout_5->addLayout(gridLayout_7);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName("gridLayout_8");

        verticalLayout_5->addLayout(gridLayout_8);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_6);

        wgt_dataShow = new QWidget(centralwidget);
        wgt_dataShow->setObjectName("wgt_dataShow");
        wgt_dataShow->setEnabled(true);
        wgt_dataShow->setGeometry(QRect(280, 10, 637, 277));
        wgt_dataShow->setStyleSheet(QString::fromUtf8("background-color: rgb(13, 20, 71);"));
        verticalLayout_8 = new QVBoxLayout(wgt_dataShow);
        verticalLayout_8->setSpacing(4);
        verticalLayout_8->setObjectName("verticalLayout_8");
        tableView = new QTableView(wgt_dataShow);
        tableView->setObjectName("tableView");

        verticalLayout_8->addWidget(tableView);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName("gridLayout_9");
        btn_clearTable = new QPushButton(wgt_dataShow);
        btn_clearTable->setObjectName("btn_clearTable");
        btn_clearTable->setMinimumSize(QSize(0, 20));

        gridLayout_9->addWidget(btn_clearTable, 0, 0, 1, 1);

        btn_pause = new QPushButton(wgt_dataShow);
        btn_pause->setObjectName("btn_pause");
        btn_pause->setMinimumSize(QSize(0, 20));

        gridLayout_9->addWidget(btn_pause, 0, 1, 1, 1);

        checkBox_parseData = new QCheckBox(wgt_dataShow);
        checkBox_parseData->setObjectName("checkBox_parseData");

        gridLayout_9->addWidget(checkBox_parseData, 1, 0, 1, 1);

        btn_comDoc = new QPushButton(wgt_dataShow);
        btn_comDoc->setObjectName("btn_comDoc");
        btn_comDoc->setMinimumSize(QSize(0, 20));

        gridLayout_9->addWidget(btn_comDoc, 1, 1, 1, 1);


        horizontalLayout_15->addLayout(gridLayout_9);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName("gridLayout_12");
        label_19 = new QLabel(wgt_dataShow);
        label_19->setObjectName("label_19");

        gridLayout_12->addWidget(label_19, 0, 0, 1, 1);

        comboBox_sendType = new QComboBox(wgt_dataShow);
        comboBox_sendType->addItem(QString());
        comboBox_sendType->addItem(QString());
        comboBox_sendType->setObjectName("comboBox_sendType");

        gridLayout_12->addWidget(comboBox_sendType, 0, 1, 1, 1);

        label_20 = new QLabel(wgt_dataShow);
        label_20->setObjectName("label_20");

        gridLayout_12->addWidget(label_20, 0, 2, 1, 1);

        lineEdit_frameID = new QLineEdit(wgt_dataShow);
        lineEdit_frameID->setObjectName("lineEdit_frameID");

        gridLayout_12->addWidget(lineEdit_frameID, 0, 3, 1, 1);

        label_24 = new QLabel(wgt_dataShow);
        label_24->setObjectName("label_24");

        gridLayout_12->addWidget(label_24, 0, 4, 1, 1);

        label_25 = new QLabel(wgt_dataShow);
        label_25->setObjectName("label_25");

        gridLayout_12->addWidget(label_25, 1, 0, 1, 1);

        comboBox_frameType = new QComboBox(wgt_dataShow);
        comboBox_frameType->addItem(QString());
        comboBox_frameType->addItem(QString());
        comboBox_frameType->setObjectName("comboBox_frameType");

        gridLayout_12->addWidget(comboBox_frameType, 1, 1, 1, 1);

        label_26 = new QLabel(wgt_dataShow);
        label_26->setObjectName("label_26");

        gridLayout_12->addWidget(label_26, 1, 2, 1, 1);

        comboBox_dataLen = new QComboBox(wgt_dataShow);
        comboBox_dataLen->addItem(QString());
        comboBox_dataLen->addItem(QString());
        comboBox_dataLen->addItem(QString());
        comboBox_dataLen->addItem(QString());
        comboBox_dataLen->addItem(QString());
        comboBox_dataLen->addItem(QString());
        comboBox_dataLen->addItem(QString());
        comboBox_dataLen->addItem(QString());
        comboBox_dataLen->setObjectName("comboBox_dataLen");

        gridLayout_12->addWidget(comboBox_dataLen, 1, 3, 1, 1);

        label_27 = new QLabel(wgt_dataShow);
        label_27->setObjectName("label_27");

        gridLayout_12->addWidget(label_27, 1, 4, 1, 1);

        lineEdit_data = new QLineEdit(wgt_dataShow);
        lineEdit_data->setObjectName("lineEdit_data");

        gridLayout_12->addWidget(lineEdit_data, 1, 5, 1, 1);

        label_34 = new QLabel(wgt_dataShow);
        label_34->setObjectName("label_34");

        gridLayout_12->addWidget(label_34, 2, 0, 1, 1);

        comboBox_frameFormat = new QComboBox(wgt_dataShow);
        comboBox_frameFormat->addItem(QString());
        comboBox_frameFormat->addItem(QString());
        comboBox_frameFormat->setObjectName("comboBox_frameFormat");

        gridLayout_12->addWidget(comboBox_frameFormat, 2, 1, 1, 1);

        label_35 = new QLabel(wgt_dataShow);
        label_35->setObjectName("label_35");

        gridLayout_12->addWidget(label_35, 2, 2, 1, 1);

        pushButton_send = new QPushButton(wgt_dataShow);
        pushButton_send->setObjectName("pushButton_send");
        pushButton_send->setMinimumSize(QSize(0, 20));

        gridLayout_12->addWidget(pushButton_send, 2, 4, 1, 1);

        pushButton_stop = new QPushButton(wgt_dataShow);
        pushButton_stop->setObjectName("pushButton_stop");
        pushButton_stop->setMinimumSize(QSize(0, 20));

        gridLayout_12->addWidget(pushButton_stop, 2, 5, 1, 1);

        lineEdit_sendTimes = new QLineEdit(wgt_dataShow);
        lineEdit_sendTimes->setObjectName("lineEdit_sendTimes");

        gridLayout_12->addWidget(lineEdit_sendTimes, 2, 3, 1, 1);

        lineEdit_sendCycle = new QLineEdit(wgt_dataShow);
        lineEdit_sendCycle->setObjectName("lineEdit_sendCycle");

        gridLayout_12->addWidget(lineEdit_sendCycle, 0, 5, 1, 1);


        horizontalLayout_15->addLayout(gridLayout_12);


        verticalLayout_8->addLayout(horizontalLayout_15);

        wgt_dataSave = new QWidget(centralwidget);
        wgt_dataSave->setObjectName("wgt_dataSave");
        wgt_dataSave->setEnabled(true);
        wgt_dataSave->setGeometry(QRect(650, 380, 237, 199));
        wgt_dataSave->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_9 = new QVBoxLayout(wgt_dataSave);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName("verticalLayout_9");
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        label_36 = new QLabel(wgt_dataSave);
        label_36->setObjectName("label_36");
        label_36->setMinimumSize(QSize(75, 0));

        horizontalLayout_16->addWidget(label_36);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_14);

        btn_closeDataSave = new QPushButton(wgt_dataSave);
        btn_closeDataSave->setObjectName("btn_closeDataSave");
        btn_closeDataSave->setMinimumSize(QSize(17, 17));
        btn_closeDataSave->setMaximumSize(QSize(17, 17));
        btn_closeDataSave->setFont(font);
        btn_closeDataSave->setStyleSheet(QString::fromUtf8("border-image: url(:/images/btn_close .png);"));

        horizontalLayout_16->addWidget(btn_closeDataSave);


        verticalLayout_9->addLayout(horizontalLayout_16);

        line_7 = new QFrame(wgt_dataSave);
        line_7->setObjectName("line_7");
        line_7->setFrameShape(QFrame::Shape::HLine);
        line_7->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_9->addWidget(line_7);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        horizontalLayout_17->setContentsMargins(-1, 8, -1, -1);
        label_37 = new QLabel(wgt_dataSave);
        label_37->setObjectName("label_37");

        horizontalLayout_17->addWidget(label_37);

        lineEdit_saveLine = new QLineEdit(wgt_dataSave);
        lineEdit_saveLine->setObjectName("lineEdit_saveLine");

        horizontalLayout_17->addWidget(lineEdit_saveLine);


        verticalLayout_9->addLayout(horizontalLayout_17);

        gridLayout_13 = new QGridLayout();
        gridLayout_13->setObjectName("gridLayout_13");
        label_38 = new QLabel(wgt_dataSave);
        label_38->setObjectName("label_38");

        gridLayout_13->addWidget(label_38, 0, 0, 2, 1);

        checkBox_bin = new QCheckBox(wgt_dataSave);
        checkBox_bin->setObjectName("checkBox_bin");
        checkBox_bin->setMinimumSize(QSize(0, 19));

        gridLayout_13->addWidget(checkBox_bin, 0, 1, 1, 2);

        checkBox_excel = new QCheckBox(wgt_dataSave);
        checkBox_excel->setObjectName("checkBox_excel");
        checkBox_excel->setMinimumSize(QSize(0, 19));

        gridLayout_13->addWidget(checkBox_excel, 0, 3, 1, 2);

        checkBox_txt = new QCheckBox(wgt_dataSave);
        checkBox_txt->setObjectName("checkBox_txt");
        checkBox_txt->setMinimumSize(QSize(0, 19));

        gridLayout_13->addWidget(checkBox_txt, 1, 1, 1, 1);

        checkBox_asc = new QCheckBox(wgt_dataSave);
        checkBox_asc->setObjectName("checkBox_asc");
        checkBox_asc->setMinimumSize(QSize(0, 19));

        gridLayout_13->addWidget(checkBox_asc, 1, 2, 1, 2);

        checkBox_blf = new QCheckBox(wgt_dataSave);
        checkBox_blf->setObjectName("checkBox_blf");
        checkBox_blf->setMinimumSize(QSize(0, 19));

        gridLayout_13->addWidget(checkBox_blf, 1, 4, 1, 1);


        verticalLayout_9->addLayout(gridLayout_13);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        horizontalLayout_18->setContentsMargins(-1, 4, -1, -1);
        label_39 = new QLabel(wgt_dataSave);
        label_39->setObjectName("label_39");

        horizontalLayout_18->addWidget(label_39);

        lineEdit_savaPath = new QLineEdit(wgt_dataSave);
        lineEdit_savaPath->setObjectName("lineEdit_savaPath");
        lineEdit_savaPath->setReadOnly(true);

        horizontalLayout_18->addWidget(lineEdit_savaPath);

        pushButton_22 = new QPushButton(wgt_dataSave);
        pushButton_22->setObjectName("pushButton_22");

        horizontalLayout_18->addWidget(pushButton_22);


        verticalLayout_9->addLayout(horizontalLayout_18);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName("horizontalLayout_26");
        horizontalLayout_26->setContentsMargins(-1, 10, -1, -1);
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_26->addItem(horizontalSpacer_15);

        pushButton_23 = new QPushButton(wgt_dataSave);
        pushButton_23->setObjectName("pushButton_23");
        pushButton_23->setMinimumSize(QSize(50, 20));

        horizontalLayout_26->addWidget(pushButton_23);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_26->addItem(horizontalSpacer_16);


        verticalLayout_9->addLayout(horizontalLayout_26);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_2);

        verticalLayout_9->setStretch(2, 1);
        verticalLayout_9->setStretch(3, 2);
        verticalLayout_9->setStretch(4, 1);
        wgt_paramSet = new QWidget(centralwidget);
        wgt_paramSet->setObjectName("wgt_paramSet");
        wgt_paramSet->setEnabled(true);
        wgt_paramSet->setGeometry(QRect(410, 290, 251, 331));
        verticalLayout_7 = new QVBoxLayout(wgt_paramSet);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_40 = new QLabel(wgt_paramSet);
        label_40->setObjectName("label_40");
        label_40->setMinimumSize(QSize(75, 0));

        horizontalLayout_6->addWidget(label_40);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_13);

        btn_closeParamSet = new QPushButton(wgt_paramSet);
        btn_closeParamSet->setObjectName("btn_closeParamSet");
        btn_closeParamSet->setMinimumSize(QSize(17, 17));
        btn_closeParamSet->setMaximumSize(QSize(17, 17));
        btn_closeParamSet->setFont(font);
        btn_closeParamSet->setStyleSheet(QString::fromUtf8("border-image: url(:/images/btn_close .png);"));

        horizontalLayout_6->addWidget(btn_closeParamSet);


        verticalLayout_7->addLayout(horizontalLayout_6);

        line_6 = new QFrame(wgt_paramSet);
        line_6->setObjectName("line_6");
        line_6->setFrameShape(QFrame::Shape::HLine);
        line_6->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_7->addWidget(line_6);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        spinBox_2 = new QSpinBox(wgt_paramSet);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);

        gridLayout_3->addWidget(spinBox_2, 2, 1, 1, 1);

        checkBox_52 = new QCheckBox(wgt_paramSet);
        checkBox_52->setObjectName("checkBox_52");

        gridLayout_3->addWidget(checkBox_52, 6, 0, 1, 1);

        spinBox_21 = new QSpinBox(wgt_paramSet);
        spinBox_21->setObjectName("spinBox_21");
        spinBox_21->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);

        gridLayout_3->addWidget(spinBox_21, 7, 3, 1, 1);

        checkBox_44 = new QCheckBox(wgt_paramSet);
        checkBox_44->setObjectName("checkBox_44");

        gridLayout_3->addWidget(checkBox_44, 2, 0, 1, 1);

        spinBox_16 = new QSpinBox(wgt_paramSet);
        spinBox_16->setObjectName("spinBox_16");
        spinBox_16->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);

        gridLayout_3->addWidget(spinBox_16, 5, 1, 1, 1);

        spinBox_25 = new QSpinBox(wgt_paramSet);
        spinBox_25->setObjectName("spinBox_25");
        spinBox_25->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);

        gridLayout_3->addWidget(spinBox_25, 9, 3, 1, 1);

        label_33 = new QLabel(wgt_paramSet);
        label_33->setObjectName("label_33");
        label_33->setMinimumSize(QSize(15, 0));
        label_33->setMaximumSize(QSize(15, 16777215));
        label_33->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(label_33, 9, 2, 1, 1);

        label_22 = new QLabel(wgt_paramSet);
        label_22->setObjectName("label_22");
        label_22->setMinimumSize(QSize(15, 0));
        label_22->setMaximumSize(QSize(15, 16777215));
        label_22->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(label_22, 2, 2, 1, 1);

        spinBox_3 = new QSpinBox(wgt_paramSet);
        spinBox_3->setObjectName("spinBox_3");
        spinBox_3->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);

        gridLayout_3->addWidget(spinBox_3, 2, 3, 1, 1);

        checkBox_55 = new QCheckBox(wgt_paramSet);
        checkBox_55->setObjectName("checkBox_55");

        gridLayout_3->addWidget(checkBox_55, 9, 0, 1, 1);

        checkBox_42 = new QCheckBox(wgt_paramSet);
        checkBox_42->setObjectName("checkBox_42");

        gridLayout_3->addWidget(checkBox_42, 0, 0, 1, 1);

        spinBox_19 = new QSpinBox(wgt_paramSet);
        spinBox_19->setObjectName("spinBox_19");
        spinBox_19->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);

        gridLayout_3->addWidget(spinBox_19, 6, 3, 1, 1);

        label_32 = new QLabel(wgt_paramSet);
        label_32->setObjectName("label_32");
        label_32->setMinimumSize(QSize(15, 0));
        label_32->setMaximumSize(QSize(15, 16777215));
        label_32->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(label_32, 8, 2, 1, 1);

        label_21 = new QLabel(wgt_paramSet);
        label_21->setObjectName("label_21");
        label_21->setMinimumSize(QSize(15, 0));
        label_21->setMaximumSize(QSize(15, 16777215));
        label_21->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(label_21, 1, 2, 1, 1);

        checkBox_53 = new QCheckBox(wgt_paramSet);
        checkBox_53->setObjectName("checkBox_53");

        gridLayout_3->addWidget(checkBox_53, 7, 0, 1, 1);

        checkBox_45 = new QCheckBox(wgt_paramSet);
        checkBox_45->setObjectName("checkBox_45");

        gridLayout_3->addWidget(checkBox_45, 3, 0, 1, 1);

        spinBox_5 = new QSpinBox(wgt_paramSet);
        spinBox_5->setObjectName("spinBox_5");
        spinBox_5->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);

        gridLayout_3->addWidget(spinBox_5, 3, 3, 1, 1);

        spinBox_22 = new QSpinBox(wgt_paramSet);
        spinBox_22->setObjectName("spinBox_22");
        spinBox_22->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);

        gridLayout_3->addWidget(spinBox_22, 8, 1, 1, 1);

        spinBox_15 = new QSpinBox(wgt_paramSet);
        spinBox_15->setObjectName("spinBox_15");
        spinBox_15->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);

        gridLayout_3->addWidget(spinBox_15, 4, 3, 1, 1);

        spinBox_17 = new QSpinBox(wgt_paramSet);
        spinBox_17->setObjectName("spinBox_17");
        spinBox_17->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);

        gridLayout_3->addWidget(spinBox_17, 5, 3, 1, 1);

        checkBox_43 = new QCheckBox(wgt_paramSet);
        checkBox_43->setObjectName("checkBox_43");

        gridLayout_3->addWidget(checkBox_43, 1, 0, 1, 1);

        spinBox_23 = new QSpinBox(wgt_paramSet);
        spinBox_23->setObjectName("spinBox_23");
        spinBox_23->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);

        gridLayout_3->addWidget(spinBox_23, 8, 3, 1, 1);

        label_29 = new QLabel(wgt_paramSet);
        label_29->setObjectName("label_29");
        label_29->setMinimumSize(QSize(15, 0));
        label_29->setMaximumSize(QSize(15, 16777215));
        label_29->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(label_29, 5, 2, 1, 1);

        spinBox_20 = new QSpinBox(wgt_paramSet);
        spinBox_20->setObjectName("spinBox_20");
        spinBox_20->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);

        gridLayout_3->addWidget(spinBox_20, 7, 1, 1, 1);

        comboBox_4 = new QComboBox(wgt_paramSet);
        comboBox_4->setObjectName("comboBox_4");

        gridLayout_3->addWidget(comboBox_4, 1, 1, 1, 1);

        checkBox_54 = new QCheckBox(wgt_paramSet);
        checkBox_54->setObjectName("checkBox_54");

        gridLayout_3->addWidget(checkBox_54, 8, 0, 1, 1);

        spinBox_14 = new QSpinBox(wgt_paramSet);
        spinBox_14->setObjectName("spinBox_14");
        spinBox_14->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);

        gridLayout_3->addWidget(spinBox_14, 4, 1, 1, 1);

        spinBox = new QSpinBox(wgt_paramSet);
        spinBox->setObjectName("spinBox");
        spinBox->setFrame(true);
        spinBox->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        spinBox->setKeyboardTracking(true);
        spinBox->setProperty("showGroupSeparator", QVariant(false));

        gridLayout_3->addWidget(spinBox, 0, 1, 1, 3);

        spinBox_4 = new QSpinBox(wgt_paramSet);
        spinBox_4->setObjectName("spinBox_4");
        spinBox_4->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);

        gridLayout_3->addWidget(spinBox_4, 3, 1, 1, 1);

        label_28 = new QLabel(wgt_paramSet);
        label_28->setObjectName("label_28");
        label_28->setMinimumSize(QSize(15, 0));
        label_28->setMaximumSize(QSize(15, 16777215));
        label_28->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(label_28, 4, 2, 1, 1);

        checkBox_50 = new QCheckBox(wgt_paramSet);
        checkBox_50->setObjectName("checkBox_50");

        gridLayout_3->addWidget(checkBox_50, 4, 0, 1, 1);

        label_30 = new QLabel(wgt_paramSet);
        label_30->setObjectName("label_30");
        label_30->setMinimumSize(QSize(15, 0));
        label_30->setMaximumSize(QSize(15, 16777215));
        label_30->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(label_30, 6, 2, 1, 1);

        label_41 = new QLabel(wgt_paramSet);
        label_41->setObjectName("label_41");
        label_41->setMinimumSize(QSize(15, 0));
        label_41->setMaximumSize(QSize(15, 16777215));
        label_41->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(label_41, 3, 2, 1, 1);

        checkBox_51 = new QCheckBox(wgt_paramSet);
        checkBox_51->setObjectName("checkBox_51");

        gridLayout_3->addWidget(checkBox_51, 5, 0, 1, 1);

        spinBox_18 = new QSpinBox(wgt_paramSet);
        spinBox_18->setObjectName("spinBox_18");
        spinBox_18->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);

        gridLayout_3->addWidget(spinBox_18, 6, 1, 1, 1);

        spinBox_24 = new QSpinBox(wgt_paramSet);
        spinBox_24->setObjectName("spinBox_24");
        spinBox_24->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);

        gridLayout_3->addWidget(spinBox_24, 9, 1, 1, 1);

        label_31 = new QLabel(wgt_paramSet);
        label_31->setObjectName("label_31");
        label_31->setMinimumSize(QSize(15, 0));
        label_31->setMaximumSize(QSize(15, 16777215));
        label_31->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(label_31, 7, 2, 1, 1);

        comboBox_3 = new QComboBox(wgt_paramSet);
        comboBox_3->setObjectName("comboBox_3");

        gridLayout_3->addWidget(comboBox_3, 1, 3, 1, 1);


        verticalLayout_7->addLayout(gridLayout_3);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName("horizontalLayout_25");
        btn_returnParam = new QPushButton(wgt_paramSet);
        btn_returnParam->setObjectName("btn_returnParam");

        horizontalLayout_25->addWidget(btn_returnParam);

        btn_paramSure = new QPushButton(wgt_paramSet);
        btn_paramSure->setObjectName("btn_paramSure");

        horizontalLayout_25->addWidget(btn_paramSure);


        verticalLayout_7->addLayout(horizontalLayout_25);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_7);

        mmWaveRadar->setCentralWidget(centralwidget);
        wgt_dataShow->raise();
        layoutWidget->raise();
        wgt_connet->raise();
        wgt_scale->raise();
        wgt_radarBD->raise();
        wgt_targetSet->raise();
        wgt_dataSave->raise();
        wgt_paramSet->raise();
        wgt_obstacleSet->raise();

        retranslateUi(mmWaveRadar);

        comboBox_baud->setCurrentIndex(2);
        comboBox_dataLen->setCurrentIndex(7);


        QMetaObject::connectSlotsByName(mmWaveRadar);
    } // setupUi

    void retranslateUi(QMainWindow *mmWaveRadar)
    {
        mmWaveRadar->setWindowTitle(QCoreApplication::translate("mmWaveRadar", "mmWaveRadar", nullptr));
        btn_connet->setText(QCoreApplication::translate("mmWaveRadar", "\350\256\276\345\244\207\350\277\236\346\216\245", nullptr));
        btn_scale->setText(QCoreApplication::translate("mmWaveRadar", "\345\235\220\346\240\207\347\274\251\346\224\276", nullptr));
        btn_obstacleSet->setText(QCoreApplication::translate("mmWaveRadar", "\351\232\234\347\242\215\347\211\251\344\277\241\346\201\257\350\256\276\347\275\256", nullptr));
        btn_radarBD->setText(QCoreApplication::translate("mmWaveRadar", "\351\233\267\350\276\276\346\240\207\345\256\232", nullptr));
        btn_targetSet->setText(QCoreApplication::translate("mmWaveRadar", "\347\233\256\346\240\207\347\261\273\345\236\213", nullptr));
        btn_paramSet->setText(QCoreApplication::translate("mmWaveRadar", "\350\277\207\346\273\244\345\217\202\346\225\260", nullptr));
        btn_commProtocol->setText(QCoreApplication::translate("mmWaveRadar", "\351\200\232\344\277\241\345\215\217\350\256\256", nullptr));
        btn_dataSave->setText(QCoreApplication::translate("mmWaveRadar", "\346\225\260\346\215\256\344\277\235\345\255\230", nullptr));
        label->setText(QCoreApplication::translate("mmWaveRadar", "\350\256\276\345\244\207\350\277\236\346\216\245", nullptr));
        btn_closeConnect->setText(QString());
        comboBox_baud->setItemText(0, QCoreApplication::translate("mmWaveRadar", "125kbps", nullptr));
        comboBox_baud->setItemText(1, QCoreApplication::translate("mmWaveRadar", "250kbps", nullptr));
        comboBox_baud->setItemText(2, QCoreApplication::translate("mmWaveRadar", "500kbps", nullptr));
        comboBox_baud->setItemText(3, QCoreApplication::translate("mmWaveRadar", "1000kbps", nullptr));

        comboBox_mode->setItemText(0, QCoreApplication::translate("mmWaveRadar", "\346\255\243\345\270\270\346\250\241\345\274\217", nullptr));
        comboBox_mode->setItemText(1, QCoreApplication::translate("mmWaveRadar", "\345\217\252\350\257\273\346\250\241\345\274\217", nullptr));
        comboBox_mode->setItemText(2, QCoreApplication::translate("mmWaveRadar", "\350\207\252\345\217\221\350\207\252\346\224\266", nullptr));

        label_5->setText(QCoreApplication::translate("mmWaveRadar", "\345\267\245\344\275\234\346\250\241\345\274\217\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("mmWaveRadar", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        comboBox_canIndex->setItemText(0, QCoreApplication::translate("mmWaveRadar", "CAN-1", nullptr));
        comboBox_canIndex->setItemText(1, QCoreApplication::translate("mmWaveRadar", "CAN-2", nullptr));

        label_3->setText(QCoreApplication::translate("mmWaveRadar", "\347\253\257\345\217\243\345\217\267\357\274\232", nullptr));
        comboBox_devType->setItemText(0, QCoreApplication::translate("mmWaveRadar", "USBCAN-I", nullptr));
        comboBox_devType->setItemText(1, QCoreApplication::translate("mmWaveRadar", "USBCAN-II", nullptr));

        label_16->setText(QCoreApplication::translate("mmWaveRadar", "\350\256\276\345\244\207\347\261\273\345\236\213\357\274\232", nullptr));
        comboBox_devIndex->setItemText(0, QCoreApplication::translate("mmWaveRadar", "0", nullptr));
        comboBox_devIndex->setItemText(1, QCoreApplication::translate("mmWaveRadar", "1", nullptr));
        comboBox_devIndex->setItemText(2, QCoreApplication::translate("mmWaveRadar", "2", nullptr));
        comboBox_devIndex->setItemText(3, QCoreApplication::translate("mmWaveRadar", "3", nullptr));

        label_23->setText(QCoreApplication::translate("mmWaveRadar", "\350\256\276\345\244\207\347\264\242\345\274\225\357\274\232", nullptr));
        btn_connectDev->setText(QCoreApplication::translate("mmWaveRadar", "\350\277\236\346\216\245", nullptr));
        label_6->setText(QCoreApplication::translate("mmWaveRadar", "\345\235\220\346\240\207\347\274\251\346\224\276", nullptr));
        btn_closeScale->setText(QString());
        label_8->setText(QCoreApplication::translate("mmWaveRadar", "Y\350\275\264\350\214\203\345\233\264\357\274\210m\357\274\211\357\274\232", nullptr));
        lineEdit_xAxisRange->setText(QCoreApplication::translate("mmWaveRadar", "50", nullptr));
        label_7->setText(QCoreApplication::translate("mmWaveRadar", "X\350\275\264\350\214\203\345\233\264\357\274\210m\357\274\211\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("mmWaveRadar", "\350\247\222\345\272\246\350\214\203\345\233\264\357\274\210\302\260\357\274\211", nullptr));
        lineEdit_yAxisRange->setText(QCoreApplication::translate("mmWaveRadar", "50", nullptr));
        lineEdit_angleRange->setText(QCoreApplication::translate("mmWaveRadar", "120", nullptr));
        btn_setRange->setText(QCoreApplication::translate("mmWaveRadar", "\347\241\256\345\256\232", nullptr));
        label_9->setText(QCoreApplication::translate("mmWaveRadar", "\351\233\267\350\276\276\346\240\207\345\256\232", nullptr));
        btn_closeRadarBD->setText(QString());
        label_12->setText(QCoreApplication::translate("mmWaveRadar", "\350\267\235\347\246\273\346\240\207\345\256\232", nullptr));
        checkBox_1mbd->setText(QCoreApplication::translate("mmWaveRadar", "4m\346\240\207\345\256\232", nullptr));
        btn_1mbd->setText(QCoreApplication::translate("mmWaveRadar", "\346\240\207\345\256\232", nullptr));
        checkBox_3mbd->setText(QCoreApplication::translate("mmWaveRadar", "6m\346\240\207\345\256\232", nullptr));
        btn_3mbd->setText(QCoreApplication::translate("mmWaveRadar", "\346\240\207\345\256\232", nullptr));
        checkBox_5mbd->setText(QCoreApplication::translate("mmWaveRadar", "8m\346\240\207\345\256\232", nullptr));
        btn_5mbd->setText(QCoreApplication::translate("mmWaveRadar", "\346\240\207\345\256\232", nullptr));
        label_13->setText(QCoreApplication::translate("mmWaveRadar", "\350\247\222\345\272\246\346\240\207\345\256\232", nullptr));
        label_17->setText(QCoreApplication::translate("mmWaveRadar", "45\302\260", nullptr));
        checkBox_453mbd->setText(QCoreApplication::translate("mmWaveRadar", "3m\346\240\207\345\256\232", nullptr));
        checkBox_455mbd->setText(QCoreApplication::translate("mmWaveRadar", "5m\346\240\207\345\256\232", nullptr));
        comboBox_45bd->setItemText(0, QCoreApplication::translate("mmWaveRadar", "3m", nullptr));
        comboBox_45bd->setItemText(1, QCoreApplication::translate("mmWaveRadar", "5m", nullptr));

        btn_45bd->setText(QCoreApplication::translate("mmWaveRadar", "\346\240\207\345\256\232", nullptr));
        label_18->setText(QCoreApplication::translate("mmWaveRadar", "-45\302\260", nullptr));
        checkBox_fu453mbd->setText(QCoreApplication::translate("mmWaveRadar", "3m\346\240\207\345\256\232", nullptr));
        checkBox_fu455mbd->setText(QCoreApplication::translate("mmWaveRadar", "5m\346\240\207\345\256\232", nullptr));
        comboBox_fu45bd->setItemText(0, QCoreApplication::translate("mmWaveRadar", "3m", nullptr));
        comboBox_fu45bd->setItemText(1, QCoreApplication::translate("mmWaveRadar", "5m", nullptr));

        btn_fu45bd->setText(QCoreApplication::translate("mmWaveRadar", "\346\240\207\345\256\232", nullptr));
        label_11->setText(QCoreApplication::translate("mmWaveRadar", "\351\232\234\347\242\215\347\211\251\344\277\241\346\201\257\350\256\276\347\275\256", nullptr));
        btn_closeObstacleSet->setText(QString());
        checkBox_targetAngle->setText(QCoreApplication::translate("mmWaveRadar", "Target Angle\357\274\210\347\233\256\346\240\207\350\247\222\345\272\246\357\274\211", nullptr));
        checkBox_targetRange->setText(QCoreApplication::translate("mmWaveRadar", "Target Range(\347\233\256\346\240\207\350\214\203\345\233\264)", nullptr));
        checkBox_targetRCS->setText(QCoreApplication::translate("mmWaveRadar", "Target RCS\357\274\210\346\225\243\345\260\204\346\210\252\351\235\242\357\274\211", nullptr));
        checkBox_targetClass->setText(QCoreApplication::translate("mmWaveRadar", "Target Class\357\274\210\347\233\256\346\240\207\347\261\273\345\210\253\357\274\211", nullptr));
        checkBox_targetV->setText(QCoreApplication::translate("mmWaveRadar", "Target Velocity\357\274\210\347\233\256\346\240\207\351\200\237\345\272\246\357\274\211", nullptr));
        checkBox_targetState->setText(QCoreApplication::translate("mmWaveRadar", "Target State\357\274\210\347\233\256\346\240\207\347\212\266\346\200\201\357\274\211", nullptr));
        btn_obstacleSetSure->setText(QCoreApplication::translate("mmWaveRadar", "\347\241\256\345\256\232", nullptr));
        label_10->setText(QCoreApplication::translate("mmWaveRadar", "\347\233\256\346\240\207\350\256\276\347\275\256", nullptr));
        btn_closeTargetSet->setText(QString());
        label_14->setText(QCoreApplication::translate("mmWaveRadar", "\347\233\256\346\240\207\347\212\266\346\200\201", nullptr));
        checkBox_movingTarget->setText(QCoreApplication::translate("mmWaveRadar", "\347\247\273\345\212\250\347\233\256\346\240\207", nullptr));
        checkBox_allTarget->setText(QCoreApplication::translate("mmWaveRadar", "\346\211\200\346\234\211\347\233\256\346\240\207", nullptr));
        checkBox_crossingRightTarget->setText(QCoreApplication::translate("mmWaveRadar", "\345\217\263\350\275\254\347\233\256\346\240\207", nullptr));
        checkBox_stationaryTarget->setText(QCoreApplication::translate("mmWaveRadar", "\351\235\231\346\255\242\347\233\256\346\240\207", nullptr));
        checkBox_crossingLeftTarget->setText(QCoreApplication::translate("mmWaveRadar", "\345\267\246\350\275\254\347\233\256\346\240\207", nullptr));
        checkBox_oncomingTarget->setText(QCoreApplication::translate("mmWaveRadar", "\351\200\274\350\277\221\347\233\256\346\240\207", nullptr));
        checkBox_stoppedTarget->setText(QCoreApplication::translate("mmWaveRadar", "\345\267\262\345\201\234\346\255\242\347\233\256\346\240\207", nullptr));
        checkBox_unknownTarget->setText(QCoreApplication::translate("mmWaveRadar", "\346\234\252\347\237\245\347\233\256\346\240\207", nullptr));
        label_15->setText(QCoreApplication::translate("mmWaveRadar", "\347\233\256\346\240\207\347\261\273\345\236\213", nullptr));
        checkBox_carType->setText(QCoreApplication::translate("mmWaveRadar", "\350\275\246\347\261\273\345\236\213", nullptr));
        checkBox_pointType->setText(QCoreApplication::translate("mmWaveRadar", "\347\202\271\347\261\273\345\236\213", nullptr));
        checkBox_allType->setText(QCoreApplication::translate("mmWaveRadar", "\346\211\200\346\234\211\347\261\273\345\236\213", nullptr));
        btn_clearTable->setText(QCoreApplication::translate("mmWaveRadar", "\346\270\205\347\251\272\345\210\227\350\241\250", nullptr));
        btn_pause->setText(QCoreApplication::translate("mmWaveRadar", "\345\201\234\346\255\242\345\210\267\346\226\260", nullptr));
        checkBox_parseData->setText(QCoreApplication::translate("mmWaveRadar", "\346\225\260\346\215\256\350\247\243\346\236\220", nullptr));
        btn_comDoc->setText(QCoreApplication::translate("mmWaveRadar", "\351\200\232\344\277\241\345\215\217\350\256\256\346\226\207\346\241\243", nullptr));
        label_19->setText(QCoreApplication::translate("mmWaveRadar", "\345\217\221\351\200\201\346\226\271\345\274\217\357\274\232", nullptr));
        comboBox_sendType->setItemText(0, QCoreApplication::translate("mmWaveRadar", "\346\255\243\345\270\270\345\217\221\351\200\201", nullptr));
        comboBox_sendType->setItemText(1, QCoreApplication::translate("mmWaveRadar", "\345\215\225\346\254\241\345\217\221\351\200\201", nullptr));

        label_20->setText(QCoreApplication::translate("mmWaveRadar", "\345\270\247ID\357\274\210HEX\357\274\211\357\274\232", nullptr));
        lineEdit_frameID->setText(QCoreApplication::translate("mmWaveRadar", "06 01", nullptr));
        label_24->setText(QCoreApplication::translate("mmWaveRadar", "\345\217\221\351\200\201\345\221\250\346\234\237\357\274\210ms\357\274\211\357\274\232", nullptr));
        label_25->setText(QCoreApplication::translate("mmWaveRadar", "\345\270\247\347\261\273\345\236\213\357\274\232", nullptr));
        comboBox_frameType->setItemText(0, QCoreApplication::translate("mmWaveRadar", "\346\225\260\346\215\256\345\270\247", nullptr));
        comboBox_frameType->setItemText(1, QCoreApplication::translate("mmWaveRadar", "\350\277\234\347\250\213\345\270\247", nullptr));

        label_26->setText(QCoreApplication::translate("mmWaveRadar", "\346\225\260\346\215\256\351\225\277\345\272\246\357\274\232", nullptr));
        comboBox_dataLen->setItemText(0, QCoreApplication::translate("mmWaveRadar", "1", nullptr));
        comboBox_dataLen->setItemText(1, QCoreApplication::translate("mmWaveRadar", "2", nullptr));
        comboBox_dataLen->setItemText(2, QCoreApplication::translate("mmWaveRadar", "3", nullptr));
        comboBox_dataLen->setItemText(3, QCoreApplication::translate("mmWaveRadar", "4", nullptr));
        comboBox_dataLen->setItemText(4, QCoreApplication::translate("mmWaveRadar", "5", nullptr));
        comboBox_dataLen->setItemText(5, QCoreApplication::translate("mmWaveRadar", "6", nullptr));
        comboBox_dataLen->setItemText(6, QCoreApplication::translate("mmWaveRadar", "7", nullptr));
        comboBox_dataLen->setItemText(7, QCoreApplication::translate("mmWaveRadar", "8", nullptr));

        label_27->setText(QCoreApplication::translate("mmWaveRadar", "\345\217\221\351\200\201\346\225\260\346\215\256\357\274\210HEX\357\274\211\357\274\232", nullptr));
        lineEdit_data->setText(QCoreApplication::translate("mmWaveRadar", "b1 10 0f 00 00 00 00 00", nullptr));
        label_34->setText(QCoreApplication::translate("mmWaveRadar", "\345\270\247\346\240\274\345\274\217\357\274\232", nullptr));
        comboBox_frameFormat->setItemText(0, QCoreApplication::translate("mmWaveRadar", "\346\240\207\345\207\206\345\270\247", nullptr));
        comboBox_frameFormat->setItemText(1, QCoreApplication::translate("mmWaveRadar", "\346\211\251\345\261\225\345\270\247", nullptr));

        label_35->setText(QCoreApplication::translate("mmWaveRadar", "\345\217\221\351\200\201\346\254\241\346\225\260", nullptr));
        pushButton_send->setText(QCoreApplication::translate("mmWaveRadar", "\345\217\221\351\200\201", nullptr));
        pushButton_stop->setText(QCoreApplication::translate("mmWaveRadar", "\345\201\234\346\255\242", nullptr));
        lineEdit_sendTimes->setText(QCoreApplication::translate("mmWaveRadar", "1", nullptr));
        lineEdit_sendCycle->setText(QCoreApplication::translate("mmWaveRadar", "10", nullptr));
        label_36->setText(QCoreApplication::translate("mmWaveRadar", "\346\225\260\346\215\256\344\277\235\345\255\230", nullptr));
        btn_closeDataSave->setText(QString());
        label_37->setText(QCoreApplication::translate("mmWaveRadar", "\344\277\235\345\255\230\350\241\214\346\225\260\357\274\232", nullptr));
        lineEdit_saveLine->setText(QCoreApplication::translate("mmWaveRadar", "1000", nullptr));
        label_38->setText(QCoreApplication::translate("mmWaveRadar", "\346\226\207\344\273\266\346\240\274\345\274\217\357\274\232", nullptr));
        checkBox_bin->setText(QCoreApplication::translate("mmWaveRadar", "\344\272\214\350\277\233\345\210\266\346\226\207\344\273\266", nullptr));
        checkBox_excel->setText(QCoreApplication::translate("mmWaveRadar", "Excel\346\226\207\344\273\266", nullptr));
        checkBox_txt->setText(QCoreApplication::translate("mmWaveRadar", "\346\226\207\346\234\254\346\226\207\344\273\266", nullptr));
        checkBox_asc->setText(QCoreApplication::translate("mmWaveRadar", "ASC\346\226\207\344\273\266", nullptr));
        checkBox_blf->setText(QCoreApplication::translate("mmWaveRadar", "BLF\346\226\207\344\273\266", nullptr));
        label_39->setText(QCoreApplication::translate("mmWaveRadar", "\344\277\235\345\255\230\350\267\257\345\276\204\357\274\232", nullptr));
        pushButton_22->setText(QCoreApplication::translate("mmWaveRadar", "\346\233\264\346\224\271\350\267\257\345\276\204", nullptr));
        pushButton_23->setText(QCoreApplication::translate("mmWaveRadar", "\347\241\256\345\256\232", nullptr));
        label_40->setText(QCoreApplication::translate("mmWaveRadar", "\350\277\207\346\273\244\345\217\202\346\225\260", nullptr));
        btn_closeParamSet->setText(QString());
        checkBox_52->setText(QCoreApplication::translate("mmWaveRadar", "\346\216\242\346\265\213\347\233\256\346\240\207RCS\345\214\272\351\227\264", nullptr));
        checkBox_44->setText(QCoreApplication::translate("mmWaveRadar", "\347\233\256\346\240\207\347\272\265\345\220\221\350\267\235\347\246\273\345\214\272\351\227\264", nullptr));
        label_33->setText(QCoreApplication::translate("mmWaveRadar", "\350\207\263", nullptr));
        label_22->setText(QCoreApplication::translate("mmWaveRadar", "\350\207\263", nullptr));
        checkBox_55->setText(QCoreApplication::translate("mmWaveRadar", "\344\273\216\345\217\263\350\207\263\345\267\246\351\200\237\345\272\246\345\214\272\351\227\264", nullptr));
        checkBox_42->setText(QCoreApplication::translate("mmWaveRadar", "\346\230\276\347\244\272\346\234\200\345\244\247\347\233\256\346\240\207\346\225\260\351\207\217", nullptr));
        label_32->setText(QCoreApplication::translate("mmWaveRadar", "\350\207\263", nullptr));
        label_21->setText(QCoreApplication::translate("mmWaveRadar", "\350\207\263", nullptr));
        checkBox_53->setText(QCoreApplication::translate("mmWaveRadar", "\347\233\256\346\240\207\346\250\252\345\220\221\350\267\235\347\246\273\345\214\272\351\227\264", nullptr));
        checkBox_45->setText(QCoreApplication::translate("mmWaveRadar", "\347\272\265\345\220\221\351\235\240\350\277\221\351\200\237\345\272\246\345\214\272\351\227\264", nullptr));
        checkBox_43->setText(QCoreApplication::translate("mmWaveRadar", "\345\217\257\350\276\223\345\207\272\347\275\256\344\277\241\345\272\246\345\214\272\351\227\264", nullptr));
        label_29->setText(QCoreApplication::translate("mmWaveRadar", "\350\207\263", nullptr));
        checkBox_54->setText(QCoreApplication::translate("mmWaveRadar", "\344\273\216\345\267\246\350\207\263\345\217\263\351\200\237\345\272\246\345\214\272\351\227\264", nullptr));
        label_28->setText(QCoreApplication::translate("mmWaveRadar", "\350\207\263", nullptr));
        checkBox_50->setText(QCoreApplication::translate("mmWaveRadar", "\347\272\265\345\220\221\350\277\234\347\246\273\351\200\237\345\272\246\345\214\272\351\227\264", nullptr));
        label_30->setText(QCoreApplication::translate("mmWaveRadar", "\350\207\263", nullptr));
        label_41->setText(QCoreApplication::translate("mmWaveRadar", "\350\207\263", nullptr));
        checkBox_51->setText(QCoreApplication::translate("mmWaveRadar", "\346\216\242\346\265\213\347\233\256\346\240\207\351\235\242\347\247\257\345\214\272\351\227\264", nullptr));
        label_31->setText(QCoreApplication::translate("mmWaveRadar", "\350\207\263", nullptr));
        btn_returnParam->setText(QCoreApplication::translate("mmWaveRadar", "\351\273\230\350\256\244", nullptr));
        btn_paramSure->setText(QCoreApplication::translate("mmWaveRadar", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mmWaveRadar: public Ui_mmWaveRadar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MMWAVERADAR_H
