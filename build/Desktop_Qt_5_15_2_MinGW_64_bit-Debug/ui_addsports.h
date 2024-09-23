/********************************************************************************
** Form generated from reading UI file 'addsports.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSPORTS_H
#define UI_ADDSPORTS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addSports
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QComboBox *sportsType;
    QLineEdit *gamename;
    QLineEdit *gameTime;
    QLineEdit *gamePlace;
    QLineEdit *gameHost;
    QSpinBox *ticketPrice;
    QSpinBox *ticketCount;
    QPushButton *okBtn;
    QPushButton *noBtn;
    QPushButton *clearBtn;
    QLabel *label_8;
    QLineEdit *gamenumber;

    void setupUi(QWidget *addSports)
    {
        if (addSports->objectName().isEmpty())
            addSports->setObjectName(QString::fromUtf8("addSports"));
        addSports->resize(424, 550);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Qt-picture/MDLQ.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        addSports->setWindowIcon(icon);
        addSports->setStyleSheet(QString::fromUtf8("background-color: rgb(172, 224, 249);"));
        label = new QLabel(addSports);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 90, 90, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223"));
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(addSports);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 150, 90, 30));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3 = new QLabel(addSports);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 220, 90, 30));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_4 = new QLabel(addSports);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 280, 90, 30));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_5 = new QLabel(addSports);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 340, 90, 30));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_6 = new QLabel(addSports);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 420, 90, 30));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_7 = new QLabel(addSports);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(200, 420, 90, 30));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);
        sportsType = new QComboBox(addSports);
        sportsType->addItem(QString());
        sportsType->addItem(QString());
        sportsType->addItem(QString());
        sportsType->addItem(QString());
        sportsType->addItem(QString());
        sportsType->addItem(QString());
        sportsType->setObjectName(QString::fromUtf8("sportsType"));
        sportsType->setGeometry(QRect(130, 90, 160, 30));
        sportsType->setStyleSheet(QString::fromUtf8("font: 10pt \"Stencil\";"));
        gamename = new QLineEdit(addSports);
        gamename->setObjectName(QString::fromUtf8("gamename"));
        gamename->setGeometry(QRect(130, 150, 240, 30));
        gamename->setStyleSheet(QString::fromUtf8("QLineEdit{ border-radius:6; border:1px solid white}"));
        gameTime = new QLineEdit(addSports);
        gameTime->setObjectName(QString::fromUtf8("gameTime"));
        gameTime->setGeometry(QRect(130, 220, 240, 30));
        gameTime->setStyleSheet(QString::fromUtf8("QLineEdit{ border-radius:6; border:1px solid white}"));
        gamePlace = new QLineEdit(addSports);
        gamePlace->setObjectName(QString::fromUtf8("gamePlace"));
        gamePlace->setGeometry(QRect(130, 280, 240, 30));
        gamePlace->setStyleSheet(QString::fromUtf8("QLineEdit{ border-radius:6; border:1px solid white}"));
        gameHost = new QLineEdit(addSports);
        gameHost->setObjectName(QString::fromUtf8("gameHost"));
        gameHost->setGeometry(QRect(130, 340, 240, 30));
        gameHost->setStyleSheet(QString::fromUtf8("QLineEdit{ border-radius:6; border:1px solid white}"));
        ticketPrice = new QSpinBox(addSports);
        ticketPrice->setObjectName(QString::fromUtf8("ticketPrice"));
        ticketPrice->setGeometry(QRect(100, 420, 90, 30));
        ticketPrice->setMaximum(10000);
        ticketCount = new QSpinBox(addSports);
        ticketCount->setObjectName(QString::fromUtf8("ticketCount"));
        ticketCount->setGeometry(QRect(290, 420, 90, 30));
        ticketCount->setMaximum(10000);
        okBtn = new QPushButton(addSports);
        okBtn->setObjectName(QString::fromUtf8("okBtn"));
        okBtn->setGeometry(QRect(30, 490, 90, 30));
        okBtn->setStyleSheet(QString::fromUtf8("QPushButton{ border:1px solid #fff1eb; border-radius:6; \n"
"background-color:#fff1eb; font: 16pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";}\n"
"QPushButton:hover{border:2px solid black;}"));
        noBtn = new QPushButton(addSports);
        noBtn->setObjectName(QString::fromUtf8("noBtn"));
        noBtn->setGeometry(QRect(300, 490, 90, 30));
        noBtn->setStyleSheet(QString::fromUtf8("QPushButton{ border:1px solid #fff1eb; border-radius:6; \n"
"background-color:#fff1eb; font: 16pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";}\n"
"QPushButton:hover{border:2px solid black;}"));
        clearBtn = new QPushButton(addSports);
        clearBtn->setObjectName(QString::fromUtf8("clearBtn"));
        clearBtn->setGeometry(QRect(170, 490, 90, 30));
        clearBtn->setStyleSheet(QString::fromUtf8("QPushButton{ border:1px solid #fff1eb; border-radius:6; \n"
"background-color:#fff1eb; font: 16pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";}\n"
"QPushButton:hover{border:2px solid black;}"));
        label_8 = new QLabel(addSports);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 40, 90, 30));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("\n"
"font: 16pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);
        gamenumber = new QLineEdit(addSports);
        gamenumber->setObjectName(QString::fromUtf8("gamenumber"));
        gamenumber->setGeometry(QRect(130, 40, 240, 30));
        gamenumber->setStyleSheet(QString::fromUtf8("QLineEdit{ border-radius:6; border:1px solid white}"));

        retranslateUi(addSports);

        QMetaObject::connectSlotsByName(addSports);
    } // setupUi

    void retranslateUi(QWidget *addSports)
    {
        addSports->setWindowTitle(QCoreApplication::translate("addSports", "\346\267\273\345\212\240\347\220\203\347\245\250", nullptr));
        label->setText(QCoreApplication::translate("addSports", "\346\257\224\350\265\233\347\261\273\345\236\213", nullptr));
        label_2->setText(QCoreApplication::translate("addSports", "\346\257\224\350\265\233\345\220\215\347\247\260", nullptr));
        label_3->setText(QCoreApplication::translate("addSports", "\346\257\224\350\265\233\346\227\266\351\227\264", nullptr));
        label_4->setText(QCoreApplication::translate("addSports", "\346\257\224\350\265\233\345\234\272\345\234\260", nullptr));
        label_5->setText(QCoreApplication::translate("addSports", "\346\257\224\350\265\233\344\270\273\345\234\272", nullptr));
        label_6->setText(QCoreApplication::translate("addSports", "\344\273\267\346\240\274", nullptr));
        label_7->setText(QCoreApplication::translate("addSports", "\347\245\250\346\225\260", nullptr));
        sportsType->setItemText(0, QCoreApplication::translate("addSports", "sport1", nullptr));
        sportsType->setItemText(1, QCoreApplication::translate("addSports", "sport2", nullptr));
        sportsType->setItemText(2, QCoreApplication::translate("addSports", "sport3", nullptr));
        sportsType->setItemText(3, QCoreApplication::translate("addSports", "sport4", nullptr));
        sportsType->setItemText(4, QCoreApplication::translate("addSports", "sport5", nullptr));
        sportsType->setItemText(5, QCoreApplication::translate("addSports", "sport6", nullptr));

        okBtn->setText(QCoreApplication::translate("addSports", "\347\241\256\345\256\232", nullptr));
        noBtn->setText(QCoreApplication::translate("addSports", "\345\217\226\346\266\210", nullptr));
        clearBtn->setText(QCoreApplication::translate("addSports", "\346\270\205\347\251\272", nullptr));
        label_8->setText(QCoreApplication::translate("addSports", "\346\257\224\350\265\233\347\274\226\345\217\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addSports: public Ui_addSports {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSPORTS_H
