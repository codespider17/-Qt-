/********************************************************************************
** Form generated from reading UI file 'adminpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINPAGE_H
#define UI_ADMINPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminPage
{
public:
    QLabel *label;
    QPushButton *tologinPage;
    QPushButton *saleBtn;
    QPushButton *delBtn;
    QTableWidget *tableWidget;
    QPushButton *cfmModify;
    QPushButton *refresh;

    void setupUi(QWidget *adminPage)
    {
        if (adminPage->objectName().isEmpty())
            adminPage->setObjectName(QString::fromUtf8("adminPage"));
        adminPage->resize(805, 602);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Qt-picture/WNXS.png"), QSize(), QIcon::Normal, QIcon::Off);
        adminPage->setWindowIcon(icon);
        adminPage->setStyleSheet(QString::fromUtf8("background-color: rgb(168, 237, 234);"));
        label = new QLabel(adminPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 20, 281, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        tologinPage = new QPushButton(adminPage);
        tologinPage->setObjectName(QString::fromUtf8("tologinPage"));
        tologinPage->setGeometry(QRect(700, 420, 91, 51));
        tologinPage->setStyleSheet(QString::fromUtf8("QPushButton{ border:1px solid #fef9d7; border-radius:6; font: 12pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";}\n"
"QPushButton:hover{border:3px solid #fef9d7;}"));
        saleBtn = new QPushButton(adminPage);
        saleBtn->setObjectName(QString::fromUtf8("saleBtn"));
        saleBtn->setGeometry(QRect(700, 100, 91, 51));
        saleBtn->setStyleSheet(QString::fromUtf8("QPushButton{ border:1px solid #fef9d7; border-radius:6;font: 12pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";  }\n"
"QPushButton:hover{border:3px solid #fef9d7;}"));
        delBtn = new QPushButton(adminPage);
        delBtn->setObjectName(QString::fromUtf8("delBtn"));
        delBtn->setGeometry(QRect(700, 260, 91, 51));
        delBtn->setStyleSheet(QString::fromUtf8("QPushButton{ border:1px solid #fef9d7; border-radius:6; font: 12pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";}\n"
"QPushButton:hover{border:3px solid #fef9d7;}"));
        tableWidget = new QTableWidget(adminPage);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 80, 691, 520));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(254, 214, 227);\n"
"\n"
""));
        tableWidget->verticalHeader()->setVisible(false);
        cfmModify = new QPushButton(adminPage);
        cfmModify->setObjectName(QString::fromUtf8("cfmModify"));
        cfmModify->setGeometry(QRect(700, 340, 91, 51));
        cfmModify->setStyleSheet(QString::fromUtf8("QPushButton{ border:1px solid #fef9d7; border-radius:6; font: 12pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";}\n"
"QPushButton:hover{border:3px solid #fef9d7;}"));
        refresh = new QPushButton(adminPage);
        refresh->setObjectName(QString::fromUtf8("refresh"));
        refresh->setGeometry(QRect(700, 180, 91, 51));
        refresh->setStyleSheet(QString::fromUtf8("QPushButton{ border:1px solid #fef9d7; border-radius:6; font: 12pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";}\n"
"QPushButton:hover{border:3px solid #fef9d7;}"));

        retranslateUi(adminPage);

        QMetaObject::connectSlotsByName(adminPage);
    } // setupUi

    void retranslateUi(QWidget *adminPage)
    {
        adminPage->setWindowTitle(QCoreApplication::translate("adminPage", "\347\256\241\347\220\206\345\221\230\347\225\214\351\235\242", nullptr));
        label->setText(QCoreApplication::translate("adminPage", "\346\254\242\350\277\216\346\235\245\345\210\260\347\256\241\347\220\206\345\221\230\347\225\214\351\235\242", nullptr));
        tologinPage->setText(QCoreApplication::translate("adminPage", "\351\200\200\345\207\272\347\263\273\347\273\237", nullptr));
        saleBtn->setText(QCoreApplication::translate("adminPage", "\345\217\221\350\241\214\351\242\204\350\264\255", nullptr));
        delBtn->setText(QCoreApplication::translate("adminPage", "\345\210\240\351\231\244\347\245\250", nullptr));
        cfmModify->setText(QCoreApplication::translate("adminPage", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        refresh->setText(QCoreApplication::translate("adminPage", "\345\210\267\346\226\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminPage: public Ui_adminPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPAGE_H
