/********************************************************************************
** Form generated from reading UI file 'tripwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRIPWINDOW_H
#define UI_TRIPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TripWindow
{
public:
    QWidget *widget;

    void setupUi(QWidget *TripWindow)
    {
        if (TripWindow->objectName().isEmpty())
            TripWindow->setObjectName("TripWindow");
        TripWindow->resize(1030, 730);
        TripWindow->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgb(255,247,251), stop:1 rgb(255,255,255)); \n"
"}"));
        widget = new QWidget(TripWindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(230, 20, 511, 691));
        widget->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,10)"));

        retranslateUi(TripWindow);

        QMetaObject::connectSlotsByName(TripWindow);
    } // setupUi

    void retranslateUi(QWidget *TripWindow)
    {
        TripWindow->setWindowTitle(QCoreApplication::translate("TripWindow", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TripWindow: public Ui_TripWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRIPWINDOW_H
