/********************************************************************************
** Form generated from reading UI file 'tripmanagewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRIPMANAGEWINDOW_H
#define UI_TRIPMANAGEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TripManageWindow
{
public:
    QWidget *city_widget;
    QLineEdit *start_edit;
    QLineEdit *end_edit;
    QPushButton *add_city_tag;
    QLabel *arrow;
    QWidget *citytag_widget;
    QWidget *dis_widget;
    QLineEdit *dis_edit;
    QPushButton *add_dis_tag;
    QWidget *distag_widget;
    QLabel *label_2;
    QWidget *widget_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *type_widget;
    QCheckBox *air_box;
    QCheckBox *rail_box;
    QWidget *widget;
    QGridLayout *gridLayout;
    QToolButton *type_button;
    QToolButton *city_button;
    QToolButton *time_button;
    QToolButton *dis_button;
    QToolButton *cost_button;
    QPushButton *search_button;
    QPushButton *add_button;
    QWidget *cost_widget;
    QLineEdit *cost_edit;
    QPushButton *add_cost_tag;
    QWidget *costtag_widget;
    QLabel *label;
    QWidget *time_widget;
    QLineEdit *hour_edit;
    QLineEdit *min_edit;
    QPushButton *add_time_tag;
    QLabel *label_3;
    QWidget *timetag_widget;
    QLabel *label_4;
    QWidget *widget_3;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *select_layout;

    void setupUi(QWidget *TripManageWindow)
    {
        if (TripManageWindow->objectName().isEmpty())
            TripManageWindow->setObjectName("TripManageWindow");
        TripManageWindow->resize(1030, 730);
        TripManageWindow->setStyleSheet(QString::fromUtf8(""));
        city_widget = new QWidget(TripManageWindow);
        city_widget->setObjectName("city_widget");
        city_widget->setGeometry(QRect(60, 70, 320, 300));
        city_widget->setStyleSheet(QString::fromUtf8("border-top: 1px  solid rgb(200,200,200);\n"
"border-bottom: 1px solid rgb(200,200,200);\n"
"border-right: 1px solid rgb(200,200,200); \n"
"border-left: 1px solid rgb(200,200,200); \n"
"border-radius:10px;\n"
"background-color:rgb(250,250,250);\n"
""));
        start_edit = new QLineEdit(city_widget);
        start_edit->setObjectName("start_edit");
        start_edit->setGeometry(QRect(30, 20, 71, 21));
        end_edit = new QLineEdit(city_widget);
        end_edit->setObjectName("end_edit");
        end_edit->setGeometry(QRect(170, 20, 71, 21));
        add_city_tag = new QPushButton(city_widget);
        add_city_tag->setObjectName("add_city_tag");
        add_city_tag->setGeometry(QRect(260, 20, 41, 23));
        arrow = new QLabel(city_widget);
        arrow->setObjectName("arrow");
        arrow->setGeometry(QRect(110, 20, 51, 21));
        arrow->setStyleSheet(QString::fromUtf8("border-top: 3px outset transparent;          /*\350\276\271\346\241\206\345\205\250\351\200\217\346\230\216*/\n"
