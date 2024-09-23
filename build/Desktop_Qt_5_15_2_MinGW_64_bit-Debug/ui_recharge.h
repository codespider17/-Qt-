/********************************************************************************
** Form generated from reading UI file 'recharge.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECHARGE_H
#define UI_RECHARGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReCharge
{
public:
    QLabel *label;
    QPushButton *chargepicture;
    QPushButton *toLoginPage;
    QSpinBox *chargeBox;
    QLabel *label_2;
    QPushButton *confirmBtn;

    void setupUi(QWidget *ReCharge)
    {
        if (ReCharge->objectName().isEmpty())
            ReCharge->setObjectName(QString::fromUtf8("ReCharge"));
        ReCharge->resize(465, 424);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Qt-picture/KEN.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        ReCharge->setWindowIcon(icon);
        ReCharge->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 185, 11);"));
        label = new QLabel(ReCharge);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 20, 211, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font.setPointSize(25);
        font.setBold(false);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 25pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        chargepicture = new QPushButton(ReCharge);
        chargepicture->setObjectName(QString::fromUtf8("chargepicture"));
        chargepicture->setGeometry(QRect(10, 90, 251, 321));
        chargepicture->setStyleSheet(QString::fromUtf8("QPushButton{ border:none;}"));
        toLoginPage = new QPushButton(ReCharge);
        toLoginPage->setObjectName(QString::fromUtf8("toLoginPage"));
        toLoginPage->setGeometry(QRect(360, 360, 91, 41));
        toLoginPage->setStyleSheet(QString::fromUtf8("QPushButton{  background-color:#EEE9DC; border:1px solid #EEE9DC;border-radius:6;font: 20pt \"\345\215\216\346\226\207\346\245\267\344\275\223\"; }\n"
"QPushButton:hover{  border:2px solid #CDB670;}"));
        chargeBox = new QSpinBox(ReCharge);
        chargeBox->setObjectName(QString::fromUtf8("chargeBox"));
        chargeBox->setGeometry(QRect(280, 200, 81, 31));
        chargeBox->setStyleSheet(QString::fromUtf8("QSpinBox{border:1px solid #EEE9DC; background-color:#EEE9DC;}"));
        chargeBox->setMaximum(10000);
        label_2 = new QLabel(ReCharge);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(270, 160, 101, 41));
        QFont font1;
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        confirmBtn = new QPushButton(ReCharge);
        confirmBtn->setObjectName(QString::fromUtf8("confirmBtn"));
        confirmBtn->setGeometry(QRect(370, 200, 81, 31));
        confirmBtn->setStyleSheet(QString::fromUtf8("QPushButton{  background-color:#EEE9DC; border:1px solid #EEE9DC;border-radius:6;font: 20pt \"\345\215\216\346\226\207\346\245\267\344\275\223\"; }\n"
"QPushButton:hover{  border:2px solid #CDB670;}"));

        retranslateUi(ReCharge);

        QMetaObject::connectSlotsByName(ReCharge);
    } // setupUi

    void retranslateUi(QWidget *ReCharge)
    {
        ReCharge->setWindowTitle(QCoreApplication::translate("ReCharge", "\345\205\205\345\200\274\347\225\214\351\235\242", nullptr));
        label->setText(QCoreApplication::translate("ReCharge", "\345\205\205\345\200\274\347\225\214\351\235\242", nullptr));
        chargepicture->setText(QString());
        toLoginPage->setText(QCoreApplication::translate("ReCharge", "\350\277\224\345\233\236", nullptr));
        label_2->setText(QCoreApplication::translate("ReCharge", "\345\205\205\345\200\274\351\207\221\351\242\235", nullptr));
        confirmBtn->setText(QCoreApplication::translate("ReCharge", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReCharge: public Ui_ReCharge {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECHARGE_H
