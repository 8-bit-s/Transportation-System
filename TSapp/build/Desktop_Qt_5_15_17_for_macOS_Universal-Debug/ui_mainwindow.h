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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *WidgetSerch;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QRadioButton *radioButton;
    QSpacerItem *horizontalSpacer_4;
    QRadioButton *radioButton_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_6;
    QWidget *widget_6;
    QLabel *appPic;
    QLabel *appName;
    QToolButton *toolButton;
    QToolButton *toolButton_4;
    QToolButton *toolButton_2;
    QWidget *WidgetBtn;
    QVBoxLayout *verticalLayout;
    QPushButton *SignInBtn;
    QSpacerItem *verticalSpacer;
    QPushButton *ExitBtn;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1440, 900);
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("#MainWindow{background-color: rgb(255, 255, 255);}\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(1440, 900));
        centralwidget->setMaximumSize(QSize(1440, 900));
        WidgetSerch = new QWidget(centralwidget);
        WidgetSerch->setObjectName(QString::fromUtf8("WidgetSerch"));
        WidgetSerch->setGeometry(QRect(250, 120, 1141, 70));
        WidgetSerch->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: rgba(128, 128, 128, 20);\n"
"}"));
        horizontalLayout_5 = new QHBoxLayout(WidgetSerch);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(WidgetSerch);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(22);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("QLabel{   \n"
"    border-top: 3px outset transparent;          /*\350\276\271\346\241\206\345\205\250\351\200\217\346\230\216*/\n"
"	border-bottom: 3px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;  \n"
"    min-width: 0px;                            /* \346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    min-height: 0px;\n"
"    border-radius: 15px;               /*\345\234\206\350\247\222*/\n"
"	background-color: rgba(0, 0, 0,0);\n"
"	color: rgb(57, 58, 58);\n"
"}"));

        horizontalLayout_3->addWidget(label);

        lineEdit = new QLineEdit(widget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QFont font2;
        font2.setPointSize(22);
        font2.setBold(false);
        lineEdit->setFont(font2);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_3->addWidget(lineEdit);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        horizontalLayout_5->addWidget(widget_2);

        widget_3 = new QWidget(WidgetSerch);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_4 = new QHBoxLayout(widget_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(12, 9, -1, 9);
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{   \n"
"    border-top: 3px outset transparent;          /*\350\276\271\346\241\206\345\205\250\351\200\217\346\230\216*/\n"
"	border-bottom: 3px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;  \n"
"    min-width: 0px;                            /* \346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    min-height: 0px;\n"
"    border-radius: 15px;               /*\345\234\206\350\247\222*/\n"
"	background-color: rgba(0, 0, 0,0);\n"
"	color: rgb(57, 58, 58);\n"
"}"));

        horizontalLayout_4->addWidget(label_2);

        lineEdit_2 = new QLineEdit(widget_3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setFont(font2);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(3, 3, 3);"));

        horizontalLayout_4->addWidget(lineEdit_2);


        horizontalLayout_5->addWidget(widget_3);

        widget_5 = new QWidget(WidgetSerch);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setEnabled(true);
        horizontalLayout_6 = new QHBoxLayout(widget_5);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 20, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        label_3 = new QLabel(widget_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{   \n"
"    border-top: 3px outset transparent;          /*\350\276\271\346\241\206\345\205\250\351\200\217\346\230\216*/\n"
"	border-bottom: 3px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;  \n"
"    min-width: 0px;                            /* \346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    min-height: 0px;\n"
"    border-radius: 15px;               /*\345\234\206\350\247\222*/\n"
"	background-color: rgba(0, 0, 0,0);\n"
"	color: rgb(57, 58, 58);\n"
"}"));
        label_3->setLineWidth(0);

        horizontalLayout_6->addWidget(label_3);

        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        radioButton = new QRadioButton(widget_5);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setFont(font1);
        radioButton->setStyleSheet(QString::fromUtf8("QRadioButton{   \n"
"    border-top: 3px outset transparent;          /*\350\276\271\346\241\206\345\205\250\351\200\217\346\230\216*/\n"
"	border-bottom: 3px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;  \n"
"    min-width: 0px;                            /* \346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    min-height: 0px;\n"
"    border-radius: 15px;               /*\345\234\206\350\247\222*/\n"
"	background-color: rgba(0, 0, 0,0);\n"
"	color: rgb(57, 58, 58);\n"
"}"));

        horizontalLayout_6->addWidget(radioButton);

        horizontalSpacer_4 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        radioButton_2 = new QRadioButton(widget_5);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setFont(font1);
        radioButton_2->setStyleSheet(QString::fromUtf8("QRadioButton{   \n"
"    border-top: 3px outset transparent;          /*\350\276\271\346\241\206\345\205\250\351\200\217\346\230\216*/\n"
"	border-bottom: 3px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;  \n"
"    min-width: 0px;                            /* \346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    min-height: 0px;\n"
"    border-radius: 15px;               /*\345\234\206\350\247\222*/\n"
"	background-color: rgba(0, 0, 0,0);\n"
"	color: rgb(57, 58, 58);\n"
"}"));

        horizontalLayout_6->addWidget(radioButton_2);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        pushButton = new QPushButton(widget_5);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font3;
        font3.setPointSize(21);
        font3.setBold(true);
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{   \n"
"	background-color: rgb(149, 150, 150);\n"
"	color: rgb(57, 58, 58);\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QPushButton:hover{\n"
"	background-color: rgb(195, 197, 197);\n"
"}"));

        horizontalLayout_6->addWidget(pushButton);

        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        horizontalLayout_5->addWidget(widget_5);

        widget_6 = new QWidget(centralwidget);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setGeometry(QRect(0, 0, 175, 800));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_6->sizePolicy().hasHeightForWidth());
        widget_6->setSizePolicy(sizePolicy);
        widget_6->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: rgba(128, 128, 128, 20);\n"
