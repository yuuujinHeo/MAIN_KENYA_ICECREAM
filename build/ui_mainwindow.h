/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *BTN_EXIT;
    QPushButton *BTN_UI_LOCK;
    QFrame *FRAME;
    QFrame *FRAME_COFFEE;
    QPushButton *BTN_DEV_INFO_COFFEE;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_6;
    QLineEdit *LE_WATER_M_ACTION;
    QLineEdit *LE_WATER_M_STATUS_NOT_READY;
    QLineEdit *LE_COFFEE_L_M_STATUS_ONLY_MILK_READY;
    QLineEdit *LE_COFFEE_L_M_STATUS_ONLY_COFFEE_READY;
    QLabel *label_38;
    QLineEdit *LE_WATER_M_STATUS_ONLY_MILK_READY;
    QLineEdit *LE_COFFEE_L_M_PROCESS;
    QLineEdit *LE_COFFEE_L_M_STATUS_READY;
    QLabel *label_42;
    QLineEdit *LE_WATER_M_STATUS_ONLY_COFFEE_READY;
    QLabel *label_37;
    QLineEdit *LE_WATER_M_PROCESS;
    QLineEdit *LE_WATER_M_STATUS_READY;
    QLineEdit *LE_COFFEE_L_M_ACTION;
    QLineEdit *LE_COFFEE_L_M_STATUS_NOT_READY;
    QLineEdit *LE_WATER_M_STATUS_UNDEF;
    QLineEdit *LE_COFFEE_L_M_STATUS_UNDEF;
    QLabel *label_39;
    QLabel *label_40;
    QLabel *label_41;
    QSpacerItem *verticalSpacer;
    QFrame *FRAME_ICE_1;
    QPushButton *BTN_DEV_INFO_ICE_1;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_5;
    QLabel *label;
    QLabel *LB_ICE_1_FULL;
    QLabel *label_2;
    QLabel *LB_ICE_1_ERROR;
    QFrame *FRAME_SYRUP;
    QPushButton *BTN_DEV_INFO_SYRUP;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QLabel *LB_SYRUP_LOADCELL;
    QLabel *label_6;
    QLabel *LB_SYRUP_LAST_ERROR;
    QLabel *label_7;
    QLabel *LB_SYRUP_OP_STATE;
    QFrame *FRAME_OUTLET;
    QPushButton *BTN_DEV_INFO_OUTLET;
    QLineEdit *LE_OUTLET_M_1_DOOR_OPEN;
    QLineEdit *LE_OUTLET_M_1_DOOR_CLOSE;
    QLineEdit *LE_OUTLET_M_1_CUP_DETECT;
    QLineEdit *LE_OUTLET_M_2_DOOR_OPEN;
    QLineEdit *LE_OUTLET_M_2_DOOR_CLOSE;
    QLineEdit *LE_OUTLET_M_2_CUP_DETECT;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_7;
    QLabel *label_21;
    QLabel *LB_OUTLET_M_1_CELL_1;
    QLabel *label_22;
    QLabel *LB_OUTLET_M_1_CELL_2;
    QLabel *label_23;
    QLabel *LB_OUTLET_M_1_CELL_3;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout_8;
    QLabel *label_24;
    QLabel *LB_OUTLET_M_2_CELL_1;
    QLabel *label_25;
    QLabel *LB_OUTLET_M_2_CELL_2;
    QLabel *label_26;
    QLabel *LB_OUTLET_M_2_CELL_3;
    QFrame *FRAME_MONITOR;
    QPushButton *BTN_DEV_INFO_MONITOR;
    QWidget *layoutWidget5;
    QGridLayout *gridLayout_2;
    QLabel *label_18;
    QLabel *LB_MONITOR_INPROGRESS;
    QLabel *label_19;
    QLabel *LB_MONITOR_WAITING;
    QLabel *label_20;
    QLabel *LB_MONITOR_COMPLETED;
    QFrame *FRAME_CUP;
    QPushButton *BTN_DEV_INFO_CUP;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_4;
    QLabel *LB_CUP_2_LAST_ERROR;
    QLabel *LB_CUP_2_OP_STATE;
    QLabel *LB_CUP_1_OP_STATE;
    QLabel *label_33;
    QLabel *label_27;
    QLabel *LB_CUP_1_LAST_ERROR;
    QLabel *label_30;
    QLabel *label_29;
    QSpacerItem *horizontalSpacer;
    QPushButton *BTN_CUP_ADD_DONE;
    QFrame *FRAME_ROBOT;
    QPushButton *BTN_DEV_INFO_ROBOT;
    QLabel *label_91;
    QLineEdit *LE_ROBOT_PRG_CONNECT;
    QLineEdit *LE_ROBOT_PRG_WORKING_STATUS;
    QLineEdit *LE_PG_MODE_SIMULATION;
    QLineEdit *LE_PG_MODE_REAL;
    QLineEdit *LE_ROBOT_STATE_MOVING;
    QLineEdit *LE_ROBOT_STATE_IDLE;
    QLineEdit *LE_ROBOT_STATUS_TEACHING;
    QLineEdit *LE_ROBOT_STATUS_PAUSED;
    QLineEdit *LE_ROBOT_STATUS_EXT_COLLISION;
    QLineEdit *LE_ROBOT_STATUS_EMS;
    QLineEdit *LE_ROBOT_STATUS_SOS;
    QLineEdit *LE_ROBOT_STATUS_SELF_COLLISION;
    QFrame *line;
    QLineEdit *LE_ROBOT_INIT_BASE_ANGLE;
    QLineEdit *LE_ROBOT_INIT_POSITION;
    QLabel *label_92;
    QFrame *FRAME_BARCODE;
    QPushButton *BTN_DEV_INFO_BARCODE;
    QLabel *label_17;
    QLabel *LB_BARCODE_LAST_DATA;
    QFrame *FRAME_DOOR;
    QPushButton *BTN_DEV_INFO_DOOR;
    QLabel *label_129;
    QLineEdit *LE_DOOR_CLOSED;
    QLabel *label_130;
    QLineEdit *LE_DOOR_OPENED;
    QFrame *FRAME_KIOSK;
    QPushButton *BTN_DEV_INFO_KIOSK;
    QLabel *LB_KIOSK_BLOCK_ORDER;
    QFrame *FRAME_STOCK;
    QPushButton *BTN_DEV_INFO_STOCK;
    QPushButton *BTN_ERROR;
    QFrame *FRAME_DEVICE;
    QPushButton *BTN_SETTING;
    QFrame *GB_OP_CONTROL;
    QPushButton *BTN_SUPER_STOP;
    QPushButton *BTN_RESUME;
    QPushButton *BTN_FORCE_STOP;
    QPushButton *BTN_CANCEL_STOP;
    QPushButton *BTN_STOP_OPERATING;
    QLineEdit *LE_PLATFORM_OPENED_WHEN_OPERATING;
    QPushButton *BTN_DO_INITIALIZING;
    QPushButton *BTN_DO_OPERATING;
    QWidget *layoutWidget7;
    QGridLayout *gridLayout;
    QLabel *label_135;
    QLineEdit *LE_PLATFORM_INITIALIZING;
    QLabel *label_147;
    QLineEdit *LE_PLATFORM_WAITING_STOP;
    QLabel *label_146;
    QLineEdit *LE_PLATFORM_OPERATING;
    QLabel *label_138;
    QLineEdit *LE_PLATFORM_CLOSED;
    QFrame *frame;
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout;
    QProgressBar *PB_CUP_1m;
    QProgressBar *PB_CUP_2m;
    QProgressBar *PB_SYRUP_1m;
    QProgressBar *PB_SYRUP_2m;
    QProgressBar *PB_SYRUP_3m;
    QProgressBar *PB_SYRUP_4m;
    QProgressBar *PB_SYRUP_5m;
    QProgressBar *PB_ICE_1m;
    QProgressBar *PB_COFFEEm;
    QProgressBar *PB_MILKm;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1920, 1080);
        QFont font;
        font.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(89, 89, 89);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        BTN_EXIT = new QPushButton(centralWidget);
        BTN_EXIT->setObjectName(QString::fromUtf8("BTN_EXIT"));
        BTN_EXIT->setGeometry(QRect(1810, 10, 100, 100));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/build/image/powerw.png"), QSize(), QIcon::Normal, QIcon::Off);
        BTN_EXIT->setIcon(icon);
        BTN_EXIT->setIconSize(QSize(60, 60));
        BTN_EXIT->setFlat(true);
        BTN_UI_LOCK = new QPushButton(centralWidget);
        BTN_UI_LOCK->setObjectName(QString::fromUtf8("BTN_UI_LOCK"));
        BTN_UI_LOCK->setGeometry(QRect(1590, 10, 100, 100));
        BTN_UI_LOCK->setStyleSheet(QString::fromUtf8("background-color: rgb(89, 89, 89);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/build/image/lockw.png"), QSize(), QIcon::Normal, QIcon::Off);
        BTN_UI_LOCK->setIcon(icon1);
        BTN_UI_LOCK->setIconSize(QSize(60, 60));
        BTN_UI_LOCK->setFlat(true);
        FRAME = new QFrame(centralWidget);
        FRAME->setObjectName(QString::fromUtf8("FRAME"));
        FRAME->setGeometry(QRect(400, 120, 1520, 960));
        FRAME->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"QLabel{ \n"