"border-bottom: 3px outset transparent;\n"
"border-right: 3px outset transparent;\n"
"border-left: 3px outset transparent;  "));
        citytag_widget = new QWidget(city_widget);
        citytag_widget->setObjectName("citytag_widget");
        citytag_widget->setGeometry(QRect(0, 70, 320, 230));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(citytag_widget->sizePolicy().hasHeightForWidth());
        citytag_widget->setSizePolicy(sizePolicy);
        dis_widget = new QWidget(TripManageWindow);
        dis_widget->setObjectName("dis_widget");
        dis_widget->setGeometry(QRect(540, 70, 240, 300));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dis_widget->sizePolicy().hasHeightForWidth());
        dis_widget->setSizePolicy(sizePolicy1);
        dis_widget->setStyleSheet(QString::fromUtf8("border-top: 1px  solid rgb(200,200,200);\n"
"border-bottom: 1px solid rgb(200,200,200);\n"
"border-right: 1px solid rgb(200,200,200); \n"
"border-left: 1px solid rgb(200,200,200); \n"
"border-radius:10px;\n"
"background-color:rgb(250,250,250);"));
        dis_edit = new QLineEdit(dis_widget);
        dis_edit->setObjectName("dis_edit");
        dis_edit->setGeometry(QRect(80, 20, 71, 21));
        add_dis_tag = new QPushButton(dis_widget);
        add_dis_tag->setObjectName("add_dis_tag");
        add_dis_tag->setGeometry(QRect(170, 20, 41, 23));
        distag_widget = new QWidget(dis_widget);
        distag_widget->setObjectName("distag_widget");
        distag_widget->setGeometry(QRect(0, 70, 240, 230));
        sizePolicy.setHeightForWidth(distag_widget->sizePolicy().hasHeightForWidth());
        distag_widget->setSizePolicy(sizePolicy);
        label_2 = new QLabel(dis_widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 10, 41, 41));
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("border-top: 3px outset transparent;          /*\350\276\271\346\241\206\345\205\250\351\200\217\346\230\216*/\n"
"border-bottom: 3px outset transparent;\n"
"border-right: 3px outset transparent;\n"
"border-left: 3px outset transparent;  "));
        widget_2 = new QWidget(TripManageWindow);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(40, 260, 931, 421));
        scrollArea = new QScrollArea(TripManageWindow);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(40, 120, 931, 561));
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollArea{\n"
"border: 0px solid;\n"
"border-right-width: 0px;\n"
"background-color: rgba(0, 0, 0, 0);\n"
"}\n"
"QScrollBar:vertical {\n"
"border: none;\n"
"background: #f5f5f7;\n"
"width: 10px;\n"
"margin: 0px 0 0px 0;\n"
"}\n"
"QScrollBar::handle:vertical {\n"
"background: Gainsboro;\n"
"min-height: 20px;\n"
"border-radius: 5px;\n"
"border: none;\n"
"}\n"
"QScrollBar::add-line:vertical {\n"
"border: 0px solid grey;\n"
"background: #32CC99;\n"
"height: 0px;\n"
"subcontrol-position: bottom;\n"
"subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::sub-line:vertical {\n"
"border: 0px solid grey;\n"
"background: #32CC99;\n"
"height: 0px;\n"
"subcontrol-position: top;\n"
"subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"background: none;\n"
"width: 0px;\n"
"height: 0px;\n"
"}"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 931, 561));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        scrollArea->setWidget(scrollAreaWidgetContents);
        type_widget = new QWidget(TripManageWindow);
        type_widget->setObjectName("type_widget");
        type_widget->setGeometry(QRect(300, 70, 240, 50));
        sizePolicy1.setHeightForWidth(type_widget->sizePolicy().hasHeightForWidth());
        type_widget->setSizePolicy(sizePolicy1);
        type_widget->setStyleSheet(QString::fromUtf8("border-top: 1px  solid rgb(200,200,200);\n"
"border-bottom: 1px solid rgb(200,200,200);\n"
"border-right: 1px solid rgb(200,200,200); \n"
"border-left: 1px solid rgb(200,200,200); \n"
"border-radius:10px;\n"
"background-color:rgb(250,250,250);\n"
"\n"
"\n"
""));
        air_box = new QCheckBox(type_widget);
        air_box->setObjectName("air_box");
        air_box->setGeometry(QRect(20, 10, 120, 30));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font1.setPointSize(12);
        air_box->setFont(font1);
        air_box->setStyleSheet(QString::fromUtf8("\n"
"QCheckBox { \n"
"    border: 0px solid #FFFFFF; /*\350\256\276\347\275\256qcheckbox\346\216\247\344\273\266\347\232\204\350\276\271\346\241\206\344\270\2720px\357\274\210\346\227\240\350\276\271\346\241\206\357\274\211*/\n"
"    border-radius: 20px; \n"
"    padding: 4px; \n"
"    spacing: 15px; \n"
"} \n"
"/*\350\256\276\347\275\256qcheckbox\346\216\247\344\273\266\344\270\255\347\232\204\345\213\276\351\200\211\346\241\206\347\232\204\345\261\236\346\200\247*/\n"
" QCheckBox::indicator{\n"
"border: 0px solid #FFFFFF;  /*\350\256\276\347\275\256qcheckbox\346\216\247\344\273\266\344\270\255\345\213\276\351\200\211\346\241\206\347\232\204\350\276\271\346\241\206\344\270\2720px\357\274\210\346\227\240\350\276\271\346\241\206\357\274\211*/\n"
"width: 20px;/*\345\213\276\351\200\211\346\241\206\347\232\204\345\244\247\345\260\217*/\n"
"height: 20px;\n"
" image: url(:/images/unchecked.png);\n"
"}\n"
"\n"
"/*\345\213\276\351\200\211\346\241\206\346\234\252\351\200\211\344\270\255\346\227\266\347\232\204\345\233"
                        "\276\345\203\217*/\n"
"QCheckBox::indicator:hover {\n"
"   image: url(:/images/half_checked.png);\n"
"}\n"
"/*\345\213\276\351\200\211\346\241\206\351\200\211\344\270\255\346\227\266\347\232\204\345\233\276\345\203\217*/\n"
"QCheckBox::indicator:checked {\n"
"    image: url(:/images/checked.png);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        air_box->setTristate(false);
        rail_box = new QCheckBox(type_widget);
        rail_box->setObjectName("rail_box");
        rail_box->setGeometry(QRect(140, 10, 120, 30));
        rail_box->setFont(font1);
        rail_box->setStyleSheet(QString::fromUtf8("QCheckBox { \n"
"    border: 0px solid #FFFFFF; /*\350\256\276\347\275\256qcheckbox\346\216\247\344\273\266\347\232\204\350\276\271\346\241\206\344\270\2720px\357\274\210\346\227\240\350\276\271\346\241\206\357\274\211*/\n"
"    border-radius: 20px; \n"
"    padding: 4px; \n"
"    spacing: 15px; \n"
"} \n"
"/*\350\256\276\347\275\256qcheckbox\346\216\247\344\273\266\344\270\255\347\232\204\345\213\276\351\200\211\346\241\206\347\232\204\345\261\236\346\200\247*/\n"
" QCheckBox::indicator{\n"
"border: 0px solid #FFFFFF;  /*\350\256\276\347\275\256qcheckbox\346\216\247\344\273\266\344\270\255\345\213\276\351\200\211\346\241\206\347\232\204\350\276\271\346\241\206\344\270\2720px\357\274\210\346\227\240\350\276\271\346\241\206\357\274\211*/\n"
"width: 20px;/*\345\213\276\351\200\211\346\241\206\347\232\204\345\244\247\345\260\217*/\n"
"height: 20px;\n"
" image: url(:/images/unchecked.png);\n"
"}\n"
"\n"
"/*\345\213\276\351\200\211\346\241\206\346\234\252\351\200\211\344\270\255\346\227\266\347\232\204\345\233\276\345"
                        "\203\217*/\n"
"QCheckBox::indicator:hover {\n"
"   image: url(:/images/half_checked.png);\n"
"}\n"
"/*\345\213\276\351\200\211\346\241\206\351\200\211\344\270\255\346\227\266\347\232\204\345\233\276\345\203\217*/\n"
"QCheckBox::indicator:checked {\n"
"    image: url(:/images/checked.png);\n"
"}"));
        widget = new QWidget(TripManageWindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(60, 30, 701, 40));
        widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color:rgba(0,0,0,20);\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QToolButton{\n"
"	border-radius:0px;\n"
"	background-color: rgba(0, 0, 0,0);\n"
"	margin-left:0px;\n"
"	margin-right:-40px;\n"
"	padding-left:-60px;\n"
"\n"
"	background-image: url(:/images/expand.png);\n"
"    background-position: center;\n"
"    background-repeat: no-repeat;\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"	background-color: rgba(255,200,200,50);\n"
"	background-image:url(:/images/expand_big.png) center no-repeat ;\n"
"}\n"
"\n"
"QToolButton:pressed,QToolButton:checked{\n"
"	background-color: rgba(255,200,200,100);\n"
"	background-image:url(:/images/expand_big.png) center no-repeat ;\n"
"}\n"
""));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        type_button = new QToolButton(widget);
        type_button->setObjectName("type_button");
        type_button->setMinimumSize(QSize(120, 40));
        type_button->setFont(font);
        type_button->setStyleSheet(QString::fromUtf8(""));
        type_button->setCheckable(true);
        type_button->setAutoExclusive(false);

        gridLayout->addWidget(type_button, 0, 3, 1, 1);

        city_button = new QToolButton(widget);
        city_button->setObjectName("city_button");
        city_button->setMinimumSize(QSize(120, 40));
        city_button->setFont(font);
        city_button->setStyleSheet(QString::fromUtf8(""));
        city_button->setIconSize(QSize(10, 10));
        city_button->setCheckable(true);
        city_button->setChecked(false);
        city_button->setAutoExclusive(false);
        city_button->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(city_button, 0, 0, 1, 1);

        time_button = new QToolButton(widget);
        time_button->setObjectName("time_button");
        time_button->setMinimumSize(QSize(120, 40));
        time_button->setFont(font);
        time_button->setStyleSheet(QString::fromUtf8(""));
        time_button->setCheckable(true);
        time_button->setAutoExclusive(false);

        gridLayout->addWidget(time_button, 0, 4, 1, 1);

        dis_button = new QToolButton(widget);
        dis_button->setObjectName("dis_button");
        dis_button->setMinimumSize(QSize(120, 40));
        dis_button->setFont(font);
        dis_button->setStyleSheet(QString::fromUtf8(""));
        dis_button->setCheckable(true);
        dis_button->setAutoExclusive(false);

        gridLayout->addWidget(dis_button, 0, 5, 1, 1);

        cost_button = new QToolButton(widget);
        cost_button->setObjectName("cost_button");
        cost_button->setMinimumSize(QSize(120, 40));
        cost_button->setFont(font);
        cost_button->setStyleSheet(QString::fromUtf8(""));
        cost_button->setCheckable(true);
        cost_button->setAutoExclusive(false);

        gridLayout->addWidget(cost_button, 0, 2, 1, 1);

        search_button = new QPushButton(widget);
        search_button->setObjectName("search_button");
        search_button->setMaximumSize(QSize(50, 40));
        search_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:0px;\n"
"	background-color: rgba(0, 0, 0,0);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgba(255,200,200,80);\n"
"}\n"
"QPushButton:pressed,QPushButton:checked{\n"
"	background-color: rgba(255,200,200,120);\n"
"}"));

        gridLayout->addWidget(search_button, 0, 6, 1, 1);

        add_button = new QPushButton(widget);
        add_button->setObjectName("add_button");
        add_button->setMaximumSize(QSize(50, 40));
        add_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:0px;\n"
