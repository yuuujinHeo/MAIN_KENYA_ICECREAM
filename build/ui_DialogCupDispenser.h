/********************************************************************************
** Form generated from reading UI file 'DialogCupDispenser.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCUPDISPENSER_H
#define UI_DIALOGCUPDISPENSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogCupDispenser
{
public:
    QGroupBox *GB_CUP;
    QFrame *line_37;
    QFrame *line_38;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *LE_CUP_CONNECTION_1;
    QLabel *label_124;
    QLabel *label_110;
    QLabel *label_123;
    QLabel *label_120;
    QLineEdit *LE_CUP_DETECTED_2;
    QLineEdit *LE_CUP_SENSOR_ERROR_2;
    QLineEdit *LE_CUP_DETECTED_1;
    QLineEdit *LE_CUP_HAS_CUP_2;
    QLabel *label_125;
    QLineEdit *LE_CUP_CONNECTION_2;
    QLabel *label_119;
    QLineEdit *LE_CUP_HAS_CUP_1;
    QLineEdit *LE_CUP_SENSOR_ERROR_1;
    QPushButton *BTN_CUP_DISPENSE_1;
    QPushButton *BTN_CUP_DISPENSE_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLineEdit *LE_CUP_LAST_DISPENSE_ERROR_1;
    QLineEdit *LE_CUP_CHECK_COUNT_1;
    QLineEdit *LE_CUP_ULTRA_SONIC_2;
    QLineEdit *LE_CUP_OP_STATE_1;
    QLineEdit *LE_CUP_OP_STATE_2;
    QLineEdit *LE_CUP_LAST_DISPENSE_ERROR_2;
    QLabel *label_114;
    QLabel *label_112;
    QLineEdit *LE_CUP_ULTRA_SONIC_1;
    QLineEdit *LE_CUP_CHECK_COUNT_2;
    QLabel *label_113;
    QLabel *label_111;
    QLabel *label_129;
    QLabel *label_127;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *DialogCupDispenser)
    {
        if (DialogCupDispenser->objectName().isEmpty())
            DialogCupDispenser->setObjectName(QString::fromUtf8("DialogCupDispenser"));
        DialogCupDispenser->resize(400, 960);
        GB_CUP = new QGroupBox(DialogCupDispenser);
        GB_CUP->setObjectName(QString::fromUtf8("GB_CUP"));
        GB_CUP->setGeometry(QRect(0, 0, 400, 960));
        QFont font;
        font.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        GB_CUP->setFont(font);
        GB_CUP->setStyleSheet(QString::fromUtf8("QGroupBox  {\n"
"    margin-top: 10px;\n"
"	font: 20pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}\n"
"\n"
"QGroupBox::title  {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center;\n"
"    padding: 10px 8000px 10px 8000px;\n"
"    background-color: #595959;\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
"QLabel {\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}\n"
"QComboBox{\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"	background-color: #ffffff\n"
"}\n"
"QPushButton{\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"	background-color: #ffffff\n"
"}\n"
"QLineEdit{\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"	background-color: #ffffff\n"
"}\n"
"\n"
"\n"
"\n"
""));
        line_37 = new QFrame(GB_CUP);
        line_37->setObjectName(QString::fromUtf8("line_37"));
        line_37->setGeometry(QRect(30, 290, 341, 20));
        QFont font1;
        font1.setPointSize(11);
        line_37->setFont(font1);
        line_37->setFrameShape(QFrame::HLine);
        line_37->setFrameShadow(QFrame::Sunken);
        line_38 = new QFrame(GB_CUP);
        line_38->setObjectName(QString::fromUtf8("line_38"));
        line_38->setGeometry(QRect(30, 570, 341, 20));
        line_38->setFont(font1);
        line_38->setFrameShape(QFrame::HLine);
        line_38->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(GB_CUP);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 70, 321, 202));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        LE_CUP_CONNECTION_1 = new QLineEdit(layoutWidget);
        LE_CUP_CONNECTION_1->setObjectName(QString::fromUtf8("LE_CUP_CONNECTION_1"));
        LE_CUP_CONNECTION_1->setMaximumSize(QSize(100, 16777215));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        LE_CUP_CONNECTION_1->setFont(font2);
        LE_CUP_CONNECTION_1->setReadOnly(true);

        gridLayout->addWidget(LE_CUP_CONNECTION_1, 1, 1, 1, 1);

        label_124 = new QLabel(layoutWidget);
        label_124->setObjectName(QString::fromUtf8("label_124"));
        label_124->setFont(font2);
        label_124->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_124, 3, 0, 1, 1);

        label_110 = new QLabel(layoutWidget);
        label_110->setObjectName(QString::fromUtf8("label_110"));
        label_110->setFont(font2);
        label_110->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_110, 1, 0, 1, 1);

        label_123 = new QLabel(layoutWidget);
        label_123->setObjectName(QString::fromUtf8("label_123"));
        label_123->setFont(font2);
        label_123->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_123, 2, 0, 1, 1);

        label_120 = new QLabel(layoutWidget);
        label_120->setObjectName(QString::fromUtf8("label_120"));
        label_120->setFont(font2);
        label_120->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_120, 0, 2, 1, 1);

        LE_CUP_DETECTED_2 = new QLineEdit(layoutWidget);
        LE_CUP_DETECTED_2->setObjectName(QString::fromUtf8("LE_CUP_DETECTED_2"));
        LE_CUP_DETECTED_2->setMaximumSize(QSize(100, 16777215));
        LE_CUP_DETECTED_2->setFont(font2);
        LE_CUP_DETECTED_2->setReadOnly(true);

        gridLayout->addWidget(LE_CUP_DETECTED_2, 4, 2, 1, 1);

        LE_CUP_SENSOR_ERROR_2 = new QLineEdit(layoutWidget);
        LE_CUP_SENSOR_ERROR_2->setObjectName(QString::fromUtf8("LE_CUP_SENSOR_ERROR_2"));
        LE_CUP_SENSOR_ERROR_2->setMaximumSize(QSize(100, 16777215));
        LE_CUP_SENSOR_ERROR_2->setFont(font2);
        LE_CUP_SENSOR_ERROR_2->setReadOnly(true);

        gridLayout->addWidget(LE_CUP_SENSOR_ERROR_2, 2, 2, 1, 1);

        LE_CUP_DETECTED_1 = new QLineEdit(layoutWidget);
        LE_CUP_DETECTED_1->setObjectName(QString::fromUtf8("LE_CUP_DETECTED_1"));
        LE_CUP_DETECTED_1->setMaximumSize(QSize(100, 16777215));
        LE_CUP_DETECTED_1->setFont(font2);
        LE_CUP_DETECTED_1->setReadOnly(true);

        gridLayout->addWidget(LE_CUP_DETECTED_1, 4, 1, 1, 1);

        LE_CUP_HAS_CUP_2 = new QLineEdit(layoutWidget);
        LE_CUP_HAS_CUP_2->setObjectName(QString::fromUtf8("LE_CUP_HAS_CUP_2"));
        LE_CUP_HAS_CUP_2->setMaximumSize(QSize(100, 16777215));
        LE_CUP_HAS_CUP_2->setFont(font2);
        LE_CUP_HAS_CUP_2->setReadOnly(true);

        gridLayout->addWidget(LE_CUP_HAS_CUP_2, 3, 2, 1, 1);

        label_125 = new QLabel(layoutWidget);
        label_125->setObjectName(QString::fromUtf8("label_125"));
        label_125->setFont(font2);
        label_125->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_125, 4, 0, 1, 1);

        LE_CUP_CONNECTION_2 = new QLineEdit(layoutWidget);
        LE_CUP_CONNECTION_2->setObjectName(QString::fromUtf8("LE_CUP_CONNECTION_2"));
        LE_CUP_CONNECTION_2->setMaximumSize(QSize(100, 16777215));
        LE_CUP_CONNECTION_2->setFont(font2);
        LE_CUP_CONNECTION_2->setReadOnly(true);

        gridLayout->addWidget(LE_CUP_CONNECTION_2, 1, 2, 1, 1);

        label_119 = new QLabel(layoutWidget);
        label_119->setObjectName(QString::fromUtf8("label_119"));
        label_119->setFont(font2);
        label_119->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_119, 0, 1, 1, 1);

        LE_CUP_HAS_CUP_1 = new QLineEdit(layoutWidget);
        LE_CUP_HAS_CUP_1->setObjectName(QString::fromUtf8("LE_CUP_HAS_CUP_1"));
        LE_CUP_HAS_CUP_1->setMaximumSize(QSize(100, 16777215));
        LE_CUP_HAS_CUP_1->setFont(font2);
        LE_CUP_HAS_CUP_1->setReadOnly(true);

        gridLayout->addWidget(LE_CUP_HAS_CUP_1, 3, 1, 1, 1);

        LE_CUP_SENSOR_ERROR_1 = new QLineEdit(layoutWidget);
        LE_CUP_SENSOR_ERROR_1->setObjectName(QString::fromUtf8("LE_CUP_SENSOR_ERROR_1"));
        LE_CUP_SENSOR_ERROR_1->setMaximumSize(QSize(100, 16777215));
        LE_CUP_SENSOR_ERROR_1->setFont(font2);
        LE_CUP_SENSOR_ERROR_1->setReadOnly(true);

        gridLayout->addWidget(LE_CUP_SENSOR_ERROR_1, 2, 1, 1, 1);

        BTN_CUP_DISPENSE_1 = new QPushButton(layoutWidget);
        BTN_CUP_DISPENSE_1->setObjectName(QString::fromUtf8("BTN_CUP_DISPENSE_1"));
        BTN_CUP_DISPENSE_1->setMinimumSize(QSize(0, 50));
        BTN_CUP_DISPENSE_1->setMaximumSize(QSize(100, 16777215));
        BTN_CUP_DISPENSE_1->setFont(font2);

        gridLayout->addWidget(BTN_CUP_DISPENSE_1, 5, 1, 1, 1);

        BTN_CUP_DISPENSE_2 = new QPushButton(layoutWidget);
        BTN_CUP_DISPENSE_2->setObjectName(QString::fromUtf8("BTN_CUP_DISPENSE_2"));
        BTN_CUP_DISPENSE_2->setMinimumSize(QSize(0, 50));
        BTN_CUP_DISPENSE_2->setMaximumSize(QSize(100, 16777215));
        BTN_CUP_DISPENSE_2->setFont(font2);

        gridLayout->addWidget(BTN_CUP_DISPENSE_2, 5, 2, 1, 1);

        layoutWidget1 = new QWidget(GB_CUP);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 620, 321, 146));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        LE_CUP_LAST_DISPENSE_ERROR_1 = new QLineEdit(layoutWidget1);
        LE_CUP_LAST_DISPENSE_ERROR_1->setObjectName(QString::fromUtf8("LE_CUP_LAST_DISPENSE_ERROR_1"));
        LE_CUP_LAST_DISPENSE_ERROR_1->setMaximumSize(QSize(100, 16777215));
        LE_CUP_LAST_DISPENSE_ERROR_1->setFont(font2);
        LE_CUP_LAST_DISPENSE_ERROR_1->setReadOnly(true);

        gridLayout_2->addWidget(LE_CUP_LAST_DISPENSE_ERROR_1, 3, 1, 1, 1);

        LE_CUP_CHECK_COUNT_1 = new QLineEdit(layoutWidget1);
        LE_CUP_CHECK_COUNT_1->setObjectName(QString::fromUtf8("LE_CUP_CHECK_COUNT_1"));
        LE_CUP_CHECK_COUNT_1->setMaximumSize(QSize(100, 16777215));
        LE_CUP_CHECK_COUNT_1->setFont(font2);
        LE_CUP_CHECK_COUNT_1->setReadOnly(true);

        gridLayout_2->addWidget(LE_CUP_CHECK_COUNT_1, 2, 1, 1, 1);

        LE_CUP_ULTRA_SONIC_2 = new QLineEdit(layoutWidget1);
        LE_CUP_ULTRA_SONIC_2->setObjectName(QString::fromUtf8("LE_CUP_ULTRA_SONIC_2"));
        LE_CUP_ULTRA_SONIC_2->setMaximumSize(QSize(100, 16777215));
        LE_CUP_ULTRA_SONIC_2->setFont(font2);
        LE_CUP_ULTRA_SONIC_2->setReadOnly(true);

        gridLayout_2->addWidget(LE_CUP_ULTRA_SONIC_2, 1, 2, 1, 1);

        LE_CUP_OP_STATE_1 = new QLineEdit(layoutWidget1);
        LE_CUP_OP_STATE_1->setObjectName(QString::fromUtf8("LE_CUP_OP_STATE_1"));
        LE_CUP_OP_STATE_1->setMaximumSize(QSize(100, 16777215));
        LE_CUP_OP_STATE_1->setFont(font2);
        LE_CUP_OP_STATE_1->setReadOnly(true);

        gridLayout_2->addWidget(LE_CUP_OP_STATE_1, 4, 1, 1, 1);

        LE_CUP_OP_STATE_2 = new QLineEdit(layoutWidget1);
        LE_CUP_OP_STATE_2->setObjectName(QString::fromUtf8("LE_CUP_OP_STATE_2"));
        LE_CUP_OP_STATE_2->setMaximumSize(QSize(100, 16777215));
        LE_CUP_OP_STATE_2->setFont(font2);
        LE_CUP_OP_STATE_2->setReadOnly(true);

        gridLayout_2->addWidget(LE_CUP_OP_STATE_2, 4, 2, 1, 1);

        LE_CUP_LAST_DISPENSE_ERROR_2 = new QLineEdit(layoutWidget1);
        LE_CUP_LAST_DISPENSE_ERROR_2->setObjectName(QString::fromUtf8("LE_CUP_LAST_DISPENSE_ERROR_2"));
        LE_CUP_LAST_DISPENSE_ERROR_2->setMaximumSize(QSize(100, 16777215));
        LE_CUP_LAST_DISPENSE_ERROR_2->setFont(font2);
        LE_CUP_LAST_DISPENSE_ERROR_2->setReadOnly(true);

        gridLayout_2->addWidget(LE_CUP_LAST_DISPENSE_ERROR_2, 3, 2, 1, 1);

        label_114 = new QLabel(layoutWidget1);
        label_114->setObjectName(QString::fromUtf8("label_114"));
        label_114->setFont(font2);
        label_114->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_114, 4, 0, 1, 1);

        label_112 = new QLabel(layoutWidget1);
        label_112->setObjectName(QString::fromUtf8("label_112"));
        label_112->setFont(font2);
        label_112->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_112, 2, 0, 1, 1);

        LE_CUP_ULTRA_SONIC_1 = new QLineEdit(layoutWidget1);
        LE_CUP_ULTRA_SONIC_1->setObjectName(QString::fromUtf8("LE_CUP_ULTRA_SONIC_1"));
        LE_CUP_ULTRA_SONIC_1->setMaximumSize(QSize(100, 16777215));
        LE_CUP_ULTRA_SONIC_1->setFont(font2);
        LE_CUP_ULTRA_SONIC_1->setReadOnly(true);

        gridLayout_2->addWidget(LE_CUP_ULTRA_SONIC_1, 1, 1, 1, 1);

        LE_CUP_CHECK_COUNT_2 = new QLineEdit(layoutWidget1);
        LE_CUP_CHECK_COUNT_2->setObjectName(QString::fromUtf8("LE_CUP_CHECK_COUNT_2"));
        LE_CUP_CHECK_COUNT_2->setMaximumSize(QSize(100, 16777215));
        LE_CUP_CHECK_COUNT_2->setFont(font2);
        LE_CUP_CHECK_COUNT_2->setReadOnly(true);

        gridLayout_2->addWidget(LE_CUP_CHECK_COUNT_2, 2, 2, 1, 1);

        label_113 = new QLabel(layoutWidget1);
        label_113->setObjectName(QString::fromUtf8("label_113"));
        label_113->setFont(font2);
        label_113->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_113, 3, 0, 1, 1);

        label_111 = new QLabel(layoutWidget1);
        label_111->setObjectName(QString::fromUtf8("label_111"));
        label_111->setFont(font2);
        label_111->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_111, 1, 0, 1, 1);

        label_129 = new QLabel(layoutWidget1);
        label_129->setObjectName(QString::fromUtf8("label_129"));
        label_129->setFont(font2);
        label_129->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_129, 0, 1, 1, 1);

        label_127 = new QLabel(layoutWidget1);
        label_127->setObjectName(QString::fromUtf8("label_127"));
        label_127->setFont(font2);
        label_127->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_127, 0, 2, 1, 1);

        layoutWidget2 = new QWidget(GB_CUP);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(40, 770, 321, 100));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font2);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font2);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);

        verticalLayout->addWidget(label_4);


        retranslateUi(DialogCupDispenser);

        QMetaObject::connectSlotsByName(DialogCupDispenser);
    } // setupUi

    void retranslateUi(QDialog *DialogCupDispenser)
    {
        DialogCupDispenser->setWindowTitle(QCoreApplication::translate("DialogCupDispenser", "Dialog", nullptr));
        GB_CUP->setTitle(QCoreApplication::translate("DialogCupDispenser", "\354\273\265 \353\260\260\354\266\234\352\270\260", nullptr));
        label_124->setText(QCoreApplication::translate("DialogCupDispenser", "\354\273\265 \354\236\254\352\263\240 \352\260\220\354\247\200", nullptr));
        label_110->setText(QCoreApplication::translate("DialogCupDispenser", "\354\236\245\354\271\230 \354\227\260\352\262\260 \354\203\201\355\203\234", nullptr));
        label_123->setText(QCoreApplication::translate("DialogCupDispenser", "\354\273\265 \354\204\274\354\204\234 \354\227\220\353\237\254", nullptr));
        label_120->setText(QCoreApplication::translate("DialogCupDispenser", "\354\242\205\354\235\2642", nullptr));
        label_125->setText(QCoreApplication::translate("DialogCupDispenser", "\354\273\265 \353\260\260\354\266\234 \352\260\220\354\247\200", nullptr));
        label_119->setText(QCoreApplication::translate("DialogCupDispenser", "\354\242\205\354\235\2641", nullptr));
        BTN_CUP_DISPENSE_1->setText(QCoreApplication::translate("DialogCupDispenser", "\354\273\265 \353\260\260\354\266\234\n"
"(\354\242\205\354\235\2641)", nullptr));
        BTN_CUP_DISPENSE_2->setText(QCoreApplication::translate("DialogCupDispenser", "\354\273\265 \353\260\260\354\266\234\n"
"(\354\242\205\354\235\2642)", nullptr));
        label_114->setText(QCoreApplication::translate("DialogCupDispenser", "\355\230\204 \353\217\231\354\236\221\354\203\201\355\203\234", nullptr));
        label_112->setText(QCoreApplication::translate("DialogCupDispenser", "\354\262\264\355\201\254 \354\271\264\354\232\264\355\212\270", nullptr));
        label_113->setText(QCoreApplication::translate("DialogCupDispenser", "\354\265\234\354\242\205 \353\260\260\354\266\234\354\227\220\353\237\254", nullptr));
        label_111->setText(QCoreApplication::translate("DialogCupDispenser", "\354\273\265 \352\261\260\353\246\254\354\240\225\353\263\264", nullptr));
        label_129->setText(QCoreApplication::translate("DialogCupDispenser", "\354\242\205\354\235\2641", nullptr));
        label_127->setText(QCoreApplication::translate("DialogCupDispenser", "\354\242\205\354\235\2642", nullptr));
        label->setText(QCoreApplication::translate("DialogCupDispenser", "E1: \352\270\260\354\241\264 \353\260\260\354\266\234 \353\217\231\354\236\221\354\235\264 \353\201\235\353\202\230\354\247\200 \354\225\212\354\225\230\353\212\224\353\215\260 \353\252\205\353\240\271 \353\260\233\354\235\214", nullptr));
        label_2->setText(QCoreApplication::translate("DialogCupDispenser", "E2: \354\273\265 \353\260\260\354\266\234 \354\234\204\354\271\230\354\227\220 \353\254\274\354\262\264\352\260\200 \352\260\220\354\247\200\353\220\250 (\353\217\231\354\236\221 \354\210\230\355\226\211\354\240\204 \352\260\220\354\247\200)", nullptr));
        label_3->setText(QCoreApplication::translate("DialogCupDispenser", "E3: \354\273\265 \353\260\260\354\266\234 \353\217\231\354\236\221 \354\231\204\353\243\214 \355\233\204, \353\260\260\354\266\234\353\220\234 \354\273\265\354\235\230 \352\260\220\354\247\200\352\260\200 \354\225\210\353\220\250", nullptr));
        label_4->setText(QCoreApplication::translate("DialogCupDispenser", "E4: \354\273\265 \353\260\260\354\266\234 \353\217\231\354\236\221 \354\213\234\352\260\204 \354\264\210\352\263\274 (\354\236\245\353\271\204 \352\263\240\354\236\245 \354\235\230\354\213\254)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogCupDispenser: public Ui_DialogCupDispenser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCUPDISPENSER_H
