/********************************************************************************
** Form generated from reading UI file 'qsqldatabaseusedemo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSQLDATABASEUSEDEMO_H
#define UI_QSQLDATABASEUSEDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QSqlDatabaseUseDemo
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTableWidget *tableWidget;

    void setupUi(QWidget *QSqlDatabaseUseDemo)
    {
        if (QSqlDatabaseUseDemo->objectName().isEmpty())
            QSqlDatabaseUseDemo->setObjectName(QString::fromUtf8("QSqlDatabaseUseDemo"));
        QSqlDatabaseUseDemo->resize(400, 300);
        gridLayout = new QGridLayout(QSqlDatabaseUseDemo);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(265, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        pushButton = new QPushButton(QSqlDatabaseUseDemo);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(QSqlDatabaseUseDemo);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 2, 1, 1);

        tableWidget = new QTableWidget(QSqlDatabaseUseDemo);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 1, 0, 1, 3);


        retranslateUi(QSqlDatabaseUseDemo);

        QMetaObject::connectSlotsByName(QSqlDatabaseUseDemo);
    } // setupUi

    void retranslateUi(QWidget *QSqlDatabaseUseDemo)
    {
        QSqlDatabaseUseDemo->setWindowTitle(QCoreApplication::translate("QSqlDatabaseUseDemo", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("QSqlDatabaseUseDemo", "\346\237\245\350\257\242", nullptr));
        pushButton_2->setText(QCoreApplication::translate("QSqlDatabaseUseDemo", "\346\226\260\345\242\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QSqlDatabaseUseDemo: public Ui_QSqlDatabaseUseDemo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSQLDATABASEUSEDEMO_H
