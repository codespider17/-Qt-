/********************************************************************************
** Form generated from reading UI file 'buyticketpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUYTICKETPAGE_H
#define UI_BUYTICKETPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BuyTicketPage
{
public:
    QLabel *label;
    QPushButton *toUserPage;
    QTableWidget *tableWidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *zhongchao;
    QSpacerItem *verticalSpacer_7;
    QPushButton *yijia;
    QPushButton *fajia;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QPushButton *xijia;
    QSpacerItem *verticalSpacer_6;
    QPushButton *yingchao;
    QSpacerItem *verticalSpacer_5;
    QPushButton *dejia;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QPushButton *payticket;

    void setupUi(QWidget *BuyTicketPage)
    {
        if (BuyTicketPage->objectName().isEmpty())
            BuyTicketPage->setObjectName(QString::fromUtf8("BuyTicketPage"));
        BuyTicketPage->resize(806, 597);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Qt-picture/SLH.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        BuyTicketPage->setWindowIcon(icon);
        BuyTicketPage->setStyleSheet(QString::fromUtf8("background-color: rgb(189, 60, 98);"));
        label = new QLabel(BuyTicketPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 20, 401, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223"));
        font.setPointSize(30);
        font.setBold(false);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 30pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        toUserPage = new QPushButton(BuyTicketPage);
        toUserPage->setObjectName(QString::fromUtf8("toUserPage"));
        toUserPage->setGeometry(QRect(730, 0, 81, 41));
        toUserPage->setStyleSheet(QString::fromUtf8("QPushButton{ border:1px solid #FF867A; background-color:#F87992 ; border-radius:6; font: 14pt \"\346\245\267\344\275\223\";}\n"
"QPushButton:hover{ border:2px solid #F8C76E;}"));
        tableWidget = new QTableWidget(BuyTicketPage);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(110, 100, 600, 500));
        tableWidget->setMinimumSize(QSize(600, 500));
        tableWidget->setMaximumSize(QSize(11111111, 11111111));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 134, 122);"));
        tableWidget->horizontalHeader()->setVisible(true);
        tableWidget->horizontalHeader()->setStretchLastSection(false);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->verticalHeader()->setStretchLastSection(false);
        widget = new QWidget(BuyTicketPage);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 100, 102, 501));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        zhongchao = new QPushButton(widget);
        zhongchao->setObjectName(QString::fromUtf8("zhongchao"));
        zhongchao->setMinimumSize(QSize(90, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        zhongchao->setFont(font1);
        zhongchao->setStyleSheet(QString::fromUtf8("QPushButton{ border:1px solid #FF867A; background-color:#F87992 ; border-radius:6; font: 14pt \"\346\245\267\344\275\223\";}\n"
"QPushButton:hover{ border:2px solid #F8C76E;}"));

        gridLayout->addWidget(zhongchao, 5, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer_7, 12, 0, 1, 1);

        yijia = new QPushButton(widget);
        yijia->setObjectName(QString::fromUtf8("yijia"));
        yijia->setMinimumSize(QSize(90, 40));
        yijia->setFont(font1);
        yijia->setStyleSheet(QString::fromUtf8("QPushButton{ border:1px solid #FF867A; background-color:#F87992 ; border-radius:6; font: 14pt \"\346\245\267\344\275\223\";}\n"
"QPushButton:hover{ border:2px solid #F8C76E;}"));

        gridLayout->addWidget(yijia, 11, 0, 1, 1);

        fajia = new QPushButton(widget);
        fajia->setObjectName(QString::fromUtf8("fajia"));
        fajia->setMinimumSize(QSize(90, 40));
        fajia->setFont(font1);
        fajia->setStyleSheet(QString::fromUtf8("QPushButton{ border:1px solid #FF867A; background-color:#F87992 ; border-radius:6; font: 14pt \"\346\245\267\344\275\223\";}\n"
"QPushButton:hover{ border:2px solid #F8C76E;}"));

        gridLayout->addWidget(fajia, 9, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 26, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer_3, 4, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 24, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer_4, 6, 0, 1, 1);

        xijia = new QPushButton(widget);
        xijia->setObjectName(QString::fromUtf8("xijia"));
        xijia->setMinimumSize(QSize(90, 40));
        xijia->setMaximumSize(QSize(90, 40));
        xijia->setFont(font1);
        xijia->setStyleSheet(QString::fromUtf8("QPushButton{ border:1px solid #FF867A; background-color:#F87992 ; border-radius:6; font: 14pt \"\346\245\267\344\275\223\";}\n"
"QPushButton:hover{ border:2px solid #F8C76E;}"));

        gridLayout->addWidget(xijia, 3, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 26, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer_6, 10, 0, 1, 1);

        yingchao = new QPushButton(widget);
        yingchao->setObjectName(QString::fromUtf8("yingchao"));
        yingchao->setEnabled(true);
        yingchao->setMinimumSize(QSize(90, 40));
        yingchao->setMaximumSize(QSize(90, 40));
        yingchao->setFont(font1);
        yingchao->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{ border:1px solid #FF867A; background-color:#F87992 ; border-radius:6; font: 14pt \"\346\245\267\344\275\223\";}\n"
"QPushButton:hover{ border:2px solid #F8C76E;}"));

        gridLayout->addWidget(yingchao, 1, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer_5, 8, 0, 1, 1);

        dejia = new QPushButton(widget);
        dejia->setObjectName(QString::fromUtf8("dejia"));
        dejia->setMinimumSize(QSize(90, 40));
        dejia->setFont(font1);
        dejia->setStyleSheet(QString::fromUtf8("QPushButton{ border:1px solid #FF867A; background-color:#F87992 ; border-radius:6; font: 14pt \"\346\245\267\344\275\223\";}\n"
"QPushButton:hover{ border:2px solid #F8C76E;}"));

        gridLayout->addWidget(dejia, 7, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer_2, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer, 0, 0, 1, 1);

        payticket = new QPushButton(BuyTicketPage);
        payticket->setObjectName(QString::fromUtf8("payticket"));
        payticket->setGeometry(QRect(710, 100, 90, 40));
        payticket->setMinimumSize(QSize(90, 40));
        payticket->setStyleSheet(QString::fromUtf8("QPushButton{ border:1px solid #FF867A; background-color:#F87992 ; border-radius:6; font: 14pt \"\346\245\267\344\275\223\";}\n"
"QPushButton:hover{ border:2px solid #F8C76E;}"));

        retranslateUi(BuyTicketPage);

        QMetaObject::connectSlotsByName(BuyTicketPage);
    } // setupUi

    void retranslateUi(QWidget *BuyTicketPage)
    {
        BuyTicketPage->setWindowTitle(QCoreApplication::translate("BuyTicketPage", "\350\264\255\347\245\250\347\225\214\351\235\242", nullptr));
        label->setText(QCoreApplication::translate("BuyTicketPage", "\346\254\242\350\277\216\346\235\245\345\210\260\350\264\255\347\245\250\347\225\214\351\235\242", nullptr));
        toUserPage->setText(QCoreApplication::translate("BuyTicketPage", "\350\277\224\345\233\236", nullptr));
        zhongchao->setText(QCoreApplication::translate("BuyTicketPage", "\344\270\255\350\266\205", nullptr));
        yijia->setText(QCoreApplication::translate("BuyTicketPage", "\346\204\217\347\224\262", nullptr));
        fajia->setText(QCoreApplication::translate("BuyTicketPage", "\346\263\225\347\224\262", nullptr));
        xijia->setText(QCoreApplication::translate("BuyTicketPage", "\350\245\277\347\224\262", nullptr));
        yingchao->setText(QCoreApplication::translate("BuyTicketPage", "\350\213\261\350\266\205", nullptr));
        dejia->setText(QCoreApplication::translate("BuyTicketPage", "\345\276\267\347\224\262", nullptr));
        payticket->setText(QCoreApplication::translate("BuyTicketPage", "\347\202\271\345\207\273\350\264\255\347\245\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BuyTicketPage: public Ui_BuyTicketPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUYTICKETPAGE_H
