/********************************************************************************
** Form generated from reading UI file 'tag.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAG_H
#define UI_TAG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tag
{
public:
    QLabel *label;
    QToolButton *deleteButton;

    void setupUi(QWidget *Tag)
    {
        if (Tag->objectName().isEmpty())
            Tag->setObjectName("Tag");
        Tag->resize(100, 40);
        Tag->setStyleSheet(QString::fromUtf8("background-color:rgba(200,200,0,0);"));
        label = new QLabel(Tag);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 10, 90, 30));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,30);\n"
"border-radius:5px;"));
        deleteButton = new QToolButton(Tag);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setGeometry(QRect(80, 0, 20, 20));
        deleteButton->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"	background-color: rgba(0,0,0,0);\n"
"	border-radius: 10px;      \n"
"	border-image:url(:/images/black_cross.png);\n"
"}\n"
"\n"
"QToolButton:hover{	\n"
"	icon-size:25px 25px;\n"
"	border-image:url(:/images/red_cross.png);\n"
"}"));

        retranslateUi(Tag);

        QMetaObject::connectSlotsByName(Tag);
    } // setupUi

    void retranslateUi(QWidget *Tag)
    {
        Tag->setWindowTitle(QCoreApplication::translate("Tag", "Form", nullptr));
        label->setText(QCoreApplication::translate("Tag", "usndaiuaui", nullptr));
        deleteButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Tag: public Ui_Tag {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAG_H
