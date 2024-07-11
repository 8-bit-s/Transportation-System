/********************************************************************************
** Form generated from reading UI file 'accountinfowindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTINFOWINDOW_H
#define UI_ACCOUNTINFOWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AccountInfoWindow
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *AccountInfoWindow)
    {
        if (AccountInfoWindow->objectName().isEmpty())
            AccountInfoWindow->setObjectName(QString::fromUtf8("AccountInfoWindow"));
        AccountInfoWindow->resize(360, 260);
        AccountInfoWindow->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pushButton = new QPushButton(AccountInfoWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 361, 261));

        retranslateUi(AccountInfoWindow);

        QMetaObject::connectSlotsByName(AccountInfoWindow);
    } // setupUi

    void retranslateUi(QWidget *AccountInfoWindow)
    {
        AccountInfoWindow->setWindowTitle(QCoreApplication::translate("AccountInfoWindow", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("AccountInfoWindow", "THIS IS ACOUNTINFOWINDOW", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AccountInfoWindow: public Ui_AccountInfoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTINFOWINDOW_H
