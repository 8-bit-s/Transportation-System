/********************************************************************************
** Form generated from reading UI file 'citybox.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CITYBOX_H
#define UI_CITYBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CityBox
{
public:
    QPushButton *cityBtn;

    void setupUi(QWidget *CityBox)
    {
        if (CityBox->objectName().isEmpty())
            CityBox->setObjectName(QString::fromUtf8("CityBox"));
        CityBox->resize(240, 200);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CityBox->sizePolicy().hasHeightForWidth());
        CityBox->setSizePolicy(sizePolicy);
        CityBox->setMaximumSize(QSize(240, 16777215));
        CityBox->setStyleSheet(QString::fromUtf8("color:rgb(0,0,0);\n"
"background-color: rgba(128, 128, 128, 20);"));
        cityBtn = new QPushButton(CityBox);
        cityBtn->setObjectName(QString::fromUtf8("cityBtn"));
        cityBtn->setGeometry(QRect(-1, -9, 240, 210));
        sizePolicy.setHeightForWidth(cityBtn->sizePolicy().hasHeightForWidth());
        cityBtn->setSizePolicy(sizePolicy);
        cityBtn->setMinimumSize(QSize(240, 0));
        cityBtn->setMaximumSize(QSize(240, 16777215));
        QFont font;
        font.setPointSize(36);
        font.setBold(true);
        cityBtn->setFont(font);
        cityBtn->setStyleSheet(QString::fromUtf8("QPushButton{   \n"
"    border-top-left-radius: 15px;               /*\345\234\206\350\247\222*/\n"
"	border-bottom-left-radius: 15px;  \n"
"	border-top-right-radius: 15px;  \n"
"	border-bottom-right-radius: 15px;  \n"
"	background-color: rgba(128, 128, 128, 20);\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QPushButton:hover{\n"
"	background-color: rgba(0, 0, 0,20);\n"
"}\n"
"\n"
"QPushButton:checked{\n"
"	\n"
"	background-color: rgb(255, 180, 200);\n"
"}"));

        retranslateUi(CityBox);

        QMetaObject::connectSlotsByName(CityBox);
    } // setupUi

    void retranslateUi(QWidget *CityBox)
    {
        CityBox->setWindowTitle(QCoreApplication::translate("CityBox", "Form", nullptr));
        cityBtn->setText(QCoreApplication::translate("CityBox", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CityBox: public Ui_CityBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CITYBOX_H