"	background-color: rgba(0, 0, 0,0);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgba(255,200,200,80);\n"
"}\n"
"QPushButton:pressed,QPushButton:checked{\n"
"	background-color: rgba(255,200,200,120);\n"
"}"));

        gridLayout->addWidget(add_button, 0, 7, 1, 1);

        cost_widget = new QWidget(TripManageWindow);
        cost_widget->setObjectName("cost_widget");
        cost_widget->setGeometry(QRect(180, 70, 240, 300));
        sizePolicy1.setHeightForWidth(cost_widget->sizePolicy().hasHeightForWidth());
        cost_widget->setSizePolicy(sizePolicy1);
        cost_widget->setStyleSheet(QString::fromUtf8("border-top: 1px  solid rgb(200,200,200);\n"
"border-bottom: 1px solid rgb(200,200,200);\n"
"border-right: 1px solid rgb(200,200,200); \n"
"border-left: 1px solid rgb(200,200,200); \n"
"border-radius:10px;\n"
"background-color:rgb(250,250,250);"));
        cost_edit = new QLineEdit(cost_widget);
        cost_edit->setObjectName("cost_edit");
        cost_edit->setGeometry(QRect(80, 20, 71, 21));
        add_cost_tag = new QPushButton(cost_widget);
        add_cost_tag->setObjectName("add_cost_tag");
        add_cost_tag->setGeometry(QRect(170, 20, 41, 23));
        costtag_widget = new QWidget(cost_widget);
        costtag_widget->setObjectName("costtag_widget");
        costtag_widget->setGeometry(QRect(0, 70, 240, 230));
        sizePolicy.setHeightForWidth(costtag_widget->sizePolicy().hasHeightForWidth());
        costtag_widget->setSizePolicy(sizePolicy);
        label = new QLabel(cost_widget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 41, 41));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border-top: 3px outset transparent;          /*\350\276\271\346\241\206\345\205\250\351\200\217\346\230\216*/\n"
