/********************************************************************************
** Form generated from reading UI file 'orderpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERPAGE_H
#define UI_ORDERPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrderPage
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *backTicket;
    QPushButton *toUserPage;

    void setupUi(QWidget *OrderPage)
    {
        if (OrderPage->objectName().isEmpty())
            OrderPage->setObjectName(QString::fromUtf8("OrderPage"));
        OrderPage->resize(712, 609);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Qt-picture/MB.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        OrderPage->setWindowIcon(icon);
        OrderPage->setStyleSheet(QString::fromUtf8("background-color: rgb(171, 206, 226);"));
        label = new QLabel(OrderPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 30, 261, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223"));
        font.setPointSize(30);
        font.setBold(false);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 30pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        tableWidget = new QTableWidget(OrderPage);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 110, 600, 500));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 234, 234);"));
        tableWidget->verticalHeader()->setVisible(false);
        backTicket = new QPushButton(OrderPage);
        backTicket->setObjectName(QString::fromUtf8("backTicket"));
        backTicket->setGeometry(QRect(600, 260, 111, 51));
        backTicket->setStyleSheet(QString::fromUtf8("QPushButton{  background-color:#B3E0E0; border:1px solid #B3E0E0;border-radius:6;font: 20pt \"\345\215\216\346\226\207\346\245\267\344\275\223\"; }\n"
"QPushButton:hover{  border:2px solid #E9FF27;}"));
        toUserPage = new QPushButton(OrderPage);
        toUserPage->setObjectName(QString::fromUtf8("toUserPage"));
        toUserPage->setGeometry(QRect(600, 360, 111, 51));
        toUserPage->setStyleSheet(QString::fromUtf8("QPushButton{  background-color:#B3E0E0; border:1px solid #B3E0E0;border-radius:6;font: 20pt \"\345\215\216\346\226\207\346\245\267\344\275\223\"; }\n"
"QPushButton:hover{  border:2px solid #E9FF27;}"));

        retranslateUi(OrderPage);

        QMetaObject::connectSlotsByName(OrderPage);
    } // setupUi

    void retranslateUi(QWidget *OrderPage)
    {
        OrderPage->setWindowTitle(QCoreApplication::translate("OrderPage", "\350\256\242\350\264\255\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("OrderPage", "\350\256\242\350\264\255\344\277\241\346\201\257\351\241\265\351\235\242", nullptr));
        backTicket->setText(QCoreApplication::translate("OrderPage", "\351\200\200\350\256\242", nullptr));
        toUserPage->setText(QCoreApplication::translate("OrderPage", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OrderPage: public Ui_OrderPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERPAGE_H
