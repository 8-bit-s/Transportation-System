/********************************************************************************
** Form generated from reading UI file 'tripunit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRIPUNIT_H
#define UI_TRIPUNIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tripUnit
{
public:
    QLabel *typepic;
    QLabel *city1;
    QLabel *ptr;
    QLabel *name;
    QLabel *time;
    QLabel *city2;
    QLabel *cost;
    QLabel *distance;

    void setupUi(QWidget *tripUnit)
    {
        if (tripUnit->objectName().isEmpty())
            tripUnit->setObjectName(QString::fromUtf8("tripUnit"));
        tripUnit->resize(400, 60);
        tripUnit->setStyleSheet(QString::fromUtf8("QWidget{\n"
"    border-radius: 20px;               /*\345\234\206\350\247\222*/\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"}"));
        typepic = new QLabel(tripUnit);
        typepic->setObjectName(QString::fromUtf8("typepic"));
        typepic->setGeometry(QRect(10, 10, 40, 40));
        city1 = new QLabel(tripUnit);
        city1->setObjectName(QString::fromUtf8("city1"));
        city1->setGeometry(QRect(70, 15, 40, 30));
        ptr = new QLabel(tripUnit);
        ptr->setObjectName(QString::fromUtf8("ptr"));
        ptr->setGeometry(QRect(120, 22, 100, 16));
        name = new QLabel(tripUnit);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(130, 8, 80, 15));
        time = new QLabel(tripUnit);
        time->setObjectName(QString::fromUtf8("time"));
        time->setGeometry(QRect(130, 38, 80, 15));
        city2 = new QLabel(tripUnit);
        city2->setObjectName(QString::fromUtf8("city2"));
        city2->setGeometry(QRect(235, 15, 40, 30));
        cost = new QLabel(tripUnit);
        cost->setObjectName(QString::fromUtf8("cost"));
        cost->setGeometry(QRect(340, 15, 45, 30));
        distance = new QLabel(tripUnit);
        distance->setObjectName(QString::fromUtf8("distance"));
        distance->setGeometry(QRect(280, 15, 53, 30));

        retranslateUi(tripUnit);

        QMetaObject::connectSlotsByName(tripUnit);
    } // setupUi

    void retranslateUi(QWidget *tripUnit)
    {
        tripUnit->setWindowTitle(QCoreApplication::translate("tripUnit", "Form", nullptr));
        typepic->setText(QCoreApplication::translate("tripUnit", "TextLabel", nullptr));
        city1->setText(QCoreApplication::translate("tripUnit", "city1", nullptr));
        ptr->setText(QCoreApplication::translate("tripUnit", "------------------>", nullptr));
        name->setText(QCoreApplication::translate("tripUnit", "G11111", nullptr));
        time->setText(QCoreApplication::translate("tripUnit", "7h30min", nullptr));
        city2->setText(QCoreApplication::translate("tripUnit", "city2", nullptr));
        cost->setText(QCoreApplication::translate("tripUnit", "cost", nullptr));
        distance->setText(QCoreApplication::translate("tripUnit", "distance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tripUnit: public Ui_tripUnit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRIPUNIT_H