"border-bottom: 3px outset transparent;\n"
"border-right: 3px outset transparent;\n"
"border-left: 3px outset transparent;  "));
        time_widget = new QWidget(TripManageWindow);
        time_widget->setObjectName("time_widget");
        time_widget->setGeometry(QRect(420, 70, 300, 300));
        sizePolicy1.setHeightForWidth(time_widget->sizePolicy().hasHeightForWidth());
        time_widget->setSizePolicy(sizePolicy1);
        time_widget->setStyleSheet(QString::fromUtf8("border-top: 1px  solid rgb(200,200,200);\n"
"border-bottom: 1px solid rgb(200,200,200);\n"
"border-right: 1px solid rgb(200,200,200); \n"
"border-left: 1px solid rgb(200,200,200); \n"
"border-radius:10px;\n"
"background-color:rgb(250,250,250);"));
        hour_edit = new QLineEdit(time_widget);
        hour_edit->setObjectName("hour_edit");
        hour_edit->setGeometry(QRect(20, 20, 51, 21));
        min_edit = new QLineEdit(time_widget);
        min_edit->setObjectName("min_edit");
        min_edit->setGeometry(QRect(120, 20, 51, 21));
        add_time_tag = new QPushButton(time_widget);
        add_time_tag->setObjectName("add_time_tag");
        add_time_tag->setGeometry(QRect(220, 20, 41, 23));
        label_3 = new QLabel(time_widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(170, 20, 41, 21));
        label_3->setStyleSheet(QString::fromUtf8("border-top: 3px outset transparent;          /*\350\276\271\346\241\206\345\205\250\351\200\217\346\230\216*/\n"
"border-bottom: 3px outset transparent;\n"
"border-right: 3px outset transparent;\n"
"border-left: 3px outset transparent;  "));
        timetag_widget = new QWidget(time_widget);
        timetag_widget->setObjectName("timetag_widget");
        timetag_widget->setGeometry(QRect(0, 70, 300, 230));
        sizePolicy.setHeightForWidth(timetag_widget->sizePolicy().hasHeightForWidth());
        timetag_widget->setSizePolicy(sizePolicy);
        label_4 = new QLabel(time_widget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(70, 20, 41, 21));
        label_4->setStyleSheet(QString::fromUtf8("border-top: 3px outset transparent;          /*\350\276\271\346\241\206\345\205\250\351\200\217\346\230\216*/\n"
"border-bottom: 3px outset transparent;\n"
"border-right: 3px outset transparent;\n"
"border-left: 3px outset transparent;  "));
        widget_3 = new QWidget(TripManageWindow);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(770, 30, 171, 41));
        widget_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius: 10px;\n"