"   border: 0px solid\n"
"} \n"
"font: 9pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";"));
        FRAME->setFrameShape(QFrame::NoFrame);
        FRAME->setFrameShadow(QFrame::Plain);
        FRAME->setLineWidth(3);
        FRAME_COFFEE = new QFrame(FRAME);
        FRAME_COFFEE->setObjectName(QString::fromUtf8("FRAME_COFFEE"));
        FRAME_COFFEE->setGeometry(QRect(100, 280, 261, 331));
        FRAME_COFFEE->setStyleSheet(QString::fromUtf8("QFrame { \n"
"   border: 2px solid #595959 \n"
"} \n"
"QLabel {\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}\n"
"QPushButton {\n"
"	border:2px solid #595959;\n"
"	font: 15pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\"; \n"
"}\n"
"QLineEdit {\n"
"	font: 8pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}"));
        FRAME_COFFEE->setFrameShape(QFrame::Box);
        FRAME_COFFEE->setFrameShadow(QFrame::Raised);
        FRAME_COFFEE->setLineWidth(2);
        BTN_DEV_INFO_COFFEE = new QPushButton(FRAME_COFFEE);
        BTN_DEV_INFO_COFFEE->setObjectName(QString::fromUtf8("BTN_DEV_INFO_COFFEE"));
        BTN_DEV_INFO_COFFEE->setGeometry(QRect(0, 0, 261, 70));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font1.setPointSize(15);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        BTN_DEV_INFO_COFFEE->setFont(font1);
        layoutWidget = new QWidget(FRAME_COFFEE);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 80, 243, 241));
        gridLayout_6 = new QGridLayout(layoutWidget);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setVerticalSpacing(0);
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        LE_WATER_M_ACTION = new QLineEdit(layoutWidget);
        LE_WATER_M_ACTION->setObjectName(QString::fromUtf8("LE_WATER_M_ACTION"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font2.setPointSize(8);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        LE_WATER_M_ACTION->setFont(font2);
        LE_WATER_M_ACTION->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(LE_WATER_M_ACTION, 8, 1, 1, 1);

        LE_WATER_M_STATUS_NOT_READY = new QLineEdit(layoutWidget);
        LE_WATER_M_STATUS_NOT_READY->setObjectName(QString::fromUtf8("LE_WATER_M_STATUS_NOT_READY"));
        LE_WATER_M_STATUS_NOT_READY->setFont(font2);
        LE_WATER_M_STATUS_NOT_READY->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(LE_WATER_M_STATUS_NOT_READY, 1, 1, 1, 1);

        LE_COFFEE_L_M_STATUS_ONLY_MILK_READY = new QLineEdit(layoutWidget);
        LE_COFFEE_L_M_STATUS_ONLY_MILK_READY->setObjectName(QString::fromUtf8("LE_COFFEE_L_M_STATUS_ONLY_MILK_READY"));
        LE_COFFEE_L_M_STATUS_ONLY_MILK_READY->setFont(font2);
        LE_COFFEE_L_M_STATUS_ONLY_MILK_READY->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(LE_COFFEE_L_M_STATUS_ONLY_MILK_READY, 4, 0, 1, 1);

        LE_COFFEE_L_M_STATUS_ONLY_COFFEE_READY = new QLineEdit(layoutWidget);
        LE_COFFEE_L_M_STATUS_ONLY_COFFEE_READY->setObjectName(QString::fromUtf8("LE_COFFEE_L_M_STATUS_ONLY_COFFEE_READY"));
        LE_COFFEE_L_M_STATUS_ONLY_COFFEE_READY->setFont(font2);
        LE_COFFEE_L_M_STATUS_ONLY_COFFEE_READY->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(LE_COFFEE_L_M_STATUS_ONLY_COFFEE_READY, 3, 0, 1, 1);

        label_38 = new QLabel(layoutWidget);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        label_38->setFont(font3);
        label_38->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        label_38->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_38, 7, 1, 1, 1);

        LE_WATER_M_STATUS_ONLY_MILK_READY = new QLineEdit(layoutWidget);
        LE_WATER_M_STATUS_ONLY_MILK_READY->setObjectName(QString::fromUtf8("LE_WATER_M_STATUS_ONLY_MILK_READY"));
        LE_WATER_M_STATUS_ONLY_MILK_READY->setFont(font2);
        LE_WATER_M_STATUS_ONLY_MILK_READY->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(LE_WATER_M_STATUS_ONLY_MILK_READY, 4, 1, 1, 1);

        LE_COFFEE_L_M_PROCESS = new QLineEdit(layoutWidget);
        LE_COFFEE_L_M_PROCESS->setObjectName(QString::fromUtf8("LE_COFFEE_L_M_PROCESS"));
        LE_COFFEE_L_M_PROCESS->setFont(font2);
        LE_COFFEE_L_M_PROCESS->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(LE_COFFEE_L_M_PROCESS, 10, 0, 1, 1);

        LE_COFFEE_L_M_STATUS_READY = new QLineEdit(layoutWidget);
        LE_COFFEE_L_M_STATUS_READY->setObjectName(QString::fromUtf8("LE_COFFEE_L_M_STATUS_READY"));
        LE_COFFEE_L_M_STATUS_READY->setFont(font2);
        LE_COFFEE_L_M_STATUS_READY->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(LE_COFFEE_L_M_STATUS_READY, 2, 0, 1, 1);

        label_42 = new QLabel(layoutWidget);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setFont(font3);
        label_42->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        label_42->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_42, 0, 1, 1, 1);

        LE_WATER_M_STATUS_ONLY_COFFEE_READY = new QLineEdit(layoutWidget);
        LE_WATER_M_STATUS_ONLY_COFFEE_READY->setObjectName(QString::fromUtf8("LE_WATER_M_STATUS_ONLY_COFFEE_READY"));
        LE_WATER_M_STATUS_ONLY_COFFEE_READY->setFont(font2);
        LE_WATER_M_STATUS_ONLY_COFFEE_READY->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(LE_WATER_M_STATUS_ONLY_COFFEE_READY, 3, 1, 1, 1);

        label_37 = new QLabel(layoutWidget);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setFont(font3);
        label_37->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        label_37->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_37, 9, 1, 1, 1);

        LE_WATER_M_PROCESS = new QLineEdit(layoutWidget);
        LE_WATER_M_PROCESS->setObjectName(QString::fromUtf8("LE_WATER_M_PROCESS"));
        LE_WATER_M_PROCESS->setFont(font2);
        LE_WATER_M_PROCESS->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(LE_WATER_M_PROCESS, 10, 1, 1, 1);

        LE_WATER_M_STATUS_READY = new QLineEdit(layoutWidget);
        LE_WATER_M_STATUS_READY->setObjectName(QString::fromUtf8("LE_WATER_M_STATUS_READY"));
        LE_WATER_M_STATUS_READY->setFont(font2);
        LE_WATER_M_STATUS_READY->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(LE_WATER_M_STATUS_READY, 2, 1, 1, 1);

        LE_COFFEE_L_M_ACTION = new QLineEdit(layoutWidget);
        LE_COFFEE_L_M_ACTION->setObjectName(QString::fromUtf8("LE_COFFEE_L_M_ACTION"));
        LE_COFFEE_L_M_ACTION->setFont(font2);
        LE_COFFEE_L_M_ACTION->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(LE_COFFEE_L_M_ACTION, 8, 0, 1, 1);

        LE_COFFEE_L_M_STATUS_NOT_READY = new QLineEdit(layoutWidget);
        LE_COFFEE_L_M_STATUS_NOT_READY->setObjectName(QString::fromUtf8("LE_COFFEE_L_M_STATUS_NOT_READY"));
        LE_COFFEE_L_M_STATUS_NOT_READY->setFont(font2);
        LE_COFFEE_L_M_STATUS_NOT_READY->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(LE_COFFEE_L_M_STATUS_NOT_READY, 1, 0, 1, 1);

        LE_WATER_M_STATUS_UNDEF = new QLineEdit(layoutWidget);
        LE_WATER_M_STATUS_UNDEF->setObjectName(QString::fromUtf8("LE_WATER_M_STATUS_UNDEF"));
        LE_WATER_M_STATUS_UNDEF->setFont(font2);
        LE_WATER_M_STATUS_UNDEF->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(LE_WATER_M_STATUS_UNDEF, 5, 1, 1, 1);

        LE_COFFEE_L_M_STATUS_UNDEF = new QLineEdit(layoutWidget);
        LE_COFFEE_L_M_STATUS_UNDEF->setObjectName(QString::fromUtf8("LE_COFFEE_L_M_STATUS_UNDEF"));
        LE_COFFEE_L_M_STATUS_UNDEF->setFont(font2);
        LE_COFFEE_L_M_STATUS_UNDEF->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(LE_COFFEE_L_M_STATUS_UNDEF, 5, 0, 1, 1);

        label_39 = new QLabel(layoutWidget);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setFont(font3);
        label_39->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        label_39->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_39, 9, 0, 1, 1);

        label_40 = new QLabel(layoutWidget);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setFont(font3);
        label_40->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        label_40->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_40, 7, 0, 1, 1);

        label_41 = new QLabel(layoutWidget);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setFont(font3);
        label_41->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        label_41->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_41, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer, 6, 0, 1, 1);

        FRAME_ICE_1 = new QFrame(FRAME);
        FRAME_ICE_1->setObjectName(QString::fromUtf8("FRAME_ICE_1"));
        FRAME_ICE_1->setGeometry(QRect(100, 60, 261, 161));
        FRAME_ICE_1->setStyleSheet(QString::fromUtf8("QFrame { \n"
"   border: 2px solid #595959 \n"
"} \n"
"QLabel {\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}\n"
"QPushButton {\n"
"	border:2px solid #595959;\n"
"	font: 15pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\"; \n"
"}\n"
"QLineEdit {\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}"));
        FRAME_ICE_1->setFrameShape(QFrame::Box);
        FRAME_ICE_1->setFrameShadow(QFrame::Raised);
        FRAME_ICE_1->setLineWidth(2);
        BTN_DEV_INFO_ICE_1 = new QPushButton(FRAME_ICE_1);
        BTN_DEV_INFO_ICE_1->setObjectName(QString::fromUtf8("BTN_DEV_INFO_ICE_1"));
        BTN_DEV_INFO_ICE_1->setGeometry(QRect(0, 0, 261, 70));
        BTN_DEV_INFO_ICE_1->setFont(font1);
        layoutWidget1 = new QWidget(FRAME_ICE_1);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 90, 201, 48));
        gridLayout_5 = new QGridLayout(layoutWidget1);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setHorizontalSpacing(40);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        LB_ICE_1_FULL = new QLabel(layoutWidget1);
        LB_ICE_1_FULL->setObjectName(QString::fromUtf8("LB_ICE_1_FULL"));
        LB_ICE_1_FULL->setFont(font3);
        LB_ICE_1_FULL->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        LB_ICE_1_FULL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_5->addWidget(LB_ICE_1_FULL, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_2, 1, 0, 1, 1);

        LB_ICE_1_ERROR = new QLabel(layoutWidget1);
        LB_ICE_1_ERROR->setObjectName(QString::fromUtf8("LB_ICE_1_ERROR"));
        LB_ICE_1_ERROR->setFont(font3);
        LB_ICE_1_ERROR->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        LB_ICE_1_ERROR->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_5->addWidget(LB_ICE_1_ERROR, 1, 1, 1, 1);

        FRAME_SYRUP = new QFrame(FRAME);
        FRAME_SYRUP->setObjectName(QString::fromUtf8("FRAME_SYRUP"));
        FRAME_SYRUP->setGeometry(QRect(840, 60, 231, 161));
        FRAME_SYRUP->setStyleSheet(QString::fromUtf8("QFrame { \n"
"   border: 2px solid #595959 \n"
"} \n"
"QLabel {\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}\n"
"QPushButton {\n"
"	border:2px solid #595959;\n"
"	font: 15pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\"; \n"
"}\n"
"QLineEdit {\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}"));
        FRAME_SYRUP->setFrameShape(QFrame::StyledPanel);
        FRAME_SYRUP->setFrameShadow(QFrame::Raised);
        BTN_DEV_INFO_SYRUP = new QPushButton(FRAME_SYRUP);
        BTN_DEV_INFO_SYRUP->setObjectName(QString::fromUtf8("BTN_DEV_INFO_SYRUP"));
        BTN_DEV_INFO_SYRUP->setGeometry(QRect(0, 0, 231, 70));
        BTN_DEV_INFO_SYRUP->setFont(font1);
        layoutWidget2 = new QWidget(FRAME_SYRUP);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 80, 211, 74));
        gridLayout_3 = new QGridLayout(layoutWidget2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(40);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        LB_SYRUP_LOADCELL = new QLabel(layoutWidget2);
        LB_SYRUP_LOADCELL->setObjectName(QString::fromUtf8("LB_SYRUP_LOADCELL"));
        LB_SYRUP_LOADCELL->setFont(font3);
        LB_SYRUP_LOADCELL->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        LB_SYRUP_LOADCELL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(LB_SYRUP_LOADCELL, 0, 1, 1, 1);

        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font3);
        label_6->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);

        LB_SYRUP_LAST_ERROR = new QLabel(layoutWidget2);
        LB_SYRUP_LAST_ERROR->setObjectName(QString::fromUtf8("LB_SYRUP_LAST_ERROR"));
        LB_SYRUP_LAST_ERROR->setFont(font3);
        LB_SYRUP_LAST_ERROR->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        LB_SYRUP_LAST_ERROR->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(LB_SYRUP_LAST_ERROR, 1, 1, 1, 1);

        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font3);
        label_7->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_7, 2, 0, 1, 1);

        LB_SYRUP_OP_STATE = new QLabel(layoutWidget2);
        LB_SYRUP_OP_STATE->setObjectName(QString::fromUtf8("LB_SYRUP_OP_STATE"));
        LB_SYRUP_OP_STATE->setFont(font3);
        LB_SYRUP_OP_STATE->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        LB_SYRUP_OP_STATE->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(LB_SYRUP_OP_STATE, 2, 1, 1, 1);

        FRAME_OUTLET = new QFrame(FRAME);
        FRAME_OUTLET->setObjectName(QString::fromUtf8("FRAME_OUTLET"));
        FRAME_OUTLET->setGeometry(QRect(760, 720, 441, 201));
        FRAME_OUTLET->setStyleSheet(QString::fromUtf8("QFrame { \n"
"   border: 2px solid #595959 \n"
"} \n"
"QLabel {\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}\n"
"QPushButton {\n"
"	border:2px solid #595959;\n"
"	font: 15pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\"; \n"
"}\n"
"QLineEdit {\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}"));
        FRAME_OUTLET->setFrameShape(QFrame::StyledPanel);
        FRAME_OUTLET->setFrameShadow(QFrame::Raised);
        BTN_DEV_INFO_OUTLET = new QPushButton(FRAME_OUTLET);
        BTN_DEV_INFO_OUTLET->setObjectName(QString::fromUtf8("BTN_DEV_INFO_OUTLET"));
        BTN_DEV_INFO_OUTLET->setGeometry(QRect(0, 0, 441, 70));
        BTN_DEV_INFO_OUTLET->setFont(font1);
        LE_OUTLET_M_1_DOOR_OPEN = new QLineEdit(FRAME_OUTLET);
        LE_OUTLET_M_1_DOOR_OPEN->setObjectName(QString::fromUtf8("LE_OUTLET_M_1_DOOR_OPEN"));
        LE_OUTLET_M_1_DOOR_OPEN->setGeometry(QRect(30, 80, 41, 31));
        LE_OUTLET_M_1_DOOR_OPEN->setAlignment(Qt::AlignCenter);
        LE_OUTLET_M_1_DOOR_OPEN->setReadOnly(true);
        LE_OUTLET_M_1_DOOR_CLOSE = new QLineEdit(FRAME_OUTLET);
        LE_OUTLET_M_1_DOOR_CLOSE->setObjectName(QString::fromUtf8("LE_OUTLET_M_1_DOOR_CLOSE"));
        LE_OUTLET_M_1_DOOR_CLOSE->setGeometry(QRect(80, 80, 41, 31));
        LE_OUTLET_M_1_DOOR_CLOSE->setAlignment(Qt::AlignCenter);
        LE_OUTLET_M_1_DOOR_CLOSE->setReadOnly(true);
        LE_OUTLET_M_1_CUP_DETECT = new QLineEdit(FRAME_OUTLET);
        LE_OUTLET_M_1_CUP_DETECT->setObjectName(QString::fromUtf8("LE_OUTLET_M_1_CUP_DETECT"));
        LE_OUTLET_M_1_CUP_DETECT->setGeometry(QRect(140, 80, 51, 31));
        LE_OUTLET_M_1_CUP_DETECT->setReadOnly(true);
        LE_OUTLET_M_2_DOOR_OPEN = new QLineEdit(FRAME_OUTLET);
        LE_OUTLET_M_2_DOOR_OPEN->setObjectName(QString::fromUtf8("LE_OUTLET_M_2_DOOR_OPEN"));
        LE_OUTLET_M_2_DOOR_OPEN->setGeometry(QRect(240, 80, 41, 31));
        LE_OUTLET_M_2_DOOR_OPEN->setAlignment(Qt::AlignCenter);
        LE_OUTLET_M_2_DOOR_OPEN->setReadOnly(true);
        LE_OUTLET_M_2_DOOR_CLOSE = new QLineEdit(FRAME_OUTLET);
        LE_OUTLET_M_2_DOOR_CLOSE->setObjectName(QString::fromUtf8("LE_OUTLET_M_2_DOOR_CLOSE"));
        LE_OUTLET_M_2_DOOR_CLOSE->setGeometry(QRect(290, 80, 41, 31));
        LE_OUTLET_M_2_DOOR_CLOSE->setAlignment(Qt::AlignCenter);
        LE_OUTLET_M_2_DOOR_CLOSE->setReadOnly(true);
        LE_OUTLET_M_2_CUP_DETECT = new QLineEdit(FRAME_OUTLET);
        LE_OUTLET_M_2_CUP_DETECT->setObjectName(QString::fromUtf8("LE_OUTLET_M_2_CUP_DETECT"));
        LE_OUTLET_M_2_CUP_DETECT->setGeometry(QRect(350, 80, 51, 31));
        LE_OUTLET_M_2_CUP_DETECT->setReadOnly(true);
        layoutWidget3 = new QWidget(FRAME_OUTLET);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(30, 120, 161, 65));
        gridLayout_7 = new QGridLayout(layoutWidget3);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setHorizontalSpacing(40);
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(layoutWidget3);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font3);
        label_21->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_21, 0, 0, 1, 1);

        LB_OUTLET_M_1_CELL_1 = new QLabel(layoutWidget3);
        LB_OUTLET_M_1_CELL_1->setObjectName(QString::fromUtf8("LB_OUTLET_M_1_CELL_1"));
        LB_OUTLET_M_1_CELL_1->setFont(font3);
        LB_OUTLET_M_1_CELL_1->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        LB_OUTLET_M_1_CELL_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_7->addWidget(LB_OUTLET_M_1_CELL_1, 0, 1, 1, 1);

        label_22 = new QLabel(layoutWidget3);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font3);
        label_22->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_22, 1, 0, 1, 1);

        LB_OUTLET_M_1_CELL_2 = new QLabel(layoutWidget3);
        LB_OUTLET_M_1_CELL_2->setObjectName(QString::fromUtf8("LB_OUTLET_M_1_CELL_2"));
        LB_OUTLET_M_1_CELL_2->setFont(font3);
        LB_OUTLET_M_1_CELL_2->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        LB_OUTLET_M_1_CELL_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_7->addWidget(LB_OUTLET_M_1_CELL_2, 1, 1, 1, 1);

        label_23 = new QLabel(layoutWidget3);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font3);
        label_23->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        label_23->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_23, 2, 0, 1, 1);

        LB_OUTLET_M_1_CELL_3 = new QLabel(layoutWidget3);
        LB_OUTLET_M_1_CELL_3->setObjectName(QString::fromUtf8("LB_OUTLET_M_1_CELL_3"));
        LB_OUTLET_M_1_CELL_3->setFont(font3);
        LB_OUTLET_M_1_CELL_3->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        LB_OUTLET_M_1_CELL_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_7->addWidget(LB_OUTLET_M_1_CELL_3, 2, 1, 1, 1);

        layoutWidget4 = new QWidget(FRAME_OUTLET);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(240, 120, 161, 65));
        gridLayout_8 = new QGridLayout(layoutWidget4);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setHorizontalSpacing(40);
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        label_24 = new QLabel(layoutWidget4);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setFont(font3);
        label_24->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        label_24->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_8->addWidget(label_24, 0, 0, 1, 1);

        LB_OUTLET_M_2_CELL_1 = new QLabel(layoutWidget4);
        LB_OUTLET_M_2_CELL_1->setObjectName(QString::fromUtf8("LB_OUTLET_M_2_CELL_1"));
        LB_OUTLET_M_2_CELL_1->setFont(font3);
        LB_OUTLET_M_2_CELL_1->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        LB_OUTLET_M_2_CELL_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_8->addWidget(LB_OUTLET_M_2_CELL_1, 0, 1, 1, 1);

        label_25 = new QLabel(layoutWidget4);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setFont(font3);
        label_25->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        label_25->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_8->addWidget(label_25, 1, 0, 1, 1);

        LB_OUTLET_M_2_CELL_2 = new QLabel(layoutWidget4);
        LB_OUTLET_M_2_CELL_2->setObjectName(QString::fromUtf8("LB_OUTLET_M_2_CELL_2"));
        LB_OUTLET_M_2_CELL_2->setFont(font3);
        LB_OUTLET_M_2_CELL_2->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        LB_OUTLET_M_2_CELL_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_8->addWidget(LB_OUTLET_M_2_CELL_2, 1, 1, 1, 1);

        label_26 = new QLabel(layoutWidget4);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setFont(font3);
        label_26->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        label_26->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_8->addWidget(label_26, 2, 0, 1, 1);

        LB_OUTLET_M_2_CELL_3 = new QLabel(layoutWidget4);
        LB_OUTLET_M_2_CELL_3->setObjectName(QString::fromUtf8("LB_OUTLET_M_2_CELL_3"));
        LB_OUTLET_M_2_CELL_3->setFont(font3);
        LB_OUTLET_M_2_CELL_3->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        LB_OUTLET_M_2_CELL_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_8->addWidget(LB_OUTLET_M_2_CELL_3, 2, 1, 1, 1);

        FRAME_MONITOR = new QFrame(FRAME);
        FRAME_MONITOR->setObjectName(QString::fromUtf8("FRAME_MONITOR"));
        FRAME_MONITOR->setGeometry(QRect(420, 60, 341, 161));
        FRAME_MONITOR->setStyleSheet(QString::fromUtf8("QFrame { \n"
"   border: 2px solid #595959 \n"
"} \n"
"QLabel {\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}\n"
"QPushButton {\n"
"	border:2px solid #595959;\n"
"	font: 15pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\"; \n"
"}\n"
"QLineEdit {\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}"));
        FRAME_MONITOR->setFrameShape(QFrame::StyledPanel);
        FRAME_MONITOR->setFrameShadow(QFrame::Raised);
        BTN_DEV_INFO_MONITOR = new QPushButton(FRAME_MONITOR);
        BTN_DEV_INFO_MONITOR->setObjectName(QString::fromUtf8("BTN_DEV_INFO_MONITOR"));
        BTN_DEV_INFO_MONITOR->setGeometry(QRect(0, 0, 341, 70));
        BTN_DEV_INFO_MONITOR->setFont(font1);
        layoutWidget5 = new QWidget(FRAME_MONITOR);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(20, 80, 301, 74));
        gridLayout_2 = new QGridLayout(layoutWidget5);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(40);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(layoutWidget5);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font3);
        label_18->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_18, 0, 0, 1, 1);

        LB_MONITOR_INPROGRESS = new QLabel(layoutWidget5);
        LB_MONITOR_INPROGRESS->setObjectName(QString::fromUtf8("LB_MONITOR_INPROGRESS"));
        LB_MONITOR_INPROGRESS->setFont(font3);
        LB_MONITOR_INPROGRESS->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        LB_MONITOR_INPROGRESS->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(LB_MONITOR_INPROGRESS, 0, 1, 1, 1);

        label_19 = new QLabel(layoutWidget5);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font3);
        label_19->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_19, 1, 0, 1, 1);

        LB_MONITOR_WAITING = new QLabel(layoutWidget5);
        LB_MONITOR_WAITING->setObjectName(QString::fromUtf8("LB_MONITOR_WAITING"));
        LB_MONITOR_WAITING->setFont(font3);
        LB_MONITOR_WAITING->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        LB_MONITOR_WAITING->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(LB_MONITOR_WAITING, 1, 1, 1, 1);

        label_20 = new QLabel(layoutWidget5);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setFont(font3);
        label_20->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_20, 2, 0, 1, 1);

        LB_MONITOR_COMPLETED = new QLabel(layoutWidget5);
        LB_MONITOR_COMPLETED->setObjectName(QString::fromUtf8("LB_MONITOR_COMPLETED"));
        LB_MONITOR_COMPLETED->setFont(font3);
        LB_MONITOR_COMPLETED->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        LB_MONITOR_COMPLETED->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(LB_MONITOR_COMPLETED, 2, 1, 1, 1);

        FRAME_CUP = new QFrame(FRAME);
        FRAME_CUP->setObjectName(QString::fromUtf8("FRAME_CUP"));
        FRAME_CUP->setGeometry(QRect(1120, 60, 351, 161));
        FRAME_CUP->setStyleSheet(QString::fromUtf8("QFrame { \n"
"   border: 2px solid #595959 \n"
"} \n"
"QLabel {\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}\n"
"QPushButton {\n"
"	border:2px solid #595959;\n"
"	font: 15pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\"; \n"
"}\n"
"QLineEdit {\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}"));
        FRAME_CUP->setFrameShape(QFrame::StyledPanel);
        FRAME_CUP->setFrameShadow(QFrame::Raised);
        BTN_DEV_INFO_CUP = new QPushButton(FRAME_CUP);
        BTN_DEV_INFO_CUP->setObjectName(QString::fromUtf8("BTN_DEV_INFO_CUP"));
        BTN_DEV_INFO_CUP->setGeometry(QRect(0, 0, 351, 70));
        BTN_DEV_INFO_CUP->setFont(font1);
        BTN_DEV_INFO_CUP->setFlat(false);
        layoutWidget6 = new QWidget(FRAME_CUP);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(34, 80, 284, 76));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        LB_CUP_2_LAST_ERROR = new QLabel(layoutWidget6);
        LB_CUP_2_LAST_ERROR->setObjectName(QString::fromUtf8("LB_CUP_2_LAST_ERROR"));
        LB_CUP_2_LAST_ERROR->setFont(font3);
        LB_CUP_2_LAST_ERROR->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        LB_CUP_2_LAST_ERROR->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(LB_CUP_2_LAST_ERROR, 1, 2, 1, 1);

        LB_CUP_2_OP_STATE = new QLabel(layoutWidget6);
        LB_CUP_2_OP_STATE->setObjectName(QString::fromUtf8("LB_CUP_2_OP_STATE"));
        LB_CUP_2_OP_STATE->setFont(font3);
        LB_CUP_2_OP_STATE->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        LB_CUP_2_OP_STATE->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(LB_CUP_2_OP_STATE, 2, 2, 1, 1);

        LB_CUP_1_OP_STATE = new QLabel(layoutWidget6);
        LB_CUP_1_OP_STATE->setObjectName(QString::fromUtf8("LB_CUP_1_OP_STATE"));
        LB_CUP_1_OP_STATE->setFont(font3);
        LB_CUP_1_OP_STATE->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        LB_CUP_1_OP_STATE->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(LB_CUP_1_OP_STATE, 2, 1, 1, 1);

        label_33 = new QLabel(layoutWidget6);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setFont(font3);
        label_33->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        label_33->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_33, 0, 2, 1, 1);

        label_27 = new QLabel(layoutWidget6);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setFont(font3);
        label_27->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        label_27->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_27, 0, 1, 1, 1);

        LB_CUP_1_LAST_ERROR = new QLabel(layoutWidget6);
        LB_CUP_1_LAST_ERROR->setObjectName(QString::fromUtf8("LB_CUP_1_LAST_ERROR"));
        LB_CUP_1_LAST_ERROR->setFont(font3);
        LB_CUP_1_LAST_ERROR->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        LB_CUP_1_LAST_ERROR->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(LB_CUP_1_LAST_ERROR, 1, 1, 1, 1);

        label_30 = new QLabel(layoutWidget6);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setFont(font3);
        label_30->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        label_30->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_30, 1, 0, 1, 1);

        label_29 = new QLabel(layoutWidget6);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setFont(font3);
        label_29->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        label_29->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_29, 2, 0, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        BTN_CUP_ADD_DONE = new QPushButton(layoutWidget6);
        BTN_CUP_ADD_DONE->setObjectName(QString::fromUtf8("BTN_CUP_ADD_DONE"));
        BTN_CUP_ADD_DONE->setEnabled(true);
        BTN_CUP_ADD_DONE->setMinimumSize(QSize(100, 50));
        BTN_CUP_ADD_DONE->setStyleSheet(QString::fromUtf8("font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"background-color: #595959"));

        horizontalLayout_2->addWidget(BTN_CUP_ADD_DONE);

        FRAME_ROBOT = new QFrame(FRAME);
        FRAME_ROBOT->setObjectName(QString::fromUtf8("FRAME_ROBOT"));
        FRAME_ROBOT->setGeometry(QRect(880, 400, 351, 211));
        FRAME_ROBOT->setStyleSheet(QString::fromUtf8("QFrame { \n"
"   border: 2px solid #595959 \n"
"} \n"
"QLabel {\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}\n"
"QPushButton {\n"
"	border:2px solid #595959;\n"
"	font: 15pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\"; \n"
"}\n"
"QLineEdit {\n"
"	font: 8pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}"));
        FRAME_ROBOT->setFrameShape(QFrame::StyledPanel);
        FRAME_ROBOT->setFrameShadow(QFrame::Raised);
        BTN_DEV_INFO_ROBOT = new QPushButton(FRAME_ROBOT);
        BTN_DEV_INFO_ROBOT->setObjectName(QString::fromUtf8("BTN_DEV_INFO_ROBOT"));
        BTN_DEV_INFO_ROBOT->setGeometry(QRect(0, 0, 351, 70));
        BTN_DEV_INFO_ROBOT->setFont(font1);
        label_91 = new QLabel(FRAME_ROBOT);
        label_91->setObjectName(QString::fromUtf8("label_91"));
        label_91->setGeometry(QRect(20, 90, 91, 21));
        label_91->setFont(font3);
        label_91->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        label_91->setAlignment(Qt::AlignCenter);
        LE_ROBOT_PRG_CONNECT = new QLineEdit(FRAME_ROBOT);
        LE_ROBOT_PRG_CONNECT->setObjectName(QString::fromUtf8("LE_ROBOT_PRG_CONNECT"));
        LE_ROBOT_PRG_CONNECT->setGeometry(QRect(170, 90, 51, 21));
        LE_ROBOT_PRG_CONNECT->setAlignment(Qt::AlignCenter);
        LE_ROBOT_PRG_CONNECT->setReadOnly(true);
        LE_ROBOT_PRG_WORKING_STATUS = new QLineEdit(FRAME_ROBOT);
        LE_ROBOT_PRG_WORKING_STATUS->setObjectName(QString::fromUtf8("LE_ROBOT_PRG_WORKING_STATUS"));
        LE_ROBOT_PRG_WORKING_STATUS->setGeometry(QRect(120, 90, 51, 21));
        LE_ROBOT_PRG_WORKING_STATUS->setAlignment(Qt::AlignCenter);
        LE_ROBOT_PRG_WORKING_STATUS->setReadOnly(true);
        LE_PG_MODE_SIMULATION = new QLineEdit(FRAME_ROBOT);
        LE_PG_MODE_SIMULATION->setObjectName(QString::fromUtf8("LE_PG_MODE_SIMULATION"));
        LE_PG_MODE_SIMULATION->setGeometry(QRect(20, 150, 51, 21));
        LE_PG_MODE_SIMULATION->setFont(font2);
        LE_PG_MODE_SIMULATION->setAlignment(Qt::AlignCenter);
        LE_PG_MODE_SIMULATION->setReadOnly(true);
        LE_PG_MODE_REAL = new QLineEdit(FRAME_ROBOT);
        LE_PG_MODE_REAL->setObjectName(QString::fromUtf8("LE_PG_MODE_REAL"));
        LE_PG_MODE_REAL->setGeometry(QRect(20, 130, 51, 21));
        LE_PG_MODE_REAL->setFont(font2);
        LE_PG_MODE_REAL->setAlignment(Qt::AlignCenter);
        LE_PG_MODE_REAL->setReadOnly(true);
        LE_ROBOT_STATE_MOVING = new QLineEdit(FRAME_ROBOT);
        LE_ROBOT_STATE_MOVING->setObjectName(QString::fromUtf8("LE_ROBOT_STATE_MOVING"));
        LE_ROBOT_STATE_MOVING->setGeometry(QRect(80, 150, 51, 21));
        LE_ROBOT_STATE_MOVING->setFont(font2);
        LE_ROBOT_STATE_MOVING->setAlignment(Qt::AlignCenter);
        LE_ROBOT_STATE_MOVING->setReadOnly(true);
        LE_ROBOT_STATE_IDLE = new QLineEdit(FRAME_ROBOT);
        LE_ROBOT_STATE_IDLE->setObjectName(QString::fromUtf8("LE_ROBOT_STATE_IDLE"));
        LE_ROBOT_STATE_IDLE->setGeometry(QRect(80, 130, 51, 21));
        LE_ROBOT_STATE_IDLE->setFont(font2);
        LE_ROBOT_STATE_IDLE->setAlignment(Qt::AlignCenter);
        LE_ROBOT_STATE_IDLE->setReadOnly(true);
        LE_ROBOT_STATUS_TEACHING = new QLineEdit(FRAME_ROBOT);
        LE_ROBOT_STATUS_TEACHING->setObjectName(QString::fromUtf8("LE_ROBOT_STATUS_TEACHING"));
        LE_ROBOT_STATUS_TEACHING->setGeometry(QRect(140, 130, 51, 21));
        LE_ROBOT_STATUS_TEACHING->setFont(font2);
        LE_ROBOT_STATUS_TEACHING->setAlignment(Qt::AlignCenter);
        LE_ROBOT_STATUS_TEACHING->setReadOnly(true);
        LE_ROBOT_STATUS_PAUSED = new QLineEdit(FRAME_ROBOT);
        LE_ROBOT_STATUS_PAUSED->setObjectName(QString::fromUtf8("LE_ROBOT_STATUS_PAUSED"));
        LE_ROBOT_STATUS_PAUSED->setGeometry(QRect(190, 130, 51, 21));
        LE_ROBOT_STATUS_PAUSED->setFont(font2);
        LE_ROBOT_STATUS_PAUSED->setAlignment(Qt::AlignCenter);
        LE_ROBOT_STATUS_PAUSED->setReadOnly(true);
        LE_ROBOT_STATUS_EXT_COLLISION = new QLineEdit(FRAME_ROBOT);
        LE_ROBOT_STATUS_EXT_COLLISION->setObjectName(QString::fromUtf8("LE_ROBOT_STATUS_EXT_COLLISION"));
        LE_ROBOT_STATUS_EXT_COLLISION->setGeometry(QRect(140, 150, 51, 21));
        LE_ROBOT_STATUS_EXT_COLLISION->setFont(font2);
        LE_ROBOT_STATUS_EXT_COLLISION->setAlignment(Qt::AlignCenter);
        LE_ROBOT_STATUS_EXT_COLLISION->setReadOnly(true);
        LE_ROBOT_STATUS_EMS = new QLineEdit(FRAME_ROBOT);
        LE_ROBOT_STATUS_EMS->setObjectName(QString::fromUtf8("LE_ROBOT_STATUS_EMS"));
        LE_ROBOT_STATUS_EMS->setGeometry(QRect(190, 150, 51, 21));
        LE_ROBOT_STATUS_EMS->setFont(font2);
        LE_ROBOT_STATUS_EMS->setAlignment(Qt::AlignCenter);
        LE_ROBOT_STATUS_EMS->setReadOnly(true);
        LE_ROBOT_STATUS_SOS = new QLineEdit(FRAME_ROBOT);
        LE_ROBOT_STATUS_SOS->setObjectName(QString::fromUtf8("LE_ROBOT_STATUS_SOS"));
        LE_ROBOT_STATUS_SOS->setGeometry(QRect(190, 170, 51, 21));
        LE_ROBOT_STATUS_SOS->setFont(font2);
        LE_ROBOT_STATUS_SOS->setAlignment(Qt::AlignCenter);
        LE_ROBOT_STATUS_SOS->setReadOnly(true);
        LE_ROBOT_STATUS_SELF_COLLISION = new QLineEdit(FRAME_ROBOT);
        LE_ROBOT_STATUS_SELF_COLLISION->setObjectName(QString::fromUtf8("LE_ROBOT_STATUS_SELF_COLLISION"));
        LE_ROBOT_STATUS_SELF_COLLISION->setGeometry(QRect(140, 170, 51, 21));
        LE_ROBOT_STATUS_SELF_COLLISION->setFont(font2);
        LE_ROBOT_STATUS_SELF_COLLISION->setAlignment(Qt::AlignCenter);
        LE_ROBOT_STATUS_SELF_COLLISION->setReadOnly(true);
        line = new QFrame(FRAME_ROBOT);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(260, 90, 2, 101));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        LE_ROBOT_INIT_BASE_ANGLE = new QLineEdit(FRAME_ROBOT);
        LE_ROBOT_INIT_BASE_ANGLE->setObjectName(QString::fromUtf8("LE_ROBOT_INIT_BASE_ANGLE"));
        LE_ROBOT_INIT_BASE_ANGLE->setGeometry(QRect(280, 130, 51, 21));
        LE_ROBOT_INIT_BASE_ANGLE->setFont(font2);
        LE_ROBOT_INIT_BASE_ANGLE->setAlignment(Qt::AlignCenter);
        LE_ROBOT_INIT_BASE_ANGLE->setReadOnly(true);
        LE_ROBOT_INIT_POSITION = new QLineEdit(FRAME_ROBOT);
        LE_ROBOT_INIT_POSITION->setObjectName(QString::fromUtf8("LE_ROBOT_INIT_POSITION"));
        LE_ROBOT_INIT_POSITION->setGeometry(QRect(280, 160, 51, 21));
        LE_ROBOT_INIT_POSITION->setFont(font2);
        LE_ROBOT_INIT_POSITION->setAlignment(Qt::AlignCenter);
        LE_ROBOT_INIT_POSITION->setReadOnly(true);
        label_92 = new QLabel(FRAME_ROBOT);
        label_92->setObjectName(QString::fromUtf8("label_92"));
        label_92->setGeometry(QRect(280, 100, 51, 21));
        label_92->setFont(font3);
        label_92->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        label_92->setAlignment(Qt::AlignCenter);
        FRAME_BARCODE = new QFrame(FRAME);
        FRAME_BARCODE->setObjectName(QString::fromUtf8("FRAME_BARCODE"));
        FRAME_BARCODE->setGeometry(QRect(1300, 720, 171, 201));
        FRAME_BARCODE->setStyleSheet(QString::fromUtf8("QFrame { \n"
"   border: 2px solid #595959 \n"
"} \n"
"QLabel {\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}\n"
"QPushButton {\n"
"	border:2px solid #595959;\n"
"	font: 15pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\"; \n"
"}\n"
"QLineEdit {\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}"));
        FRAME_BARCODE->setFrameShape(QFrame::StyledPanel);
        FRAME_BARCODE->setFrameShadow(QFrame::Raised);
        BTN_DEV_INFO_BARCODE = new QPushButton(FRAME_BARCODE);
        BTN_DEV_INFO_BARCODE->setObjectName(QString::fromUtf8("BTN_DEV_INFO_BARCODE"));
        BTN_DEV_INFO_BARCODE->setGeometry(QRect(0, 0, 171, 70));
        BTN_DEV_INFO_BARCODE->setFont(font1);
        label_17 = new QLabel(FRAME_BARCODE);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(10, 80, 111, 21));
        label_17->setFont(font3);
        label_17->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        label_17->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        LB_BARCODE_LAST_DATA = new QLabel(FRAME_BARCODE);
        LB_BARCODE_LAST_DATA->setObjectName(QString::fromUtf8("LB_BARCODE_LAST_DATA"));
        LB_BARCODE_LAST_DATA->setGeometry(QRect(10, 110, 151, 21));
        LB_BARCODE_LAST_DATA->setFont(font3);
        LB_BARCODE_LAST_DATA->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        LB_BARCODE_LAST_DATA->setAlignment(Qt::AlignCenter);
        FRAME_DOOR = new QFrame(FRAME);
        FRAME_DOOR->setObjectName(QString::fromUtf8("FRAME_DOOR"));
        FRAME_DOOR->setGeometry(QRect(500, 720, 221, 201));
        FRAME_DOOR->setStyleSheet(QString::fromUtf8("QFrame { \n"
"   border: 2px solid #595959 \n"
"} \n"
"QLabel {\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}\n"
"QPushButton {\n"
"	border:2px solid #595959;\n"
"	font: 15pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\"; \n"
"}\n"
"QLineEdit {\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}"));
        FRAME_DOOR->setFrameShape(QFrame::StyledPanel);
        FRAME_DOOR->setFrameShadow(QFrame::Raised);
        BTN_DEV_INFO_DOOR = new QPushButton(FRAME_DOOR);
        BTN_DEV_INFO_DOOR->setObjectName(QString::fromUtf8("BTN_DEV_INFO_DOOR"));
        BTN_DEV_INFO_DOOR->setGeometry(QRect(0, 0, 221, 70));
        BTN_DEV_INFO_DOOR->setFont(font1);
        label_129 = new QLabel(FRAME_DOOR);
        label_129->setObjectName(QString::fromUtf8("label_129"));
        label_129->setGeometry(QRect(120, 80, 81, 21));
        label_129->setFont(font3);
        label_129->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        label_129->setAlignment(Qt::AlignCenter);
        LE_DOOR_CLOSED = new QLineEdit(FRAME_DOOR);
        LE_DOOR_CLOSED->setObjectName(QString::fromUtf8("LE_DOOR_CLOSED"));
        LE_DOOR_CLOSED->setGeometry(QRect(120, 110, 81, 51));
        LE_DOOR_CLOSED->setFont(font3);
        LE_DOOR_CLOSED->setReadOnly(true);
        label_130 = new QLabel(FRAME_DOOR);
        label_130->setObjectName(QString::fromUtf8("label_130"));
        label_130->setGeometry(QRect(20, 80, 81, 21));
        label_130->setFont(font3);
        label_130->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        label_130->setAlignment(Qt::AlignCenter);
        LE_DOOR_OPENED = new QLineEdit(FRAME_DOOR);
        LE_DOOR_OPENED->setObjectName(QString::fromUtf8("LE_DOOR_OPENED"));
        LE_DOOR_OPENED->setGeometry(QRect(20, 110, 81, 51));
        LE_DOOR_OPENED->setFont(font3);
        LE_DOOR_OPENED->setReadOnly(true);
        FRAME_KIOSK = new QFrame(FRAME);
        FRAME_KIOSK->setObjectName(QString::fromUtf8("FRAME_KIOSK"));
        FRAME_KIOSK->setGeometry(QRect(100, 720, 181, 201));
        FRAME_KIOSK->setStyleSheet(QString::fromUtf8("QFrame { \n"
"   border: 2px solid #595959 \n"
"} \n"
"QLabel {\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}\n"
"QPushButton {\n"
"	border:2px solid #595959;\n"
"	font: 15pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\"; \n"
"}\n"
"QLineEdit {\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}"));
        FRAME_KIOSK->setFrameShape(QFrame::StyledPanel);
        FRAME_KIOSK->setFrameShadow(QFrame::Raised);
        BTN_DEV_INFO_KIOSK = new QPushButton(FRAME_KIOSK);
        BTN_DEV_INFO_KIOSK->setObjectName(QString::fromUtf8("BTN_DEV_INFO_KIOSK"));
        BTN_DEV_INFO_KIOSK->setGeometry(QRect(0, 0, 181, 70));
        BTN_DEV_INFO_KIOSK->setFont(font1);
        LB_KIOSK_BLOCK_ORDER = new QLabel(FRAME_KIOSK);
        LB_KIOSK_BLOCK_ORDER->setObjectName(QString::fromUtf8("LB_KIOSK_BLOCK_ORDER"));
        LB_KIOSK_BLOCK_ORDER->setGeometry(QRect(10, 100, 161, 31));
        LB_KIOSK_BLOCK_ORDER->setFont(font3);
        LB_KIOSK_BLOCK_ORDER->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        LB_KIOSK_BLOCK_ORDER->setAlignment(Qt::AlignCenter);
        FRAME_STOCK = new QFrame(FRAME);
        FRAME_STOCK->setObjectName(QString::fromUtf8("FRAME_STOCK"));
        FRAME_STOCK->setGeometry(QRect(640, 400, 191, 211));
        FRAME_STOCK->setStyleSheet(QString::fromUtf8("QFrame { \n"
"   border: 2px solid #595959 \n"
"} \n"
"QLabel {\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}\n"
"QPushButton {\n"
"	border:2px solid #595959;\n"
"	font: 15pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\"; \n"
"}\n"
"QLineEdit {\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}"));
        FRAME_STOCK->setFrameShape(QFrame::StyledPanel);
        FRAME_STOCK->setFrameShadow(QFrame::Raised);
        BTN_DEV_INFO_STOCK = new QPushButton(FRAME_STOCK);
        BTN_DEV_INFO_STOCK->setObjectName(QString::fromUtf8("BTN_DEV_INFO_STOCK"));
        BTN_DEV_INFO_STOCK->setGeometry(QRect(0, 0, 191, 70));
        BTN_DEV_INFO_STOCK->setFont(font1);
        BTN_ERROR = new QPushButton(FRAME);
        BTN_ERROR->setObjectName(QString::fromUtf8("BTN_ERROR"));
        BTN_ERROR->setGeometry(QRect(590, 280, 341, 70));
        BTN_ERROR->setFont(font1);
        BTN_ERROR->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"	border:2px solid #595959;\n"
