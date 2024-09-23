/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *nameEdit;
    QLineEdit *passwordEdit;
    QPushButton *submitBtn;
    QPushButton *tologinPage;
    QLabel *again;
    QLineEdit *againEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName(QString::fromUtf8("SignUp"));
        SignUp->resize(457, 403);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Qt-picture/HL.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        SignUp->setWindowIcon(icon);
        SignUp->setStyleSheet(QString::fromUtf8("background-color: rgb(228, 249, 245);"));
        label = new QLabel(SignUp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 50, 281, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(26);
        font.setBold(false);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(" font: 26pt \"\346\245\267\344\275\223\""));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(SignUp);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 130, 81, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(18);
        font1.setBold(false);
        font1.setItalic(false);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8(" font: 18pt \"\346\245\267\344\275\223\""));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3 = new QLabel(SignUp);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 190, 81, 31));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8(" font: 18pt \"\346\245\267\344\275\223\""));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        nameEdit = new QLineEdit(SignUp);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setGeometry(QRect(130, 130, 231, 31));
        nameEdit->setStyleSheet(QString::fromUtf8("QLineEdit{ border-radius:6; border:1px solid white; background-color:#55e9bc;}"));
        passwordEdit = new QLineEdit(SignUp);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
        passwordEdit->setGeometry(QRect(130, 190, 231, 31));
        passwordEdit->setStyleSheet(QString::fromUtf8("QLineEdit{ border-radius:6; border:1px solid white; background-color:#55e9bc;}"));
        passwordEdit->setEchoMode(QLineEdit::EchoMode::Password);
        submitBtn = new QPushButton(SignUp);
        submitBtn->setObjectName(QString::fromUtf8("submitBtn"));
        submitBtn->setGeometry(QRect(180, 310, 91, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setItalic(false);
        submitBtn->setFont(font2);
        submitBtn->setStyleSheet(QString::fromUtf8("QPushButton{ border:1px solid #11d3bc; background-color:#11d3bc ; border-radius:6; font: 14pt \"\346\245\267\344\275\223\";}\n"
"QPushButton:hover{ border:2px solid #11999e;}"));
        tologinPage = new QPushButton(SignUp);
        tologinPage->setObjectName(QString::fromUtf8("tologinPage"));
        tologinPage->setGeometry(QRect(300, 310, 91, 51));
        tologinPage->setFont(font2);
        tologinPage->setStyleSheet(QString::fromUtf8("QPushButton{ border:1px solid #11d3bc; background-color:#11d3bc ; border-radius:6; font: 14pt \"\346\245\267\344\275\223\";}\n"
"QPushButton:hover{ border:2px solid #11999e;}"));
        again = new QLabel(SignUp);
        again->setObjectName(QString::fromUtf8("again"));
        again->setGeometry(QRect(20, 250, 101, 31));
        again->setFont(font1);
        again->setStyleSheet(QString::fromUtf8(" font: 18pt \"\346\245\267\344\275\223\""));
        again->setAlignment(Qt::AlignmentFlag::AlignCenter);
        againEdit = new QLineEdit(SignUp);
        againEdit->setObjectName(QString::fromUtf8("againEdit"));
        againEdit->setGeometry(QRect(130, 250, 231, 31));
        againEdit->setStyleSheet(QString::fromUtf8("QLineEdit{ border-radius:6; border:1px solid white;background-color:#55e9bc}"));
        againEdit->setEchoMode(QLineEdit::EchoMode::Password);
        pushButton = new QPushButton(SignUp);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 310, 91, 51));
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{ border:1px solid #11d3bc; background-color:#11d3bc ; border-radius:6; font: 14pt \"\346\245\267\344\275\223\";}\n"
"QPushButton:hover{ border:2px solid #11999e;}"));

        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QWidget *SignUp)
    {
        SignUp->setWindowTitle(QCoreApplication::translate("SignUp", "\347\224\250\346\210\267\346\263\250\345\206\214", nullptr));
        label->setText(QCoreApplication::translate("SignUp", "\347\224\250\346\210\267\346\263\250\345\206\214", nullptr));
        label_2->setText(QCoreApplication::translate("SignUp", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("SignUp", "\345\257\206\347\240\201", nullptr));
        submitBtn->setText(QCoreApplication::translate("SignUp", "\347\241\256\350\256\244", nullptr));
        tologinPage->setText(QCoreApplication::translate("SignUp", "\351\200\200\345\207\272", nullptr));
        again->setText(QCoreApplication::translate("SignUp", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        pushButton->setText(QCoreApplication::translate("SignUp", "\346\270\205\347\251\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