"	background-color: rgba(0, 0, 0,20);\n"
"    max-width:60px;\n"
"	height: 40px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgba(255,200,200,100);\n"
"}\n"
"\n"
"QPushButton:pressed,QPushButton:checked{\n"
"	background-color: rgba(255,180,180,120);\n"
"}\n"
"	"));
        horizontalLayoutWidget = new QWidget(widget_3);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 171, 42));
        select_layout = new QHBoxLayout(horizontalLayoutWidget);
        select_layout->setSpacing(5);
        select_layout->setObjectName("select_layout");
        select_layout->setSizeConstraint(QLayout::SetNoConstraint);
        select_layout->setContentsMargins(0, 0, 0, 0);
        widget_2->raise();
        scrollArea->raise();
        widget->raise();
        city_widget->raise();
        cost_widget->raise();
        type_widget->raise();
        time_widget->raise();
        dis_widget->raise();
        widget_3->raise();

        retranslateUi(TripManageWindow);

        QMetaObject::connectSlotsByName(TripManageWindow);
    } // setupUi

    void retranslateUi(QWidget *TripManageWindow)
    {
        TripManageWindow->setWindowTitle(QCoreApplication::translate("TripManageWindow", "Form", nullptr));
        add_city_tag->setText(QCoreApplication::translate("TripManageWindow", "\346\267\273\345\212\240", nullptr));
        arrow->setText(QCoreApplication::translate("TripManageWindow", "TextLabel", nullptr));
        add_dis_tag->setText(QCoreApplication::translate("TripManageWindow", "\346\267\273\345\212\240", nullptr));
        label_2->setText(QCoreApplication::translate("TripManageWindow", "\350\267\235\347\246\273", nullptr));
        air_box->setText(QCoreApplication::translate("TripManageWindow", "\350\210\252\347\217\255", nullptr));
        rail_box->setText(QCoreApplication::translate("TripManageWindow", "\345\210\227\350\275\246", nullptr));
        type_button->setText(QCoreApplication::translate("TripManageWindow", "\347\261\273\345\236\213", nullptr));
        city_button->setText(QCoreApplication::translate("TripManageWindow", " \345\237\216\345\270\202", nullptr));
        time_button->setText(QCoreApplication::translate("TripManageWindow", "\346\227\266\351\227\264", nullptr));
        dis_button->setText(QCoreApplication::translate("TripManageWindow", "\350\267\235\347\246\273", nullptr));
        cost_button->setText(QCoreApplication::translate("TripManageWindow", "\350\212\261\350\264\271", nullptr));
        search_button->setText(QCoreApplication::translate("TripManageWindow", "\347\255\233\351\200\211", nullptr));
        add_button->setText(QCoreApplication::translate("TripManageWindow", "\346\267\273\345\212\240", nullptr));
        add_cost_tag->setText(QCoreApplication::translate("TripManageWindow", "\346\267\273\345\212\240", nullptr));
        label->setText(QCoreApplication::translate("TripManageWindow", "\350\212\261\350\264\271", nullptr));
        add_time_tag->setText(QCoreApplication::translate("TripManageWindow", "\346\267\273\345\212\240", nullptr));
        label_3->setText(QCoreApplication::translate("TripManageWindow", "\345\210\206\351\222\237", nullptr));
        label_4->setText(QCoreApplication::translate("TripManageWindow", "\345\260\217\346\227\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TripManageWindow: public Ui_TripManageWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRIPMANAGEWINDOW_H
