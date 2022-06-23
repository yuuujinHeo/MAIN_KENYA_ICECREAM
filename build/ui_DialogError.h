/********************************************************************************
** Form generated from reading UI file 'DialogError.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGERROR_H
#define UI_DIALOGERROR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogError
{
public:
    QLabel *label;
    QListWidget *LW_ERROR;
    QPushButton *BTN_ERROR_CLEAR_OUTLET_1;
    QLineEdit *LE_DEVICE_ERROR_COFFEE;
    QLineEdit *LE_DEVICE_ERROR_OUTLET_2;
    QLabel *label_163;
    QLineEdit *LE_DEVICE_ERROR_PAPER_CUP_1;
    QLineEdit *LE_DEVICE_ERROR_ICE_1;
    QPushButton *BTN_ERROR_CLEAR_COFFEE;
    QPushButton *BTN_ERROR_CLEAR_ICE_1;
    QPushButton *BTN_ERROR_CLEAR_ROBOT_3;
    QLabel *label_153;
    QLabel *label_161;
    QPushButton *BTN_ERROR_CLEAR_OUTLET_2;
    QPushButton *BTN_ERROR_CLEAR_PAPER_CUP_2;
    QLabel *label_152;
    QLabel *label_149;
    QLineEdit *LE_DEVICE_ERROR_OUTLET_1;
    QLabel *label_150;
    QLineEdit *LE_DEVICE_ERROR_ROBOT_1;
    QLineEdit *LE_DEVICE_ERROR_PAPER_CUP_2;
    QPushButton *BTN_ERROR_CLEAR_PAPER_CUP_1;
    QLabel *label_159;
    QPushButton *BTN_ERROR_CLEAR_SLUSH;
    QPushButton *BTN_ERROR_CLEAR_ICECREAM;
    QLineEdit *LE_DEVICE_ERROR_SLUSH;
    QLabel *label_156;
    QLineEdit *LE_DEVICE_ERROR_ICECREAM;
    QLabel *label_157;

    void setupUi(QDialog *DialogError)
    {
        if (DialogError->objectName().isEmpty())
            DialogError->setObjectName(QString::fromUtf8("DialogError"));
        DialogError->resize(560, 441);
        DialogError->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}\n"
"QPushButton {\n"
"	border:2px solid #595959;\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\"; \n"
"}\n"
"QLineEdit {\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}\n"
"QListWidget {\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}"));
        label = new QLabel(DialogError);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 121, 31));
        LW_ERROR = new QListWidget(DialogError);
        LW_ERROR->setObjectName(QString::fromUtf8("LW_ERROR"));
        LW_ERROR->setGeometry(QRect(30, 70, 261, 301));
        BTN_ERROR_CLEAR_OUTLET_1 = new QPushButton(DialogError);
        BTN_ERROR_CLEAR_OUTLET_1->setObjectName(QString::fromUtf8("BTN_ERROR_CLEAR_OUTLET_1"));
        BTN_ERROR_CLEAR_OUTLET_1->setGeometry(QRect(450, 170, 89, 21));
        LE_DEVICE_ERROR_COFFEE = new QLineEdit(DialogError);
        LE_DEVICE_ERROR_COFFEE->setObjectName(QString::fromUtf8("LE_DEVICE_ERROR_COFFEE"));
        LE_DEVICE_ERROR_COFFEE->setGeometry(QRect(390, 260, 51, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        LE_DEVICE_ERROR_COFFEE->setFont(font);
        LE_DEVICE_ERROR_COFFEE->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LE_DEVICE_ERROR_COFFEE->setReadOnly(true);
        LE_DEVICE_ERROR_OUTLET_2 = new QLineEdit(DialogError);
        LE_DEVICE_ERROR_OUTLET_2->setObjectName(QString::fromUtf8("LE_DEVICE_ERROR_OUTLET_2"));
        LE_DEVICE_ERROR_OUTLET_2->setGeometry(QRect(390, 200, 51, 21));
        LE_DEVICE_ERROR_OUTLET_2->setFont(font);
        LE_DEVICE_ERROR_OUTLET_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LE_DEVICE_ERROR_OUTLET_2->setReadOnly(true);
        label_163 = new QLabel(DialogError);
        label_163->setObjectName(QString::fromUtf8("label_163"));
        label_163->setGeometry(QRect(310, 200, 71, 21));
        label_163->setFont(font);
        label_163->setAlignment(Qt::AlignCenter);
        LE_DEVICE_ERROR_PAPER_CUP_1 = new QLineEdit(DialogError);
        LE_DEVICE_ERROR_PAPER_CUP_1->setObjectName(QString::fromUtf8("LE_DEVICE_ERROR_PAPER_CUP_1"));
        LE_DEVICE_ERROR_PAPER_CUP_1->setGeometry(QRect(390, 110, 51, 21));
        LE_DEVICE_ERROR_PAPER_CUP_1->setFont(font);
        LE_DEVICE_ERROR_PAPER_CUP_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LE_DEVICE_ERROR_PAPER_CUP_1->setReadOnly(true);
        LE_DEVICE_ERROR_ICE_1 = new QLineEdit(DialogError);
        LE_DEVICE_ERROR_ICE_1->setObjectName(QString::fromUtf8("LE_DEVICE_ERROR_ICE_1"));
        LE_DEVICE_ERROR_ICE_1->setGeometry(QRect(390, 290, 51, 21));
        LE_DEVICE_ERROR_ICE_1->setFont(font);
        LE_DEVICE_ERROR_ICE_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LE_DEVICE_ERROR_ICE_1->setReadOnly(true);
        BTN_ERROR_CLEAR_COFFEE = new QPushButton(DialogError);
        BTN_ERROR_CLEAR_COFFEE->setObjectName(QString::fromUtf8("BTN_ERROR_CLEAR_COFFEE"));
        BTN_ERROR_CLEAR_COFFEE->setGeometry(QRect(450, 260, 89, 21));
        BTN_ERROR_CLEAR_ICE_1 = new QPushButton(DialogError);
        BTN_ERROR_CLEAR_ICE_1->setObjectName(QString::fromUtf8("BTN_ERROR_CLEAR_ICE_1"));
        BTN_ERROR_CLEAR_ICE_1->setGeometry(QRect(450, 290, 89, 21));
        BTN_ERROR_CLEAR_ROBOT_3 = new QPushButton(DialogError);
        BTN_ERROR_CLEAR_ROBOT_3->setObjectName(QString::fromUtf8("BTN_ERROR_CLEAR_ROBOT_3"));
        BTN_ERROR_CLEAR_ROBOT_3->setGeometry(QRect(450, 230, 89, 21));
        label_153 = new QLabel(DialogError);
        label_153->setObjectName(QString::fromUtf8("label_153"));
        label_153->setGeometry(QRect(310, 110, 71, 21));
        label_153->setFont(font);
        label_153->setAlignment(Qt::AlignCenter);
        label_161 = new QLabel(DialogError);
        label_161->setObjectName(QString::fromUtf8("label_161"));
        label_161->setGeometry(QRect(310, 230, 71, 21));
        label_161->setFont(font);
        label_161->setAlignment(Qt::AlignCenter);
        BTN_ERROR_CLEAR_OUTLET_2 = new QPushButton(DialogError);
        BTN_ERROR_CLEAR_OUTLET_2->setObjectName(QString::fromUtf8("BTN_ERROR_CLEAR_OUTLET_2"));
        BTN_ERROR_CLEAR_OUTLET_2->setGeometry(QRect(450, 200, 89, 21));
        BTN_ERROR_CLEAR_PAPER_CUP_2 = new QPushButton(DialogError);
        BTN_ERROR_CLEAR_PAPER_CUP_2->setObjectName(QString::fromUtf8("BTN_ERROR_CLEAR_PAPER_CUP_2"));
        BTN_ERROR_CLEAR_PAPER_CUP_2->setGeometry(QRect(450, 140, 89, 21));
        label_152 = new QLabel(DialogError);
        label_152->setObjectName(QString::fromUtf8("label_152"));
        label_152->setGeometry(QRect(310, 140, 71, 21));
        label_152->setFont(font);
        label_152->setAlignment(Qt::AlignCenter);
        label_149 = new QLabel(DialogError);
        label_149->setObjectName(QString::fromUtf8("label_149"));
        label_149->setGeometry(QRect(310, 260, 71, 21));
        label_149->setFont(font);
        label_149->setAlignment(Qt::AlignCenter);
        LE_DEVICE_ERROR_OUTLET_1 = new QLineEdit(DialogError);
        LE_DEVICE_ERROR_OUTLET_1->setObjectName(QString::fromUtf8("LE_DEVICE_ERROR_OUTLET_1"));
        LE_DEVICE_ERROR_OUTLET_1->setGeometry(QRect(390, 170, 51, 21));
        LE_DEVICE_ERROR_OUTLET_1->setFont(font);
        LE_DEVICE_ERROR_OUTLET_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LE_DEVICE_ERROR_OUTLET_1->setReadOnly(true);
        label_150 = new QLabel(DialogError);
        label_150->setObjectName(QString::fromUtf8("label_150"));
        label_150->setGeometry(QRect(310, 290, 71, 21));
        label_150->setFont(font);
        label_150->setAlignment(Qt::AlignCenter);
        LE_DEVICE_ERROR_ROBOT_1 = new QLineEdit(DialogError);
        LE_DEVICE_ERROR_ROBOT_1->setObjectName(QString::fromUtf8("LE_DEVICE_ERROR_ROBOT_1"));
        LE_DEVICE_ERROR_ROBOT_1->setGeometry(QRect(390, 230, 51, 21));
        LE_DEVICE_ERROR_ROBOT_1->setFont(font);
        LE_DEVICE_ERROR_ROBOT_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LE_DEVICE_ERROR_ROBOT_1->setReadOnly(true);
        LE_DEVICE_ERROR_PAPER_CUP_2 = new QLineEdit(DialogError);
        LE_DEVICE_ERROR_PAPER_CUP_2->setObjectName(QString::fromUtf8("LE_DEVICE_ERROR_PAPER_CUP_2"));
        LE_DEVICE_ERROR_PAPER_CUP_2->setGeometry(QRect(390, 140, 51, 21));
        LE_DEVICE_ERROR_PAPER_CUP_2->setFont(font);
        LE_DEVICE_ERROR_PAPER_CUP_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LE_DEVICE_ERROR_PAPER_CUP_2->setReadOnly(true);
        BTN_ERROR_CLEAR_PAPER_CUP_1 = new QPushButton(DialogError);
        BTN_ERROR_CLEAR_PAPER_CUP_1->setObjectName(QString::fromUtf8("BTN_ERROR_CLEAR_PAPER_CUP_1"));
        BTN_ERROR_CLEAR_PAPER_CUP_1->setGeometry(QRect(450, 110, 89, 21));
        label_159 = new QLabel(DialogError);
        label_159->setObjectName(QString::fromUtf8("label_159"));
        label_159->setGeometry(QRect(310, 170, 71, 21));
        label_159->setFont(font);
        label_159->setAlignment(Qt::AlignCenter);
        BTN_ERROR_CLEAR_SLUSH = new QPushButton(DialogError);
        BTN_ERROR_CLEAR_SLUSH->setObjectName(QString::fromUtf8("BTN_ERROR_CLEAR_SLUSH"));
        BTN_ERROR_CLEAR_SLUSH->setGeometry(QRect(450, 320, 89, 21));
        BTN_ERROR_CLEAR_ICECREAM = new QPushButton(DialogError);
        BTN_ERROR_CLEAR_ICECREAM->setObjectName(QString::fromUtf8("BTN_ERROR_CLEAR_ICECREAM"));
        BTN_ERROR_CLEAR_ICECREAM->setGeometry(QRect(450, 350, 89, 21));
        LE_DEVICE_ERROR_SLUSH = new QLineEdit(DialogError);
        LE_DEVICE_ERROR_SLUSH->setObjectName(QString::fromUtf8("LE_DEVICE_ERROR_SLUSH"));
        LE_DEVICE_ERROR_SLUSH->setGeometry(QRect(390, 320, 51, 21));
        LE_DEVICE_ERROR_SLUSH->setFont(font);
        LE_DEVICE_ERROR_SLUSH->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LE_DEVICE_ERROR_SLUSH->setReadOnly(true);
        label_156 = new QLabel(DialogError);
        label_156->setObjectName(QString::fromUtf8("label_156"));
        label_156->setGeometry(QRect(310, 320, 71, 21));
        label_156->setFont(font);
        label_156->setAlignment(Qt::AlignCenter);
        LE_DEVICE_ERROR_ICECREAM = new QLineEdit(DialogError);
        LE_DEVICE_ERROR_ICECREAM->setObjectName(QString::fromUtf8("LE_DEVICE_ERROR_ICECREAM"));
        LE_DEVICE_ERROR_ICECREAM->setGeometry(QRect(390, 350, 51, 21));
        LE_DEVICE_ERROR_ICECREAM->setFont(font);
        LE_DEVICE_ERROR_ICECREAM->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LE_DEVICE_ERROR_ICECREAM->setReadOnly(true);
        label_157 = new QLabel(DialogError);
        label_157->setObjectName(QString::fromUtf8("label_157"));
        label_157->setGeometry(QRect(310, 350, 71, 21));
        label_157->setFont(font);
        label_157->setAlignment(Qt::AlignCenter);

        retranslateUi(DialogError);

        QMetaObject::connectSlotsByName(DialogError);
    } // setupUi

    void retranslateUi(QDialog *DialogError)
    {
        DialogError->setWindowTitle(QCoreApplication::translate("DialogError", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogError", "\353\260\234\354\203\235\355\225\234 \354\227\220\353\237\254 \353\252\251\353\241\235", nullptr));
        BTN_ERROR_CLEAR_OUTLET_1->setText(QCoreApplication::translate("DialogError", "\354\227\220\353\237\254 \355\201\264\353\246\254\354\226\264", nullptr));
        LE_DEVICE_ERROR_COFFEE->setText(QString());
        LE_DEVICE_ERROR_OUTLET_2->setText(QString());
        label_163->setText(QCoreApplication::translate("DialogError", "\353\260\260\354\266\234\352\265\2542", nullptr));
        LE_DEVICE_ERROR_PAPER_CUP_1->setText(QString());
        LE_DEVICE_ERROR_ICE_1->setText(QString());
        BTN_ERROR_CLEAR_COFFEE->setText(QCoreApplication::translate("DialogError", "\354\227\220\353\237\254 \355\201\264\353\246\254\354\226\264", nullptr));
        BTN_ERROR_CLEAR_ICE_1->setText(QCoreApplication::translate("DialogError", "\354\227\220\353\237\254 \355\201\264\353\246\254\354\226\264", nullptr));
        BTN_ERROR_CLEAR_ROBOT_3->setText(QCoreApplication::translate("DialogError", "\354\227\220\353\237\254 \355\201\264\353\246\254\354\226\264", nullptr));
        label_153->setText(QCoreApplication::translate("DialogError", "\354\242\205\354\235\264\354\273\2651", nullptr));
        label_161->setText(QCoreApplication::translate("DialogError", "\353\241\234\353\264\207", nullptr));
        BTN_ERROR_CLEAR_OUTLET_2->setText(QCoreApplication::translate("DialogError", "\354\227\220\353\237\254 \355\201\264\353\246\254\354\226\264", nullptr));
        BTN_ERROR_CLEAR_PAPER_CUP_2->setText(QCoreApplication::translate("DialogError", "\354\227\220\353\237\254 \355\201\264\353\246\254\354\226\264", nullptr));
        label_152->setText(QCoreApplication::translate("DialogError", "\354\242\205\354\235\264\354\273\2652", nullptr));
        label_149->setText(QCoreApplication::translate("DialogError", "\354\273\244\355\224\274\353\250\270\354\213\240", nullptr));
        LE_DEVICE_ERROR_OUTLET_1->setText(QString());
        label_150->setText(QCoreApplication::translate("DialogError", "\354\240\234\353\271\231\352\270\2601", nullptr));
        LE_DEVICE_ERROR_ROBOT_1->setText(QString());
        LE_DEVICE_ERROR_PAPER_CUP_2->setText(QString());
        BTN_ERROR_CLEAR_PAPER_CUP_1->setText(QCoreApplication::translate("DialogError", "\354\227\220\353\237\254 \355\201\264\353\246\254\354\226\264", nullptr));
        label_159->setText(QCoreApplication::translate("DialogError", "\353\260\260\354\266\234\352\265\2541", nullptr));
        BTN_ERROR_CLEAR_SLUSH->setText(QCoreApplication::translate("DialogError", "\354\227\220\353\237\254 \355\201\264\353\246\254\354\226\264", nullptr));
        BTN_ERROR_CLEAR_ICECREAM->setText(QCoreApplication::translate("DialogError", "\354\227\220\353\237\254 \355\201\264\353\246\254\354\226\264", nullptr));
        LE_DEVICE_ERROR_SLUSH->setText(QString());
        label_156->setText(QCoreApplication::translate("DialogError", "\354\212\254\353\237\254\354\213\234", nullptr));
        LE_DEVICE_ERROR_ICECREAM->setText(QString());
        label_157->setText(QCoreApplication::translate("DialogError", "\354\225\204\354\235\264\354\212\244\355\201\254\353\246\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogError: public Ui_DialogError {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGERROR_H
