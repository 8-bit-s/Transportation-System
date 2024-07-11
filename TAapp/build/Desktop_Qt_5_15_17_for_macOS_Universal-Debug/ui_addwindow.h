/********************************************************************************
** Form generated from reading UI file 'addwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDWINDOW_H
#define UI_ADDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddWindow
{
public:
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *CityLable;
    QLineEdit *targetEdit;
    QPushButton *addBtn;

    void setupUi(QWidget *AddWindow)
    {
        if (AddWindow->objectName().isEmpty())
            AddWindow->setObjectName(QString::fromUtf8("AddWindow"));
        AddWindow->resize(400, 300);
        AddWindow->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        widget_2 = new QWidget(AddWindow);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(60, 90, 265, 49));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        CityLable = new QLabel(widget_2);
        CityLable->setObjectName(QString::fromUtf8("CityLable"));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        CityLable->setFont(font);
        CityLable->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(CityLable);

        targetEdit = new QLineEdit(widget_2);
        targetEdit->setObjectName(QString::fromUtf8("targetEdit"));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(false);
        targetEdit->setFont(font1);
        targetEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 241, 241);"));

        horizontalLayout->addWidget(targetEdit);

        addBtn = new QPushButton(AddWindow);
        addBtn->setObjectName(QString::fromUtf8("addBtn"));
        addBtn->setGeometry(QRect(140, 200, 111, 41));
        addBtn->setFont(font);

        retranslateUi(AddWindow);

        QMetaObject::connectSlotsByName(AddWindow);
    } // setupUi

    void retranslateUi(QWidget *AddWindow)
    {
        AddWindow->setWindowTitle(QCoreApplication::translate("AddWindow", "Form", nullptr));
        CityLable->setText(QCoreApplication::translate("AddWindow", "\345\237\216\345\270\202\345\220\215\357\274\232", nullptr));
        addBtn->setText(QCoreApplication::translate("AddWindow", "\346\267\273\345\212\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddWindow: public Ui_AddWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWINDOW_H
