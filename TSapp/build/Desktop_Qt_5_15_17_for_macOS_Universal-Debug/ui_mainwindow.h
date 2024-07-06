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
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include <mypushbutton2.h>
#include "mypushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *TrainLabel;
    QLabel *AndLabel;
    QLabel *PlaneLabel;
    QWidget *WidgetBtn;
    QHBoxLayout *horizontalLayout_2;
    MyPushButton *SignInBtn;
    MyPushButton *ExitBtn;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QSpacerItem *horizontalSpacer;
    MyPushButton2 *pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1440, 900);
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("#MainWindow{background-color: rgb(255, 255, 255);}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(1440, 900));
        centralwidget->setMaximumSize(QSize(1440, 900));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 20, 153, 64));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        TrainLabel = new QLabel(widget);
        TrainLabel->setObjectName(QString::fromUtf8("TrainLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TrainLabel->sizePolicy().hasHeightForWidth());
        TrainLabel->setSizePolicy(sizePolicy);
        TrainLabel->setMinimumSize(QSize(40, 40));
        TrainLabel->setMaximumSize(QSize(40, 40));
        TrainLabel->setPixmap(QPixmap(QString::fromUtf8(":/\347\201\253\350\275\246\347\253\2312\345\260\217.png")));

        horizontalLayout->addWidget(TrainLabel);

        AndLabel = new QLabel(widget);
        AndLabel->setObjectName(QString::fromUtf8("AndLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(AndLabel->sizePolicy().hasHeightForWidth());
        AndLabel->setSizePolicy(sizePolicy1);
        AndLabel->setMinimumSize(QSize(0, 0));
        AndLabel->setMaximumSize(QSize(30, 40));
        QFont font1;
        font1.setPointSize(45);
        font1.setBold(true);
        AndLabel->setFont(font1);
        AndLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(AndLabel);

        PlaneLabel = new QLabel(widget);
        PlaneLabel->setObjectName(QString::fromUtf8("PlaneLabel"));
        sizePolicy.setHeightForWidth(PlaneLabel->sizePolicy().hasHeightForWidth());
        PlaneLabel->setSizePolicy(sizePolicy);
        PlaneLabel->setMinimumSize(QSize(40, 40));
        PlaneLabel->setMaximumSize(QSize(40, 40));
        PlaneLabel->setPixmap(QPixmap(QString::fromUtf8(":/\351\243\236\346\234\272.png")));

        horizontalLayout->addWidget(PlaneLabel);

        WidgetBtn = new QWidget(centralwidget);
        WidgetBtn->setObjectName(QString::fromUtf8("WidgetBtn"));
        WidgetBtn->setGeometry(QRect(540, 170, 245, 48));
        horizontalLayout_2 = new QHBoxLayout(WidgetBtn);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        SignInBtn = new MyPushButton(WidgetBtn);
        SignInBtn->setObjectName(QString::fromUtf8("SignInBtn"));
        QFont font2;
        font2.setPointSize(17);
        font2.setBold(true);
        SignInBtn->setFont(font2);
        SignInBtn->setStyleSheet(QString::fromUtf8("color: rgb(22, 48, 255);"));

        horizontalLayout_2->addWidget(SignInBtn);

        ExitBtn = new MyPushButton(WidgetBtn);
        ExitBtn->setObjectName(QString::fromUtf8("ExitBtn"));
        ExitBtn->setFont(font2);
        ExitBtn->setStyleSheet(QString::fromUtf8("color: rgb(22, 48, 255);"));

        horizontalLayout_2->addWidget(ExitBtn);

        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(20, 280, 724, 70));
        widget_4->setStyleSheet(QString::fromUtf8("#widget_4{background-color: rgb(172, 255, 254);}"));
        horizontalLayout_5 = new QHBoxLayout(widget_4);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(widget_4);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_3->addWidget(label);

        lineEdit = new QLineEdit(widget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_3->addWidget(lineEdit);


        horizontalLayout_5->addWidget(widget_2);

        widget_3 = new QWidget(widget_4);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_4 = new QHBoxLayout(widget_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_4->addWidget(label_2);

        lineEdit_2 = new QLineEdit(widget_3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setFont(font);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(3, 3, 3);"));

        horizontalLayout_4->addWidget(lineEdit_2);


        horizontalLayout_5->addWidget(widget_3);

        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_6 = new QHBoxLayout(widget_5);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_3 = new QLabel(widget_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_3->setLineWidth(0);

        horizontalLayout_6->addWidget(label_3);

        radioButton = new QRadioButton(widget_5);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setFont(font);
        radioButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_6->addWidget(radioButton);

        radioButton_2 = new QRadioButton(widget_5);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setFont(font);
        radioButton_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_6->addWidget(radioButton_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        pushButton = new MyPushButton2(widget_5);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(21, 18, 255);"));

        horizontalLayout_6->addWidget(pushButton);


        horizontalLayout_5->addWidget(widget_5);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        TrainLabel->setText(QString());
        AndLabel->setText(QCoreApplication::translate("MainWindow", "&", nullptr));
        PlaneLabel->setText(QString());
        SignInBtn->setText(QCoreApplication::translate("MainWindow", "\347\256\241\347\220\206\345\221\230\347\231\273\351\231\206", nullptr));
        ExitBtn->setText(QCoreApplication::translate("MainWindow", "  \351\200\200   \345\207\272  ", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\350\265\267\347\202\271\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\347\273\210\347\202\271\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\207\272\350\241\214\346\226\271\345\274\217\357\274\232", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "\347\201\253\350\275\246", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "\351\243\236\346\234\272", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
