/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *widget;
    QPushButton *loginButton;
    QLineEdit *usernameEdit;
    QLineEdit *psswordEdit;
    QLabel *userLable;
    QLabel *passwordLable;

    void setupUi(QWidget *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QString::fromUtf8("LoginWindow"));
        LoginWindow->resize(500, 350);
        LoginWindow->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pushButton_2 = new QPushButton(LoginWindow);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 5, 250, 53));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{   \n"
"    border-top: 3px outset transparent;          /*\350\276\271\346\241\206\345\205\250\351\200\217\346\230\216*/\n"
"	border-bottom: 3px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;  \n"
"    border-radius: 3px;               /*\345\234\206\350\247\222*/\n"
"	background-color: rgb(200, 200, 200);\n"
"}\n"
"\n"
"QPushButton:pressed,QPushButton:checked{\n"
"	\n"
"	background-color: rgb(250, 250, 250);\n"
"}"));
        pushButton_2->setCheckable(true);
        pushButton_2->setChecked(true);
        pushButton_2->setAutoExclusive(true);
        pushButton_3 = new QPushButton(LoginWindow);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(250, 5, 250, 53));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{   \n"
"    border-top: 3px outset transparent;          /*\350\276\271\346\241\206\345\205\250\351\200\217\346\230\216*/\n"
"	border-bottom: 3px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;  \n"
"    border-radius: 3px;               /*\345\234\206\350\247\222*/\n"
"	background-color: rgb(200, 200, 200);\n"
"}\n"
"\n"
"QPushButton:pressed,QPushButton:checked{\n"
"	\n"
"	background-color: rgb(250, 250, 250);\n"
"}"));
        pushButton_3->setCheckable(true);
        pushButton_3->setChecked(false);
        pushButton_3->setAutoExclusive(true);
        widget = new QWidget(LoginWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 50, 500, 350));
        widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color :rgb(250,250,250)\n"
"}"));
        loginButton = new QPushButton(widget);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(180, 220, 111, 41));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        loginButton->setFont(font);
        usernameEdit = new QLineEdit(widget);
        usernameEdit->setObjectName(QString::fromUtf8("usernameEdit"));
        usernameEdit->setGeometry(QRect(160, 65, 230, 40));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(false);
        usernameEdit->setFont(font1);
        usernameEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 241, 241);"));
        psswordEdit = new QLineEdit(widget);
        psswordEdit->setObjectName(QString::fromUtf8("psswordEdit"));
        psswordEdit->setGeometry(QRect(160, 145, 230, 40));
        psswordEdit->setFont(font1);
        psswordEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 241, 241);"));
        psswordEdit->setEchoMode(QLineEdit::Password);
        userLable = new QLabel(widget);
        userLable->setObjectName(QString::fromUtf8("userLable"));
        userLable->setGeometry(QRect(70, 65, 53, 40));
        userLable->setFont(font);
        userLable->setAlignment(Qt::AlignCenter);
        passwordLable = new QLabel(widget);
        passwordLable->setObjectName(QString::fromUtf8("passwordLable"));
        passwordLable->setGeometry(QRect(70, 145, 53, 40));
        passwordLable->setFont(font);
        passwordLable->setAlignment(Qt::AlignCenter);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QWidget *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("LoginWindow", "\347\224\250\346\210\267\347\231\273\345\275\225", nullptr));
        pushButton_3->setText(QCoreApplication::translate("LoginWindow", "\347\256\241\347\220\206\345\221\230\347\231\273\351\231\206", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginWindow", "\347\231\273\345\275\225", nullptr));
        userLable->setText(QCoreApplication::translate("LoginWindow", "\347\224\250\346\210\267\345\220\215", nullptr));
        passwordLable->setText(QCoreApplication::translate("LoginWindow", "\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