"	font: 15pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\"; \n"
"	background-color: rgb(255, 0, 0);\n"
"}"));
        FRAME_DEVICE = new QFrame(centralWidget);
        FRAME_DEVICE->setObjectName(QString::fromUtf8("FRAME_DEVICE"));
        FRAME_DEVICE->setGeometry(QRect(0, 120, 400, 960));
        FRAME_DEVICE->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 217, 217);\n"
""));
        FRAME_DEVICE->setFrameShape(QFrame::NoFrame);
        FRAME_DEVICE->setFrameShadow(QFrame::Raised);
        BTN_SETTING = new QPushButton(centralWidget);
        BTN_SETTING->setObjectName(QString::fromUtf8("BTN_SETTING"));
        BTN_SETTING->setGeometry(QRect(1700, 10, 100, 100));
        QFont font4;
        font4.setPointSize(16);
        font4.setBold(true);
        font4.setWeight(75);
        BTN_SETTING->setFont(font4);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/build/image/settingw.png"), QSize(), QIcon::Normal, QIcon::Off);
        BTN_SETTING->setIcon(icon2);
        BTN_SETTING->setIconSize(QSize(60, 60));
        BTN_SETTING->setFlat(true);
        GB_OP_CONTROL = new QFrame(centralWidget);
        GB_OP_CONTROL->setObjectName(QString::fromUtf8("GB_OP_CONTROL"));
        GB_OP_CONTROL->setGeometry(QRect(630, 20, 931, 80));
        GB_OP_CONTROL->setFrameShape(QFrame::NoFrame);
        GB_OP_CONTROL->setFrameShadow(QFrame::Raised);
        BTN_SUPER_STOP = new QPushButton(GB_OP_CONTROL);
        BTN_SUPER_STOP->setObjectName(QString::fromUtf8("BTN_SUPER_STOP"));
        BTN_SUPER_STOP->setEnabled(false);
        BTN_SUPER_STOP->setGeometry(QRect(780, 0, 141, 31));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font5.setPointSize(16);
        font5.setBold(false);
        font5.setWeight(50);
        BTN_SUPER_STOP->setFont(font5);
        BTN_SUPER_STOP->setStyleSheet(QString::fromUtf8("color: rgb(89, 89, 89);\n"
"background-color: rgb(255, 255, 255);"));
        BTN_RESUME = new QPushButton(GB_OP_CONTROL);
        BTN_RESUME->setObjectName(QString::fromUtf8("BTN_RESUME"));
        BTN_RESUME->setGeometry(QRect(650, 40, 121, 31));
        BTN_RESUME->setFont(font5);
        BTN_RESUME->setStyleSheet(QString::fromUtf8("color: rgb(89, 89, 89);\n"
"background-color: rgb(255, 255, 255);"));
        BTN_FORCE_STOP = new QPushButton(GB_OP_CONTROL);
        BTN_FORCE_STOP->setObjectName(QString::fromUtf8("BTN_FORCE_STOP"));
        BTN_FORCE_STOP->setEnabled(false);
        BTN_FORCE_STOP->setGeometry(QRect(780, 40, 141, 31));
        BTN_FORCE_STOP->setFont(font5);
        BTN_FORCE_STOP->setStyleSheet(QString::fromUtf8("color: rgb(89, 89, 89);\n"
"background-color: rgb(255, 255, 255);"));
        BTN_CANCEL_STOP = new QPushButton(GB_OP_CONTROL);
        BTN_CANCEL_STOP->setObjectName(QString::fromUtf8("BTN_CANCEL_STOP"));
        BTN_CANCEL_STOP->setGeometry(QRect(490, 0, 131, 71));
        BTN_CANCEL_STOP->setFont(font5);
        BTN_CANCEL_STOP->setStyleSheet(QString::fromUtf8("color: rgb(89, 89, 89);\n"
"background-color: rgb(255, 255, 255);"));
        BTN_STOP_OPERATING = new QPushButton(GB_OP_CONTROL);
        BTN_STOP_OPERATING->setObjectName(QString::fromUtf8("BTN_STOP_OPERATING"));
        BTN_STOP_OPERATING->setGeometry(QRect(330, 0, 131, 71));
        BTN_STOP_OPERATING->setFont(font5);
        BTN_STOP_OPERATING->setStyleSheet(QString::fromUtf8("color: rgb(89, 89, 89);\n"
"background-color: rgb(255, 255, 255);"));
        LE_PLATFORM_OPENED_WHEN_OPERATING = new QLineEdit(GB_OP_CONTROL);
        LE_PLATFORM_OPENED_WHEN_OPERATING->setObjectName(QString::fromUtf8("LE_PLATFORM_OPENED_WHEN_OPERATING"));
        LE_PLATFORM_OPENED_WHEN_OPERATING->setGeometry(QRect(650, 0, 121, 31));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font6.setPointSize(12);
        font6.setBold(false);
        font6.setWeight(50);
        LE_PLATFORM_OPENED_WHEN_OPERATING->setFont(font6);
        LE_PLATFORM_OPENED_WHEN_OPERATING->setAlignment(Qt::AlignCenter);
        LE_PLATFORM_OPENED_WHEN_OPERATING->setReadOnly(true);
        BTN_DO_INITIALIZING = new QPushButton(GB_OP_CONTROL);
        BTN_DO_INITIALIZING->setObjectName(QString::fromUtf8("BTN_DO_INITIALIZING"));
        BTN_DO_INITIALIZING->setGeometry(QRect(10, 0, 131, 71));
        BTN_DO_INITIALIZING->setFont(font5);
        BTN_DO_INITIALIZING->setStyleSheet(QString::fromUtf8("color: rgb(89, 89, 89);\n"
"background-color: rgb(255, 255, 255);"));
        BTN_DO_OPERATING = new QPushButton(GB_OP_CONTROL);
        BTN_DO_OPERATING->setObjectName(QString::fromUtf8("BTN_DO_OPERATING"));
        BTN_DO_OPERATING->setGeometry(QRect(170, 0, 131, 71));
        BTN_DO_OPERATING->setFont(font5);
        BTN_DO_OPERATING->setStyleSheet(QString::fromUtf8("color: rgb(89, 89, 89);\n"
"background-color: rgb(255, 255, 255);"));
        layoutWidget7 = new QWidget(centralWidget);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(10, 9, 381, 101));
        gridLayout = new QGridLayout(layoutWidget7);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_135 = new QLabel(layoutWidget7);
        label_135->setObjectName(QString::fromUtf8("label_135"));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font7.setPointSize(15);
        font7.setBold(true);
        font7.setWeight(75);
        label_135->setFont(font7);
        label_135->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_135, 0, 0, 1, 1);

        LE_PLATFORM_INITIALIZING = new QLineEdit(layoutWidget7);
        LE_PLATFORM_INITIALIZING->setObjectName(QString::fromUtf8("LE_PLATFORM_INITIALIZING"));
        LE_PLATFORM_INITIALIZING->setMinimumSize(QSize(150, 30));
        QFont font8;
        font8.setPointSize(8);
        LE_PLATFORM_INITIALIZING->setFont(font8);
        LE_PLATFORM_INITIALIZING->setAlignment(Qt::AlignCenter);
        LE_PLATFORM_INITIALIZING->setReadOnly(true);

        gridLayout->addWidget(LE_PLATFORM_INITIALIZING, 0, 1, 1, 1);

        label_147 = new QLabel(layoutWidget7);
        label_147->setObjectName(QString::fromUtf8("label_147"));
        label_147->setFont(font7);
        label_147->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_147->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_147, 0, 2, 1, 1);

        LE_PLATFORM_WAITING_STOP = new QLineEdit(layoutWidget7);
        LE_PLATFORM_WAITING_STOP->setObjectName(QString::fromUtf8("LE_PLATFORM_WAITING_STOP"));
        LE_PLATFORM_WAITING_STOP->setMinimumSize(QSize(0, 30));
        LE_PLATFORM_WAITING_STOP->setFont(font8);
        LE_PLATFORM_WAITING_STOP->setReadOnly(true);

        gridLayout->addWidget(LE_PLATFORM_WAITING_STOP, 0, 3, 1, 1);

        label_146 = new QLabel(layoutWidget7);
        label_146->setObjectName(QString::fromUtf8("label_146"));
        label_146->setFont(font7);
        label_146->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_146, 1, 0, 1, 1);

        LE_PLATFORM_OPERATING = new QLineEdit(layoutWidget7);
        LE_PLATFORM_OPERATING->setObjectName(QString::fromUtf8("LE_PLATFORM_OPERATING"));
        LE_PLATFORM_OPERATING->setMinimumSize(QSize(150, 30));
        LE_PLATFORM_OPERATING->setFont(font8);
        LE_PLATFORM_OPERATING->setAlignment(Qt::AlignCenter);
        LE_PLATFORM_OPERATING->setReadOnly(true);

        gridLayout->addWidget(LE_PLATFORM_OPERATING, 1, 1, 1, 1);

        label_138 = new QLabel(layoutWidget7);
        label_138->setObjectName(QString::fromUtf8("label_138"));
        label_138->setFont(font7);
        label_138->setLayoutDirection(Qt::RightToLeft);
        label_138->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_138->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_138, 1, 2, 1, 1);

        LE_PLATFORM_CLOSED = new QLineEdit(layoutWidget7);
        LE_PLATFORM_CLOSED->setObjectName(QString::fromUtf8("LE_PLATFORM_CLOSED"));
        LE_PLATFORM_CLOSED->setMinimumSize(QSize(0, 30));
        LE_PLATFORM_CLOSED->setFont(font8);
        LE_PLATFORM_CLOSED->setReadOnly(true);

        gridLayout->addWidget(LE_PLATFORM_CLOSED, 1, 3, 1, 1);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(410, 20, 120, 80));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget8 = new QWidget(centralWidget);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(430, 20, 152, 84));
        horizontalLayout = new QHBoxLayout(layoutWidget8);
        horizontalLayout->setSpacing(4);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        PB_CUP_1m = new QProgressBar(layoutWidget8);
        PB_CUP_1m->setObjectName(QString::fromUtf8("PB_CUP_1m"));
        PB_CUP_1m->setMaximumSize(QSize(10, 80));
        PB_CUP_1m->setValue(24);
        PB_CUP_1m->setTextVisible(false);
        PB_CUP_1m->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(PB_CUP_1m);

        PB_CUP_2m = new QProgressBar(layoutWidget8);
        PB_CUP_2m->setObjectName(QString::fromUtf8("PB_CUP_2m"));
        PB_CUP_2m->setMaximumSize(QSize(10, 80));
        PB_CUP_2m->setValue(24);
        PB_CUP_2m->setTextVisible(false);
        PB_CUP_2m->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(PB_CUP_2m);

        PB_SYRUP_1m = new QProgressBar(layoutWidget8);
        PB_SYRUP_1m->setObjectName(QString::fromUtf8("PB_SYRUP_1m"));
        PB_SYRUP_1m->setMaximumSize(QSize(10, 80));
        PB_SYRUP_1m->setValue(24);
        PB_SYRUP_1m->setTextVisible(false);
        PB_SYRUP_1m->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(PB_SYRUP_1m);

        PB_SYRUP_2m = new QProgressBar(layoutWidget8);
        PB_SYRUP_2m->setObjectName(QString::fromUtf8("PB_SYRUP_2m"));
        PB_SYRUP_2m->setMaximumSize(QSize(10, 80));
        PB_SYRUP_2m->setValue(24);
        PB_SYRUP_2m->setTextVisible(false);
        PB_SYRUP_2m->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(PB_SYRUP_2m);

        PB_SYRUP_3m = new QProgressBar(layoutWidget8);
        PB_SYRUP_3m->setObjectName(QString::fromUtf8("PB_SYRUP_3m"));
        PB_SYRUP_3m->setMaximumSize(QSize(10, 80));
        PB_SYRUP_3m->setValue(24);
        PB_SYRUP_3m->setTextVisible(false);
        PB_SYRUP_3m->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(PB_SYRUP_3m);

        PB_SYRUP_4m = new QProgressBar(layoutWidget8);
        PB_SYRUP_4m->setObjectName(QString::fromUtf8("PB_SYRUP_4m"));
        PB_SYRUP_4m->setMaximumSize(QSize(10, 80));
        PB_SYRUP_4m->setValue(24);
        PB_SYRUP_4m->setTextVisible(false);
        PB_SYRUP_4m->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(PB_SYRUP_4m);

        PB_SYRUP_5m = new QProgressBar(layoutWidget8);
        PB_SYRUP_5m->setObjectName(QString::fromUtf8("PB_SYRUP_5m"));
        PB_SYRUP_5m->setMaximumSize(QSize(10, 80));
        PB_SYRUP_5m->setValue(24);
        PB_SYRUP_5m->setTextVisible(false);
        PB_SYRUP_5m->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(PB_SYRUP_5m);

        PB_ICE_1m = new QProgressBar(layoutWidget8);
        PB_ICE_1m->setObjectName(QString::fromUtf8("PB_ICE_1m"));
        PB_ICE_1m->setMaximumSize(QSize(10, 80));
        PB_ICE_1m->setValue(24);
        PB_ICE_1m->setTextVisible(false);
        PB_ICE_1m->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(PB_ICE_1m);

        PB_COFFEEm = new QProgressBar(layoutWidget8);
        PB_COFFEEm->setObjectName(QString::fromUtf8("PB_COFFEEm"));
        PB_COFFEEm->setMaximumSize(QSize(10, 80));
        PB_COFFEEm->setValue(24);
        PB_COFFEEm->setTextVisible(false);
        PB_COFFEEm->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(PB_COFFEEm);

        PB_MILKm = new QProgressBar(layoutWidget8);
        PB_MILKm->setObjectName(QString::fromUtf8("PB_MILKm"));
        PB_MILKm->setMaximumSize(QSize(10, 80));
        PB_MILKm->setValue(24);
        PB_MILKm->setTextVisible(false);
        PB_MILKm->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(PB_MILKm);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        BTN_EXIT->setText(QString());
        BTN_UI_LOCK->setText(QString());
        BTN_DEV_INFO_COFFEE->setText(QCoreApplication::translate("MainWindow", "\354\273\244\355\224\274 (Eversys)", nullptr));
        LE_WATER_M_ACTION->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        LE_WATER_M_STATUS_NOT_READY->setText(QCoreApplication::translate("MainWindow", "Not Ready", nullptr));
        LE_COFFEE_L_M_STATUS_ONLY_MILK_READY->setText(QCoreApplication::translate("MainWindow", "Only Milk Ready", nullptr));
        LE_COFFEE_L_M_STATUS_ONLY_COFFEE_READY->setText(QCoreApplication::translate("MainWindow", "Only Coffee Ready", nullptr));
        label_38->setText(QCoreApplication::translate("MainWindow", "(M)Water Action", nullptr));
        LE_WATER_M_STATUS_ONLY_MILK_READY->setText(QCoreApplication::translate("MainWindow", "Only Milk Ready", nullptr));
        LE_COFFEE_L_M_PROCESS->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        LE_COFFEE_L_M_STATUS_READY->setText(QCoreApplication::translate("MainWindow", "Ready", nullptr));
        label_42->setText(QCoreApplication::translate("MainWindow", "(M)Water Status", nullptr));
        LE_WATER_M_STATUS_ONLY_COFFEE_READY->setText(QCoreApplication::translate("MainWindow", "Only Coffee Ready", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "(M)Water Process", nullptr));
        LE_WATER_M_PROCESS->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        LE_WATER_M_STATUS_READY->setText(QCoreApplication::translate("MainWindow", "Ready", nullptr));
        LE_COFFEE_L_M_ACTION->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        LE_COFFEE_L_M_STATUS_NOT_READY->setText(QCoreApplication::translate("MainWindow", "Not Ready", nullptr));
        LE_WATER_M_STATUS_UNDEF->setText(QCoreApplication::translate("MainWindow", "Undef", nullptr));
        LE_COFFEE_L_M_STATUS_UNDEF->setText(QCoreApplication::translate("MainWindow", "Undef", nullptr));
        label_39->setText(QCoreApplication::translate("MainWindow", "(M)Coffee L Process", nullptr));
        label_40->setText(QCoreApplication::translate("MainWindow", "(M)Coffee L Action", nullptr));
        label_41->setText(QCoreApplication::translate("MainWindow", "(M)Coffee L Status", nullptr));
        BTN_DEV_INFO_ICE_1->setText(QCoreApplication::translate("MainWindow", "\354\226\274\354\235\214 \353\224\224\354\212\244\355\216\234\354\204\234", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\353\247\214\353\271\231 : ", nullptr));
        LB_ICE_1_FULL->setText(QCoreApplication::translate("MainWindow", "\353\247\214\353\271\231\354\225\204\353\213\230", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\354\227\220\353\237\254 : ", nullptr));
        LB_ICE_1_ERROR->setText(QCoreApplication::translate("MainWindow", "\354\227\220\353\237\254\354\227\206\354\235\214", nullptr));
        BTN_DEV_INFO_SYRUP->setText(QCoreApplication::translate("MainWindow", "\354\213\234\353\237\275 \353\224\224\354\212\244\355\216\234\354\204\234", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\353\241\234\353\223\234\354\205\200 :", nullptr));
        LB_SYRUP_LOADCELL->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\354\265\234\354\242\205 \354\227\220\353\237\254 :", nullptr));
        LB_SYRUP_LAST_ERROR->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\355\230\204\354\236\254 \353\217\231\354\236\221 :", nullptr));
        LB_SYRUP_OP_STATE->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        BTN_DEV_INFO_OUTLET->setText(QCoreApplication::translate("MainWindow", "\353\260\260\354\266\234\352\265\254", nullptr));
        LE_OUTLET_M_1_DOOR_OPEN->setText(QCoreApplication::translate("MainWindow", "\354\227\264\353\246\274", nullptr));
        LE_OUTLET_M_1_DOOR_CLOSE->setText(QCoreApplication::translate("MainWindow", "\353\213\253\355\236\230", nullptr));
        LE_OUTLET_M_1_CUP_DETECT->setText(QCoreApplication::translate("MainWindow", "\354\273\265\352\260\220\354\247\200", nullptr));
        LE_OUTLET_M_2_DOOR_OPEN->setText(QCoreApplication::translate("MainWindow", "\354\227\264\353\246\274", nullptr));
        LE_OUTLET_M_2_DOOR_CLOSE->setText(QCoreApplication::translate("MainWindow", "\353\213\253\355\236\230", nullptr));
        LE_OUTLET_M_2_CUP_DETECT->setText(QCoreApplication::translate("MainWindow", "\354\273\265\352\260\220\354\247\200", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Cell 1:", nullptr));
        LB_OUTLET_M_1_CELL_1->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Cell 2:", nullptr));
        LB_OUTLET_M_1_CELL_2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Cell 3:", nullptr));
        LB_OUTLET_M_1_CELL_3->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Cell 1:", nullptr));
        LB_OUTLET_M_2_CELL_1->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Cell 2:", nullptr));
        LB_OUTLET_M_2_CELL_2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Cell 3:", nullptr));
        LB_OUTLET_M_2_CELL_3->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        BTN_DEV_INFO_MONITOR->setText(QCoreApplication::translate("MainWindow", "\355\230\204\355\231\251\355\214\220", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "\354\240\234\354\241\260\354\244\221 \354\235\214\353\243\214 :", nullptr));
        LB_MONITOR_INPROGRESS->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "\353\214\200\352\270\260\354\244\221 \354\235\214\353\243\214 :", nullptr));
        LB_MONITOR_WAITING->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "\354\231\204\353\243\214\353\220\234 \354\235\214\353\243\214 :", nullptr));
        LB_MONITOR_COMPLETED->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        BTN_DEV_INFO_CUP->setText(QCoreApplication::translate("MainWindow", "\354\273\265 \353\224\224\354\212\244\355\216\234\354\204\234", nullptr));
        LB_CUP_2_LAST_ERROR->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        LB_CUP_2_OP_STATE->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        LB_CUP_1_OP_STATE->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "\354\242\205\354\235\264\354\273\2652", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "\354\242\205\354\235\264\354\273\2651", nullptr));
        LB_CUP_1_LAST_ERROR->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "\354\265\234\354\242\205 \354\227\220\353\237\254 :", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "\355\230\204\354\236\254 \353\217\231\354\236\221 :", nullptr));
        BTN_CUP_ADD_DONE->setText(QCoreApplication::translate("MainWindow", "\354\273\265 \354\266\224\352\260\200 \354\231\204\353\243\214", nullptr));
        BTN_DEV_INFO_ROBOT->setText(QCoreApplication::translate("MainWindow", "\353\241\234\353\264\207", nullptr));
        label_91->setText(QCoreApplication::translate("MainWindow", "\353\217\231\354\236\221 \355\224\204\353\241\234\352\267\270\353\236\250", nullptr));
        LE_ROBOT_PRG_CONNECT->setText(QCoreApplication::translate("MainWindow", "\355\206\265\354\213\240", nullptr));
        LE_ROBOT_PRG_WORKING_STATUS->setText(QCoreApplication::translate("MainWindow", "\354\213\244\355\226\211", nullptr));
        LE_PG_MODE_SIMULATION->setText(QCoreApplication::translate("MainWindow", "\354\213\234\353\256\254", nullptr));
        LE_PG_MODE_REAL->setText(QCoreApplication::translate("MainWindow", "\353\246\254\354\226\274", nullptr));
        LE_ROBOT_STATE_MOVING->setText(QCoreApplication::translate("MainWindow", "\353\217\231\354\236\221\354\244\221", nullptr));
        LE_ROBOT_STATE_IDLE->setText(QCoreApplication::translate("MainWindow", "\353\214\200\352\270\260\354\244\221", nullptr));
        LE_ROBOT_STATUS_TEACHING->setText(QCoreApplication::translate("MainWindow", "\355\213\260\354\271\255\354\244\221", nullptr));
        LE_ROBOT_STATUS_PAUSED->setText(QCoreApplication::translate("MainWindow", "\354\235\274\354\213\234\354\240\225\354\247\200", nullptr));
        LE_ROBOT_STATUS_EXT_COLLISION->setText(QCoreApplication::translate("MainWindow", "\354\231\270\353\266\200\354\266\251\353\217\214", nullptr));
        LE_ROBOT_STATUS_EMS->setText(QCoreApplication::translate("MainWindow", "EMS", nullptr));
        LE_ROBOT_STATUS_SOS->setText(QCoreApplication::translate("MainWindow", "SOS", nullptr));
        LE_ROBOT_STATUS_SELF_COLLISION->setText(QCoreApplication::translate("MainWindow", "\354\236\220\352\260\200\354\266\251\353\217\214", nullptr));
        LE_ROBOT_INIT_BASE_ANGLE->setText(QCoreApplication::translate("MainWindow", "\353\262\240\354\235\264\354\212\244", nullptr));
        LE_ROBOT_INIT_POSITION->setText(QCoreApplication::translate("MainWindow", "\354\236\220\354\204\270", nullptr));
        label_92->setText(QCoreApplication::translate("MainWindow", "\354\264\210\352\270\260\355\231\224", nullptr));
        BTN_DEV_INFO_BARCODE->setText(QCoreApplication::translate("MainWindow", "\353\260\224\354\275\224\353\223\234", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "\353\247\210\354\247\200\353\247\211 \353\260\224\354\275\224\353\223\234 :", nullptr));
        LB_BARCODE_LAST_DATA->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        BTN_DEV_INFO_DOOR->setText(QCoreApplication::translate("MainWindow", "\354\266\234\354\236\205\352\265\254", nullptr));
        label_129->setText(QCoreApplication::translate("MainWindow", "\353\254\270\353\213\253\355\236\230", nullptr));
        label_130->setText(QCoreApplication::translate("MainWindow", "\353\254\270\354\227\264\353\246\274", nullptr));
        BTN_DEV_INFO_KIOSK->setText(QCoreApplication::translate("MainWindow", "\355\202\244\354\230\244\354\212\244\355\201\254", nullptr));
        LB_KIOSK_BLOCK_ORDER->setText(QCoreApplication::translate("MainWindow", "\354\243\274\353\254\270\354\260\250\353\213\250", nullptr));
        BTN_DEV_INFO_STOCK->setText(QCoreApplication::translate("MainWindow", "\354\236\254\352\263\240", nullptr));
        BTN_ERROR->setText(QCoreApplication::translate("MainWindow", "\354\227\220\353\237\254\353\260\234\354\203\235", nullptr));
        BTN_SETTING->setText(QString());
        BTN_SUPER_STOP->setText(QCoreApplication::translate("MainWindow", "Super Stop", nullptr));
        BTN_RESUME->setText(QCoreApplication::translate("MainWindow", "\353\217\231\354\236\221 \354\236\254\352\260\234", nullptr));
        BTN_FORCE_STOP->setText(QCoreApplication::translate("MainWindow", "Force Stop", nullptr));
        BTN_CANCEL_STOP->setText(QCoreApplication::translate("MainWindow", "\354\240\225\354\247\200 \354\267\250\354\206\214", nullptr));
        BTN_STOP_OPERATING->setText(QCoreApplication::translate("MainWindow", "\354\230\201\354\227\205 \354\240\225\354\247\200", nullptr));
        LE_PLATFORM_OPENED_WHEN_OPERATING->setText(QCoreApplication::translate("MainWindow", "\353\217\231\354\236\221\354\244\221 \353\254\270\354\227\264\353\246\274", nullptr));
        BTN_DO_INITIALIZING->setText(QCoreApplication::translate("MainWindow", "\354\264\210\352\270\260\355\231\224 \354\213\234\354\236\221", nullptr));
        BTN_DO_OPERATING->setText(QCoreApplication::translate("MainWindow", "\354\230\201\354\227\205 \354\213\234\354\236\221", nullptr));
        label_135->setText(QCoreApplication::translate("MainWindow", "\354\264\210\352\270\260\355\231\224", nullptr));
        label_147->setText(QCoreApplication::translate("MainWindow", "\354\242\205\353\243\214 \354\213\240\355\230\270", nullptr));
        label_146->setText(QCoreApplication::translate("MainWindow", "\354\230\201\354\227\205\354\244\221", nullptr));
        label_138->setText(QCoreApplication::translate("MainWindow", "\353\254\270\353\213\253\355\236\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
