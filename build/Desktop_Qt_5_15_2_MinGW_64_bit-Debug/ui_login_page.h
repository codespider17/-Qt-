/********************************************************************************
** Form generated from reading UI file 'login_page.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_PAGE_H
#define UI_LOGIN_PAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login_page
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QGridLayout *gridLayout;
    QFrame *frame_2;
    QLineEdit *userBtn;
    QLabel *label2;
    QFrame *frame_3;
    QLineEdit *passwordBtn;
    QLabel *label3;
    QFrame *frame_5;
    QPushButton *clearBtn;
    QPushButton *loginBtn;
    QPushButton *signupBtn;
    QPushButton *exitBtn;
    QLabel *label1;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QLabel *label4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login_page)
    {
        if (Login_page->objectName().isEmpty())
            Login_page->setObjectName(QString::fromUtf8("Login_page"));
        Login_page->resize(571, 450);
        Login_page->setMinimumSize(QSize(495, 450));
        Login_page->setMaximumSize(QSize(571, 450));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Qt-picture/UEFA.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Login_page->setWindowIcon(icon);
        Login_page->setStyleSheet(QString::fromUtf8("background-color: rgb(70, 186, 197);"));
        centralwidget = new QWidget(Login_page);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(6, 6, 287, 66));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 90, 531, 72));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        userBtn = new QLineEdit(frame_2);
        userBtn->setObjectName(QString::fromUtf8("userBtn"));
        userBtn->setGeometry(QRect(169, 20, 301, 30));
        userBtn->setMinimumSize(QSize(90, 30));
        userBtn->setStyleSheet(QString::fromUtf8("QLineEdit{ border-radius: 6px;\n"
"border:1px solid white; }"));
        label2 = new QLabel(frame_2);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(50, 20, 111, 30));
        label2->setMinimumSize(QSize(0, 30));
        QFont font;
        font.setPointSize(14);
        label2->setFont(font);
        label2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(60, 170, 451, 71));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        passwordBtn = new QLineEdit(frame_3);
        passwordBtn->setObjectName(QString::fromUtf8("passwordBtn"));
        passwordBtn->setGeometry(QRect(110, 20, 300, 30));
        passwordBtn->setMinimumSize(QSize(90, 30));
        passwordBtn->setStyleSheet(QString::fromUtf8("QLineEdit{ border-radius: 6;\n"
"border:1px solid black; }"));
        passwordBtn->setEchoMode(QLineEdit::EchoMode::Password);
        label3 = new QLabel(frame_3);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setGeometry(QRect(7, 20, 91, 30));
        label3->setMinimumSize(QSize(0, 30));
        label3->setFont(font);
        label3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        frame_5 = new QFrame(centralwidget);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(30, 320, 531, 61));
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        clearBtn = new QPushButton(frame_5);
        clearBtn->setObjectName(QString::fromUtf8("clearBtn"));
        clearBtn->setGeometry(QRect(40, 10, 80, 40));
        clearBtn->setMinimumSize(QSize(60, 40));
        clearBtn->setStyleSheet(QString::fromUtf8("QPushButton{border-radius: 6;border:1px solid white;}\n"
"QPushButton:hover{border:2px solid black;}"));
        loginBtn = new QPushButton(frame_5);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));
        loginBtn->setGeometry(QRect(160, 10, 80, 40));
        loginBtn->setMinimumSize(QSize(80, 40));
        loginBtn->setStyleSheet(QString::fromUtf8("QPushButton{border-radius: 6;\n"
"border:1px solid white;}\n"
"QPushButton:hover{border:2px solid black;}"));
        signupBtn = new QPushButton(frame_5);
        signupBtn->setObjectName(QString::fromUtf8("signupBtn"));
        signupBtn->setGeometry(QRect(280, 10, 80, 40));
        signupBtn->setMinimumSize(QSize(80, 40));
        signupBtn->setStyleSheet(QString::fromUtf8("QPushButton{border-radius: 6;\n"
"border:1px solid white;}\n"
"QPushButton:hover{border:2px solid black;}"));
        exitBtn = new QPushButton(frame_5);
        exitBtn->setObjectName(QString::fromUtf8("exitBtn"));
        exitBtn->setGeometry(QRect(400, 10, 80, 40));
        exitBtn->setMinimumSize(QSize(80, 40));
        exitBtn->setStyleSheet(QString::fromUtf8("QPushButton{border-radius: 6;\n"
"border:1px solid white;}\n"
"QPushButton:hover{border:2px solid black;}"));
        label1 = new QLabel(centralwidget);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(160, 10, 273, 52));
        QFont font1;
        font1.setPointSize(18);
        label1->setFont(font1);
        label1->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label1->setStyleSheet(QString::fromUtf8(""));
        label1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label1->setMargin(0);
        radioButton_2 = new QRadioButton(centralwidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(270, 260, 101, 31));
        radioButton_2->setMinimumSize(QSize(0, 30));
        QFont font2;
        font2.setPointSize(12);
        radioButton_2->setFont(font2);
        radioButton_2->setCheckable(true);
        radioButton_2->setChecked(false);
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(170, 260, 91, 31));
        radioButton->setMinimumSize(QSize(0, 30));
        radioButton->setFont(font2);
        label4 = new QLabel(centralwidget);
        label4->setObjectName(QString::fromUtf8("label4"));
        label4->setGeometry(QRect(80, 260, 61, 30));
        label4->setMinimumSize(QSize(0, 30));
        label4->setFont(font2);
        label4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Login_page->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Login_page);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 571, 18));
        Login_page->setMenuBar(menubar);
        statusbar = new QStatusBar(Login_page);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Login_page->setStatusBar(statusbar);

        retranslateUi(Login_page);

        QMetaObject::connectSlotsByName(Login_page);
    } // setupUi

    void retranslateUi(QMainWindow *Login_page)
    {
        Login_page->setWindowTitle(QCoreApplication::translate("Login_page", "\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
        userBtn->setInputMask(QString());
        userBtn->setText(QString());
        label2->setText(QCoreApplication::translate("Login_page", "\347\224\250\346\210\267\345\220\215", nullptr));
        passwordBtn->setText(QString());
        label3->setText(QCoreApplication::translate("Login_page", "\345\257\206\347\240\201", nullptr));
        clearBtn->setText(QCoreApplication::translate("Login_page", "\346\270\205\347\251\272", nullptr));
        loginBtn->setText(QCoreApplication::translate("Login_page", "\347\231\273\345\275\225", nullptr));
        signupBtn->setText(QCoreApplication::translate("Login_page", "\346\263\250\345\206\214", nullptr));
        exitBtn->setText(QCoreApplication::translate("Login_page", "\351\200\200\345\207\272", nullptr));
        label1->setText(QCoreApplication::translate("Login_page", "\350\266\263\347\220\203\350\264\255\347\245\250\347\256\241\347\220\206\347\263\273\347\273\237v1.0", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Login_page", "\347\224\250\346\210\267", nullptr));
        radioButton->setText(QCoreApplication::translate("Login_page", "\347\256\241\347\220\206\345\221\230", nullptr));
        label4->setText(QCoreApplication::translate("Login_page", "\350\272\253\344\273\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login_page: public Ui_Login_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_PAGE_H
