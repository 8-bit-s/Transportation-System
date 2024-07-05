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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include <mypushbutton.h>

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

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        QFont font;
        font.setPointSize(20);
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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
