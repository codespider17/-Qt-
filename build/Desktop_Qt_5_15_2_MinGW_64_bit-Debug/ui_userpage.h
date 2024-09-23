/********************************************************************************
** Form generated from reading UI file 'userpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERPAGE_H
#define UI_USERPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userPage
{
public:
    QLabel *label;
    QPushButton *tologinPage;
    QPushButton *buyticket;
    QPushButton *ticketinfo;
    QPushButton *balance;
    QPushButton *recharge;

    void setupUi(QWidget *userPage)
    {
        if (userPage->objectName().isEmpty())
            userPage->setObjectName(QString::fromUtf8("userPage"));
        userPage->resize(773, 475);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Qt-picture/CR73.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        userPage->setWindowIcon(icon);
        userPage->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 231, 231);"));
        label = new QLabel(userPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 10, 361, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font.setPointSize(28);
        font.setBold(false);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 28pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        tologinPage = new QPushButton(userPage);
        tologinPage->setObjectName(QString::fromUtf8("tologinPage"));
        tologinPage->setGeometry(QRect(670, 0, 101, 41));
        tologinPage->setStyleSheet(QString::fromUtf8("QPushButton:hover{border:1px solid #D0D1CF;}\n"
"QPushButton{  font: 12pt \"\345\215\216\346\226\207\350\241\214\346\245\267\"; background-color:#E9ECF2; border-radius:6;}"));
        buyticket = new QPushButton(userPage);
        buyticket->setObjectName(QString::fromUtf8("buyticket"));
        buyticket->setGeometry(QRect(10, 70, 330, 170));
        buyticket->setStyleSheet(QString::fromUtf8("QPushButton:hover{border:1px solid black;}\n"
"QPushButton{  font: 10pt \"\345\215\216\346\226\207\350\241\214\346\245\267\"; border-radius:6; background-color:#FAF8F9}\n"
""));
        ticketinfo = new QPushButton(userPage);
        ticketinfo->setObjectName(QString::fromUtf8("ticketinfo"));
        ticketinfo->setGeometry(QRect(420, 290, 330, 170));
        ticketinfo->setStyleSheet(QString::fromUtf8("QPushButton:hover{border:1px solid black;}\n"
"QPushButton{  font: 10pt \"\345\215\216\346\226\207\350\241\214\346\245\267\"; border-radius:6; background-color:#FAF8F9}\n"
""));
        balance = new QPushButton(userPage);
        balance->setObjectName(QString::fromUtf8("balance"));
        balance->setGeometry(QRect(10, 290, 330, 170));
        balance->setStyleSheet(QString::fromUtf8("QPushButton:hover{border:1px solid black;}\n"
"QPushButton{  font: 10pt \"\345\215\216\346\226\207\350\241\214\346\245\267\"; border-radius:6; background-color:#FAF8F9}"));
        recharge = new QPushButton(userPage);
        recharge->setObjectName(QString::fromUtf8("recharge"));
        recharge->setGeometry(QRect(420, 70, 325, 170));
        recharge->setStyleSheet(QString::fromUtf8("QPushButton:hover{border:1px solid black;}\n"
"QPushButton{  font: 10pt \"\345\215\216\346\226\207\350\241\214\346\245\267\"; border-radius:6; background-color:#FAF8F9}"));

        retranslateUi(userPage);

        QMetaObject::connectSlotsByName(userPage);
    } // setupUi

    void retranslateUi(QWidget *userPage)
    {
        userPage->setWindowTitle(QCoreApplication::translate("userPage", "\347\224\250\346\210\267\347\225\214\351\235\242", nullptr));
        label->setText(QCoreApplication::translate("userPage", "\346\254\242\350\277\216\346\235\245\345\210\260\347\224\250\346\210\267\347\225\214\351\235\242", nullptr));
        tologinPage->setText(QCoreApplication::translate("userPage", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        buyticket->setText(QCoreApplication::translate("userPage", "\350\264\255\347\245\250", nullptr));
        ticketinfo->setText(QCoreApplication::translate("userPage", "\350\256\242\350\264\255\344\277\241\346\201\257", nullptr));
        balance->setText(QCoreApplication::translate("userPage", "\346\237\245\350\257\242\344\275\231\351\242\235", nullptr));
        recharge->setText(QCoreApplication::translate("userPage", "\345\205\205\345\200\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userPage: public Ui_userPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERPAGE_H
