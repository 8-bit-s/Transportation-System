/********************************************************************************
** Form generated from reading UI file 'addtripwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTRIPWINDOW_H
#define UI_ADDTRIPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddTripWindow
{
public:
    QWidget *widget;

    void setupUi(QWidget *AddTripWindow)
    {
        if (AddTripWindow->objectName().isEmpty())
            AddTripWindow->setObjectName("AddTripWindow");
        AddTripWindow->resize(1030, 730);
        AddTripWindow->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgb(255,247,251), stop:1 rgb(255,255,255)); \n"
"}"));
        widget = new QWidget(AddTripWindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(240, 20, 531, 691));

        retranslateUi(AddTripWindow);

        QMetaObject::connectSlotsByName(AddTripWindow);
    } // setupUi

    void retranslateUi(QWidget *AddTripWindow)
    {
        AddTripWindow->setWindowTitle(QCoreApplication::translate("AddTripWindow", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddTripWindow: public Ui_AddTripWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTRIPWINDOW_H
