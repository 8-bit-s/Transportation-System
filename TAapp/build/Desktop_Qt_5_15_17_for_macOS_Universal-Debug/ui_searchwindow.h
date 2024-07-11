/********************************************************************************
** Form generated from reading UI file 'searchwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHWINDOW_H
#define UI_SEARCHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchWindow
{
public:
    QPushButton *searchBtn;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *CityLable;
    QLineEdit *targetEdit;

    void setupUi(QWidget *SearchWindow)
    {
        if (SearchWindow->objectName().isEmpty())
            SearchWindow->setObjectName(QString::fromUtf8("SearchWindow"));
        SearchWindow->resize(400, 275);
        SearchWindow->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        searchBtn = new QPushButton(SearchWindow);
        searchBtn->setObjectName(QString::fromUtf8("searchBtn"));
        searchBtn->setGeometry(QRect(140, 200, 111, 41));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        searchBtn->setFont(font);
        widget_2 = new QWidget(SearchWindow);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(60, 90, 265, 49));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        CityLable = new QLabel(widget_2);
        CityLable->setObjectName(QString::fromUtf8("CityLable"));
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


        retranslateUi(SearchWindow);

        QMetaObject::connectSlotsByName(SearchWindow);
    } // setupUi

    void retranslateUi(QWidget *SearchWindow)
    {
        SearchWindow->setWindowTitle(QCoreApplication::translate("SearchWindow", "Form", nullptr));
        searchBtn->setText(QCoreApplication::translate("SearchWindow", "\346\237\245\350\257\242", nullptr));
        CityLable->setText(QCoreApplication::translate("SearchWindow", "\345\237\216\345\270\202\345\220\215\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchWindow: public Ui_SearchWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHWINDOW_H
