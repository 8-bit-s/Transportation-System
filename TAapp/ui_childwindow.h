/********************************************************************************
** Form generated from reading UI file 'childwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHILDWINDOW_H
#define UI_CHILDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChildWindow
{
public:
    QPushButton *sureBtn;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *targetEdit;

    void setupUi(QWidget *ChildWindow)
    {
        if (ChildWindow->objectName().isEmpty())
            ChildWindow->setObjectName("ChildWindow");
        ChildWindow->resize(400, 265);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ChildWindow->sizePolicy().hasHeightForWidth());
        ChildWindow->setSizePolicy(sizePolicy);
        ChildWindow->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        sureBtn = new QPushButton(ChildWindow);
        sureBtn->setObjectName("sureBtn");
        sureBtn->setGeometry(QRect(140, 207, 111, 41));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        sureBtn->setFont(font);
        widget = new QWidget(ChildWindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 95, 307, 51));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setFont(font);

        horizontalLayout->addWidget(label);

        targetEdit = new QLineEdit(widget);
        targetEdit->setObjectName("targetEdit");
        targetEdit->setFont(font);
        targetEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 241, 241);"));

        horizontalLayout->addWidget(targetEdit);


        retranslateUi(ChildWindow);

        QMetaObject::connectSlotsByName(ChildWindow);
    } // setupUi

    void retranslateUi(QWidget *ChildWindow)
    {
        ChildWindow->setWindowTitle(QCoreApplication::translate("ChildWindow", "Form", nullptr));
        sureBtn->setText(QCoreApplication::translate("ChildWindow", "\347\241\256\345\256\232", nullptr));
        label->setText(QCoreApplication::translate("ChildWindow", "\345\237\216\345\270\202\345\220\215\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChildWindow: public Ui_ChildWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHILDWINDOW_H
