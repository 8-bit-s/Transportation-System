/********************************************************************************
** Form generated from reading UI file 'tripmanagewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRIPMANAGEWINDOW_H
#define UI_TRIPMANAGEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TripManageWindow
{
public:
    QLabel *label;
    QWidget *WidgetSerch;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_5;
    QRadioButton *radioButton;
    QSpacerItem *horizontalSpacer_4;
    QRadioButton *radioButton_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QWidget *TripManageWindow)
    {
        if (TripManageWindow->objectName().isEmpty())
            TripManageWindow->setObjectName(QString::fromUtf8("TripManageWindow"));
        TripManageWindow->resize(1030, 730);
        TripManageWindow->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label = new QLabel(TripManageWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(290, 190, 391, 251));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        WidgetSerch = new QWidget(TripManageWindow);
        WidgetSerch->setObjectName(QString::fromUtf8("WidgetSerch"));
        WidgetSerch->setGeometry(QRect(10, 230, 961, 51));
        WidgetSerch->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: rgba(128, 128, 128, 20);\n"
"}"));
        horizontalLayout_5 = new QHBoxLayout(WidgetSerch);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(WidgetSerch);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(22);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{   \n"
"    border-top: 3px outset transparent;          /*\350\276\271\346\241\206\345\205\250\351\200\217\346\230\216*/\n"
"	border-bottom: 3px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;  \n"
"    min-width: 0px;                            /* \346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    min-height: 0px;\n"
"    border-radius: 15px;               /*\345\234\206\350\247\222*/\n"
"	background-color: rgba(0, 0, 0,0);\n"
"	color: rgb(57, 58, 58);\n"
"}"));

        horizontalLayout_3->addWidget(label_2);

        lineEdit = new QLineEdit(widget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(100, 0));
        lineEdit->setMaximumSize(QSize(125, 16777215));
        QFont font2;
        font2.setPointSize(22);
        font2.setBold(false);
        lineEdit->setFont(font2);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_3->addWidget(lineEdit);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        horizontalLayout_5->addWidget(widget_2);

        widget_3 = new QWidget(WidgetSerch);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_4 = new QHBoxLayout(widget_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(12, 9, -1, 9);
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{   \n"
"    border-top: 3px outset transparent;          /*\350\276\271\346\241\206\345\205\250\351\200\217\346\230\216*/\n"
"	border-bottom: 3px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;  \n"
"    min-width: 0px;                            /* \346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    min-height: 0px;\n"
"    border-radius: 15px;               /*\345\234\206\350\247\222*/\n"
"	background-color: rgba(0, 0, 0,0);\n"
"	color: rgb(57, 58, 58);\n"
"}"));

        horizontalLayout_4->addWidget(label_3);

        lineEdit_2 = new QLineEdit(widget_3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(100, 0));
        lineEdit_2->setMaximumSize(QSize(125, 16777215));
        lineEdit_2->setFont(font2);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(3, 3, 3);"));

        horizontalLayout_4->addWidget(lineEdit_2);


        horizontalLayout_5->addWidget(widget_3);

        widget_5 = new QWidget(WidgetSerch);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setEnabled(true);
        horizontalLayout_6 = new QHBoxLayout(widget_5);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 20, 0);
        horizontalSpacer_2 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        label_4 = new QLabel(widget_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("QLabel{   \n"
"    border-top: 3px outset transparent;          /*\350\276\271\346\241\206\345\205\250\351\200\217\346\230\216*/\n"
"	border-bottom: 3px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;  \n"
"    min-width: 0px;                            /* \346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    min-height: 0px;\n"
"    border-radius: 15px;               /*\345\234\206\350\247\222*/\n"
"	background-color: rgba(0, 0, 0,0);\n"
"	color: rgb(57, 58, 58);\n"
"}"));
        label_4->setLineWidth(0);

        horizontalLayout_6->addWidget(label_4);

        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        radioButton = new QRadioButton(widget_5);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setFont(font1);
        radioButton->setStyleSheet(QString::fromUtf8("QRadioButton{   \n"
"    border-top: 3px outset transparent;          /*\350\276\271\346\241\206\345\205\250\351\200\217\346\230\216*/\n"
"	border-bottom: 3px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;  \n"
"    min-width: 0px;                            /* \346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    min-height: 0px;\n"
"    border-radius: 15px;               /*\345\234\206\350\247\222*/\n"
"	background-color: rgba(0, 0, 0,0);\n"
"	color: rgb(57, 58, 58);\n"
"}"));

        horizontalLayout_6->addWidget(radioButton);

        horizontalSpacer_4 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        radioButton_2 = new QRadioButton(widget_5);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setFont(font1);
        radioButton_2->setStyleSheet(QString::fromUtf8("QRadioButton{   \n"
"    border-top: 3px outset transparent;          /*\350\276\271\346\241\206\345\205\250\351\200\217\346\230\216*/\n"
"	border-bottom: 3px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;  \n"
"    min-width: 0px;                            /* \346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    min-height: 0px;\n"
"    border-radius: 15px;               /*\345\234\206\350\247\222*/\n"
"	background-color: rgba(0, 0, 0,0);\n"
"	color: rgb(57, 58, 58);\n"
"}"));

        horizontalLayout_6->addWidget(radioButton_2);

        horizontalSpacer = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        pushButton = new QPushButton(widget_5);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font3;
        font3.setPointSize(21);
        font3.setBold(true);
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{   \n"
"	background-color: rgb(149, 150, 150);\n"
"	color: rgb(57, 58, 58);\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QPushButton:hover{\n"
"	background-color: rgb(195, 197, 197);\n"
"}"));

        horizontalLayout_6->addWidget(pushButton);

        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        horizontalLayout_5->addWidget(widget_5);


        retranslateUi(TripManageWindow);

        QMetaObject::connectSlotsByName(TripManageWindow);
    } // setupUi

    void retranslateUi(QWidget *TripManageWindow)
    {
        TripManageWindow->setWindowTitle(QCoreApplication::translate("TripManageWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("TripManageWindow", "THIS IS TRIPMANAGEWINDOW", nullptr));
        label_2->setText(QCoreApplication::translate("TripManageWindow", "\350\265\267\347\202\271\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("TripManageWindow", "\347\273\210\347\202\271\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("TripManageWindow", "\345\207\272\350\241\214\346\226\271\345\274\217\357\274\232", nullptr));
        radioButton->setText(QCoreApplication::translate("TripManageWindow", "\347\201\253\350\275\246", nullptr));
        radioButton_2->setText(QCoreApplication::translate("TripManageWindow", "\351\243\236\346\234\272", nullptr));
        pushButton->setText(QCoreApplication::translate("TripManageWindow", "\346\220\234\347\264\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TripManageWindow: public Ui_TripManageWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRIPMANAGEWINDOW_H
