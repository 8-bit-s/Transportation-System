/********************************************************************************
** Form generated from reading UI file 'tripunit.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRIPUNIT_H
#define UI_TRIPUNIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tripUnit
{
public:

    void setupUi(QWidget *tripUnit)
    {
        if (tripUnit->objectName().isEmpty())
            tripUnit->setObjectName("tripUnit");
        tripUnit->resize(300, 70);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tripUnit->sizePolicy().hasHeightForWidth());
        tripUnit->setSizePolicy(sizePolicy);
        tripUnit->setMinimumSize(QSize(280, 70));
        tripUnit->setMaximumSize(QSize(450, 100));
        tripUnit->setMouseTracking(true);
        tripUnit->setTabletTracking(false);
        tripUnit->setStyleSheet(QString::fromUtf8("#tripUnit{\n"
"background-color: rgb(250,240,230);\n"
"border-radius:15px;\n"
"}\n"
"#tripUnit:hover{\n"
"	background-color: rgb(250,220,220);\n"
"}"));

        retranslateUi(tripUnit);

        QMetaObject::connectSlotsByName(tripUnit);
    } // setupUi

    void retranslateUi(QWidget *tripUnit)
    {
        tripUnit->setWindowTitle(QCoreApplication::translate("tripUnit", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tripUnit: public Ui_tripUnit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRIPUNIT_H