"}"));
        appPic = new QLabel(widget_6);
        appPic->setObjectName(QString::fromUtf8("appPic"));
        appPic->setGeometry(QRect(0, 20, 50, 40));
        appPic->setStyleSheet(QString::fromUtf8(""));
        appName = new QLabel(widget_6);
        appName->setObjectName(QString::fromUtf8("appName"));
        appName->setGeometry(QRect(40, 50, 120, 40));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font4.setPointSize(18);
        font4.setBold(true);
        appName->setFont(font4);
        appName->setStyleSheet(QString::fromUtf8("QLabel{   \n"
"    border-top: 3px outset transparent;          /*\350\276\271\346\241\206\345\205\250\351\200\217\346\230\216*/\n"
"	border-bottom: 3px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;  \n"
"    min-width: 0px;                            /* \346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    min-height: 0px;\n"
"    border-radius: 15px;               /*\345\234\206\350\247\222*/\n"
"	background-color: rgba(0, 0, 0,0);\n"
"	color: rgb(57, 58, 58);\n"
"}"));
        toolButton = new QToolButton(widget_6);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(10, 110, 151, 60));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy1);
        QFont font5;
        font5.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font5.setPointSize(18);
        font5.setBold(true);
        toolButton->setFont(font5);
        toolButton->setStyleSheet(QString::fromUtf8("QToolButton{   \n"
"    border-top: 3px outset transparent;          /*\350\276\271\346\241\206\345\205\250\351\200\217\346\230\216*/\n"
"	border-bottom: 3px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;  \n"
"    min-width: 0px;                            /* \346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    min-height: 0px;\n"
"    border-radius: 15px;               /*\345\234\206\350\247\222*/\n"
"	background-color: rgba(0, 0, 0,0);\n"
"	color: rgb(57, 58, 58);\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QToolButton:hover{\n"
"	background-color: rgba(0, 0, 0,20);\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/trippic.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(40, 40));
        toolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_4 = new QToolButton(widget_6);
        toolButton_4->setObjectName(QString::fromUtf8("toolButton_4"));
        toolButton_4->setGeometry(QRect(10, 180, 150, 60));
        sizePolicy1.setHeightForWidth(toolButton_4->sizePolicy().hasHeightForWidth());
        toolButton_4->setSizePolicy(sizePolicy1);
        toolButton_4->setFont(font5);
        toolButton_4->setStyleSheet(QString::fromUtf8("QToolButton{   \n"
"    border-top: 3px outset transparent;          /*\350\276\271\346\241\206\345\205\250\351\200\217\346\230\216*/\n"
"	border-bottom: 3px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;  \n"
"    min-width: 0px;                            /* \346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    min-height: 0px;\n"
"    border-radius: 15px;               /*\345\234\206\350\247\222*/\n"
"	background-color: rgba(0, 0, 0,0);\n"
"	color: rgb(57, 58, 58);\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QToolButton:hover{\n"
"	background-color: rgba(0, 0, 0,20);\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/citypic.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_4->setIcon(icon1);
        toolButton_4->setIconSize(QSize(42, 42));
        toolButton_4->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_2 = new QToolButton(widget_6);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setGeometry(QRect(10, 250, 150, 60));
        sizePolicy1.setHeightForWidth(toolButton_2->sizePolicy().hasHeightForWidth());
        toolButton_2->setSizePolicy(sizePolicy1);
        toolButton_2->setFont(font5);
        toolButton_2->setStyleSheet(QString::fromUtf8("QToolButton{   \n"
"    border-top: 3px outset transparent;          /*\350\276\271\346\241\206\345\205\250\351\200\217\346\230\216*/\n"
"	border-bottom: 3px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;  \n"
"    min-width: 0px;                            /* \346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    min-height: 0px;\n"
"    border-radius: 15px;               /*\345\234\206\350\247\222*/\n"
"	background-color: rgba(0, 0, 0,0);\n"
"	color: rgb(57, 58, 58);\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QToolButton:hover{\n"
"	background-color: rgba(0, 0, 0,20);\n"
"}\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/userpic.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon2);
        toolButton_2->setIconSize(QSize(40, 40));
        toolButton_2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        WidgetBtn = new QWidget(widget_6);
        WidgetBtn->setObjectName(QString::fromUtf8("WidgetBtn"));
        WidgetBtn->setGeometry(QRect(10, 650, 151, 114));
        WidgetBtn->setStyleSheet(QString::fromUtf8("QWidget{   \n"
"    border-top: 3px outset transparent;          /*\350\276\271\346\241\206\345\205\250\351\200\217\346\230\216*/\n"
"	border-bottom: 3px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;  \n"
"    min-width: 0px;                            /* \346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    min-height: 0px;\n"
"    border-radius: 15px;               /*\345\234\206\350\247\222*/\n"
"	background-color: rgba(0, 0, 0,0);\n"
"	color: rgb(57, 58, 58);\n"
"}"));
        verticalLayout = new QVBoxLayout(WidgetBtn);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        SignInBtn = new QPushButton(WidgetBtn);
        SignInBtn->setObjectName(QString::fromUtf8("SignInBtn"));
        QFont font6;
        font6.setPointSize(20);
        font6.setBold(true);
        SignInBtn->setFont(font6);
        SignInBtn->setStyleSheet(QString::fromUtf8("QPushButton{   \n"
"    border-radius: 15px;               /*\345\234\206\350\247\222*/\n"
"    background-color: rgba(128, 128, 128, 20);\n"
"    color:rgb(57, 58, 58);\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QPushButton:hover{\n"
"	color: rgb(205, 207, 207);\n"
"}\n"
""));

        verticalLayout->addWidget(SignInBtn);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        ExitBtn = new QPushButton(WidgetBtn);
        ExitBtn->setObjectName(QString::fromUtf8("ExitBtn"));
        ExitBtn->setFont(font6);
        ExitBtn->setStyleSheet(QString::fromUtf8("QPushButton{   \n"
"    border-radius: 15px;               /*\345\234\206\350\247\222*/\n"
"    background-color: rgba(128, 128, 128, 20);\n"
"    color:rgb(57, 58, 58);\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QPushButton:hover{\n"
"	color: rgb(205, 207, 207);\n"
"}"));

        verticalLayout->addWidget(ExitBtn);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\350\265\267\347\202\271\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\347\273\210\347\202\271\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\207\272\350\241\214\346\226\271\345\274\217\357\274\232", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "\347\201\253\350\275\246", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "\351\243\236\346\234\272", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        appPic->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        appName->setText(QCoreApplication::translate("MainWindow", "\344\272\244\351\200\232\346\237\245\350\257\242\347\263\273\347\273\237", nullptr));
        toolButton->setText(QCoreApplication::translate("MainWindow", " trip\347\256\241\347\220\206", nullptr));
        toolButton_4->setText(QCoreApplication::translate("MainWindow", " city\347\256\241\347\220\206", nullptr));
        toolButton_2->setText(QCoreApplication::translate("MainWindow", " \350\264\246\346\210\267\347\256\241\347\220\206", nullptr));
        SignInBtn->setText(QCoreApplication::translate("MainWindow", "\347\256\241\347\220\206\345\221\230\347\231\273\351\231\206", nullptr));
        ExitBtn->setText(QCoreApplication::translate("MainWindow", "  \351\200\200   \345\207\272  ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
