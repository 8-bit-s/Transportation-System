/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLabel *appPic;
    QLabel *appName;
    QToolButton *tripButton;
    QToolButton *cityButton;
    QToolButton *accountButton;
    QToolButton *homeButton;
    QPushButton *loginButton;
    QToolButton *backButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 800);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(1200, 800));
        MainWindow->setStyleSheet(QString::fromUtf8("color:rgb(0,0,0)"));
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	 background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #ffeeff, stop:1 #ffffff); \n"
"}"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 170, 800));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: rgba(128, 128, 128, 20);\n"
"}"));
        appPic = new QLabel(widget);
        appPic->setObjectName(QString::fromUtf8("appPic"));
        appPic->setGeometry(QRect(0, 20, 50, 40));
        appPic->setStyleSheet(QString::fromUtf8("background-color:rgba(255,255,255,0)"));
        appName = new QLabel(widget);
        appName->setObjectName(QString::fromUtf8("appName"));
        appName->setGeometry(QRect(40, 50, 120, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font.setPointSize(15);
        font.setBold(true);
        appName->setFont(font);
        appName->setStyleSheet(QString::fromUtf8("background-color:rgba(255,255,255,0)"));
        tripButton = new QToolButton(widget);
        tripButton->setObjectName(QString::fromUtf8("tripButton"));
        tripButton->setGeometry(QRect(10, 180, 150, 60));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tripButton->sizePolicy().hasHeightForWidth());
        tripButton->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(17);
        font1.setBold(true);
        tripButton->setFont(font1);
        tripButton->setStyleSheet(QString::fromUtf8("QToolButton{   \n"
"    border-top: 3px outset transparent;          /*\350\276\271\346\241\206\345\205\250\351\200\217\346\230\216*/\n"
"	border-bottom: 3px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;  \n"
"    min-width: 0px;                            /* \346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    min-height: 0px;\n"
"    border-radius: 15px;               /*\345\234\206\350\247\222*/\n"
"	background-color: rgba(0, 0, 0,0);\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QToolButton:hover{\n"
"	background-color: rgba(0, 0, 0,20);\n"
"}\n"
"\n"
"QToolButton:pressed,QToolButton:checked{\n"
"	\n"
"	background-color: rgb(255, 180, 180);\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/trippic.png"), QSize(), QIcon::Normal, QIcon::Off);
        tripButton->setIcon(icon);
        tripButton->setIconSize(QSize(40, 40));
        tripButton->setCheckable(true);
        tripButton->setAutoExclusive(true);
        tripButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        cityButton = new QToolButton(widget);
        cityButton->setObjectName(QString::fromUtf8("cityButton"));
        cityButton->setGeometry(QRect(10, 250, 150, 60));
        sizePolicy2.setHeightForWidth(cityButton->sizePolicy().hasHeightForWidth());
        cityButton->setSizePolicy(sizePolicy2);
        cityButton->setFont(font1);
        cityButton->setStyleSheet(QString::fromUtf8("QToolButton{   \n"
"    border-top: 3px outset transparent;          /*\350\276\271\346\241\206\345\205\250\351\200\217\346\230\216*/\n"
"	border-bottom: 3px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;  \n"
"    min-width: 0px;                            /* \346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    min-height: 0px;\n"
"    border-radius: 15px;               /*\345\234\206\350\247\222*/\n"
"	background-color: rgba(0, 0, 0,0);\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QToolButton:hover{\n"
"	background-color: rgba(0, 0, 0,20);\n"
"}\n"
"\n"
"QToolButton:pressed,QToolButton:checked{\n"
"	\n"
"	background-color: rgb(255, 180, 180);\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/citypic.png"), QSize(), QIcon::Normal, QIcon::Off);
        cityButton->setIcon(icon1);
        cityButton->setIconSize(QSize(42, 42));
        cityButton->setCheckable(true);
        cityButton->setAutoExclusive(true);
        cityButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        accountButton = new QToolButton(widget);
        accountButton->setObjectName(QString::fromUtf8("accountButton"));
        accountButton->setGeometry(QRect(10, 320, 150, 60));
        sizePolicy2.setHeightForWidth(accountButton->sizePolicy().hasHeightForWidth());
        accountButton->setSizePolicy(sizePolicy2);
        accountButton->setFont(font1);
        accountButton->setStyleSheet(QString::fromUtf8("QToolButton{   \n"
"    border-top: 3px outset transparent;          /*\350\276\271\346\241\206\345\205\250\351\200\217\346\230\216*/\n"
"	border-bottom: 3px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;  \n"
"    min-width: 0px;                            /* \346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    min-height: 0px;\n"
"    border-radius: 15px;               /*\345\234\206\350\247\222*/\n"
"	background-color: rgba(0, 0, 0,0);\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QToolButton:hover{\n"
"	background-color: rgba(0, 0, 0,20);\n"
"}\n"
"\n"
"QToolButton:pressed,QToolButton:checked{\n"
"	\n"
"	background-color: rgb(255, 180, 180);\n"
"}\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/userpic.png"), QSize(), QIcon::Normal, QIcon::Off);
        accountButton->setIcon(icon2);
        accountButton->setIconSize(QSize(40, 40));
        accountButton->setCheckable(true);
        accountButton->setAutoExclusive(true);
        accountButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        homeButton = new QToolButton(widget);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(10, 110, 150, 60));
        sizePolicy2.setHeightForWidth(homeButton->sizePolicy().hasHeightForWidth());
        homeButton->setSizePolicy(sizePolicy2);
        homeButton->setFont(font1);
        homeButton->setStyleSheet(QString::fromUtf8("QToolButton{   \n"
"    border-top: 3px outset transparent;          /*\350\276\271\346\241\206\345\205\250\351\200\217\346\230\216*/\n"
"	border-bottom: 3px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;  \n"
"    min-width: 0px;                            /* \346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    min-height: 0px;\n"
"    border-radius: 15px;               /*\345\234\206\350\247\222*/\n"
"	background-color: rgba(0, 0, 0,0);\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QToolButton:hover{\n"
"	background-color: rgba(0, 0, 0,20);\n"
"}\n"
"\n"
"QToolButton:pressed,QToolButton:checked{\n"
"	\n"
"	background-color: rgb(255, 180, 200);\n"
"}\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        homeButton->setIcon(icon3);
        homeButton->setIconSize(QSize(40, 40));
        homeButton->setCheckable(true);
        homeButton->setAutoExclusive(true);
        homeButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        loginButton = new QPushButton(centralwidget);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(800, 20, 211, 40));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(loginButton->sizePolicy().hasHeightForWidth());
        loginButton->setSizePolicy(sizePolicy3);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(15);
        font2.setBold(false);
        loginButton->setFont(font2);
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-top: 3px outset transparent;          /*\350\276\271\346\241\206\345\205\250\351\200\217\346\230\216*/\n"
"	border-bottom: 3px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;  \n"
"    border-radius: 10px;               /*\345\234\206\350\247\222*/\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {font-weight: bold;}\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/user.png"), QSize(), QIcon::Normal, QIcon::Off);
        loginButton->setIcon(icon4);
        loginButton->setIconSize(QSize(30, 30));
        backButton = new QToolButton(centralwidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(210, 20, 40, 40));
        backButton->setStyleSheet(QString::fromUtf8("QToolButton{   \n"
"	border-top: 1px  solid rgb(200,200,200);\n"
"	border-bottom: 1px solid rgb(200,200,200);\n"
"	border-right: 1px solid rgb(200,200,200); \n"
"	border-left: 1px solid rgb(200,200,200);  \n"
"    border-radius: 10px;               /*\345\234\206\350\247\222*/\n"
"	background-color: rgba(255, 255, 255,0);\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QToolButton:hover{\n"
"	background-color: rgba(0, 0, 0,20);\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        backButton->setIcon(icon5);
        backButton->setIconSize(QSize(30, 30));
        MainWindow->setCentralWidget(centralwidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        appPic->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        appName->setText(QCoreApplication::translate("MainWindow", "\344\272\244\351\200\232\346\237\245\350\257\242\347\263\273\347\273\237", nullptr));
        tripButton->setText(QCoreApplication::translate("MainWindow", " trip\347\256\241\347\220\206", nullptr));
        cityButton->setText(QCoreApplication::translate("MainWindow", " city\347\256\241\347\220\206", nullptr));
        accountButton->setText(QCoreApplication::translate("MainWindow", " \350\264\246\346\210\267\347\256\241\347\220\206", nullptr));
        homeButton->setText(QCoreApplication::translate("MainWindow", "   \351\246\226\351\241\265", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", " \350\257\267\347\231\273\345\275\225", nullptr));
        backButton->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
