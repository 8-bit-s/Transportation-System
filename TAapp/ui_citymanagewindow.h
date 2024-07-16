/********************************************************************************
** Form generated from reading UI file 'citymanagewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CITYMANAGEWINDOW_H
#define UI_CITYMANAGEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CityManageWindow
{
public:
    QPushButton *searchBtn;
    QPushButton *preBtn;
    QPushButton *nextBtn;
    QPushButton *firstBtn;
    QPushButton *lastBtn;
    QPushButton *addBtn;
    QPushButton *changeBtn;
    QPushButton *backBtn;
    QPushButton *backtoBtn;
    QPushButton *deleteBtn;
    QLabel *searchPic;
    QLabel *addPic;
    QLabel *deletePic;
    QLabel *cancelPic;
    QLabel *changePic;
    QWidget *tipWidget;
    QToolButton *closeBtn;
    QLabel *label;
    QPushButton *editBtn;
    QLabel *editPic;

    void setupUi(QWidget *CityManageWindow)
    {
        if (CityManageWindow->objectName().isEmpty())
            CityManageWindow->setObjectName("CityManageWindow");
        CityManageWindow->resize(1006, 778);
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        CityManageWindow->setFont(font);
        CityManageWindow->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QPushButton{   \n"
"    border-top-left-radius: 2px;               /*\345\234\206\350\247\222*/\n"
"	border-top-right-radius: 2px;  \n"
"	border-bottom-right-radius: 2px;  \n"
"	border-bottom-left-radius: 2px;  \n"
"	background-color: rgba(128, 128, 128, 20);\n"
"	font size: 20px;\n"
"}\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QPushButton:hover{\n"
"	background-color: rgba(0, 0, 0,20);\n"
"}\n"
"\n"
"QPushButton:pressed{	\n"
"	background-color: rgb(255, 180, 200);\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));
        searchBtn = new QPushButton(CityManageWindow);
        searchBtn->setObjectName("searchBtn");
        searchBtn->setGeometry(QRect(230, 120, 120, 36));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(searchBtn->sizePolicy().hasHeightForWidth());
        searchBtn->setSizePolicy(sizePolicy);
        searchBtn->setMinimumSize(QSize(120, 36));
        searchBtn->setMaximumSize(QSize(120, 36));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        searchBtn->setFont(font1);
        searchBtn->setStyleSheet(QString::fromUtf8(""));
        preBtn = new QPushButton(CityManageWindow);
        preBtn->setObjectName("preBtn");
        preBtn->setGeometry(QRect(82, 621, 120, 36));
        sizePolicy.setHeightForWidth(preBtn->sizePolicy().hasHeightForWidth());
        preBtn->setSizePolicy(sizePolicy);
        preBtn->setMinimumSize(QSize(120, 36));
        preBtn->setMaximumSize(QSize(120, 36));
        preBtn->setFont(font1);
        preBtn->setStyleSheet(QString::fromUtf8("QPushButton{   \n"
"    border-top-left-radius: 15px;               /*\345\234\206\350\247\222*/\n"
"	border-bottom-left-radius: 15px;  \n"
"	border-top-right-radius: 2px;  \n"
"	border-bottom-right-radius: 2px;  \n"
"	background-color: rgba(128, 128, 128, 20);\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QPushButton:hover{\n"
"	background-color: rgba(0, 0, 0,20);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(255, 180, 200);\n"
"}"));
        nextBtn = new QPushButton(CityManageWindow);
        nextBtn->setObjectName("nextBtn");
        nextBtn->setGeometry(QRect(202, 621, 120, 36));
        sizePolicy.setHeightForWidth(nextBtn->sizePolicy().hasHeightForWidth());
        nextBtn->setSizePolicy(sizePolicy);
        nextBtn->setMinimumSize(QSize(120, 36));
        nextBtn->setMaximumSize(QSize(120, 36));
        nextBtn->setFont(font1);
        nextBtn->setStyleSheet(QString::fromUtf8("QPushButton{   \n"
"    border-top-left-radius: 2px;               /*\345\234\206\350\247\222*/\n"
"	border-bottom-left-radius: 2px;  \n"
"	border-top-right-radius: 2px;  \n"
"	border-bottom-right-radius: 2px;  \n"
"	background-color: rgba(128, 128, 128, 20);\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QPushButton:hover{\n"
"	background-color: rgba(0, 0, 0,20);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(255, 180, 200);\n"
"}"));
        firstBtn = new QPushButton(CityManageWindow);
        firstBtn->setObjectName("firstBtn");
        firstBtn->setGeometry(QRect(322, 621, 120, 36));
        sizePolicy.setHeightForWidth(firstBtn->sizePolicy().hasHeightForWidth());
        firstBtn->setSizePolicy(sizePolicy);
        firstBtn->setMinimumSize(QSize(120, 36));
        firstBtn->setMaximumSize(QSize(120, 36));
        firstBtn->setFont(font1);
        firstBtn->setStyleSheet(QString::fromUtf8("QPushButton{   \n"
"    border-top-left-radius: 2px;               /*\345\234\206\350\247\222*/\n"
"	border-bottom-left-radius: 2px;  \n"
"	border-top-right-radius: 2px;  \n"
"	border-bottom-right-radius: 2px;  \n"
"	background-color: rgba(128, 128, 128, 20);\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QPushButton:hover{\n"
"	background-color: rgba(0, 0, 0,20);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(255, 180, 200);\n"
"}"));
        lastBtn = new QPushButton(CityManageWindow);
        lastBtn->setObjectName("lastBtn");
        lastBtn->setGeometry(QRect(442, 621, 120, 36));
        sizePolicy.setHeightForWidth(lastBtn->sizePolicy().hasHeightForWidth());
        lastBtn->setSizePolicy(sizePolicy);
        lastBtn->setMinimumSize(QSize(120, 36));
        lastBtn->setMaximumSize(QSize(120, 36));
        lastBtn->setFont(font1);
        lastBtn->setStyleSheet(QString::fromUtf8("QPushButton{   \n"
"    border-top-left-radius: 2px;               /*\345\234\206\350\247\222*/\n"
"	border-bottom-left-radius: 2px;  \n"
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
"QPushButton:pressed{\n"
"	background-color: rgb(255, 180, 200);\n"
"}"));
        addBtn = new QPushButton(CityManageWindow);
        addBtn->setObjectName("addBtn");
        addBtn->setGeometry(QRect(430, 80, 120, 36));
        sizePolicy.setHeightForWidth(addBtn->sizePolicy().hasHeightForWidth());
        addBtn->setSizePolicy(sizePolicy);
        addBtn->setMinimumSize(QSize(120, 36));
        addBtn->setMaximumSize(QSize(120, 36));
        addBtn->setFont(font1);
        addBtn->setStyleSheet(QString::fromUtf8(""));
        changeBtn = new QPushButton(CityManageWindow);
        changeBtn->setObjectName("changeBtn");
        changeBtn->setGeometry(QRect(440, 260, 120, 36));
        sizePolicy.setHeightForWidth(changeBtn->sizePolicy().hasHeightForWidth());
        changeBtn->setSizePolicy(sizePolicy);
        changeBtn->setMinimumSize(QSize(120, 36));
        changeBtn->setMaximumSize(QSize(120, 36));
        changeBtn->setFont(font1);
        changeBtn->setStyleSheet(QString::fromUtf8(""));
        backBtn = new QPushButton(CityManageWindow);
        backBtn->setObjectName("backBtn");
        backBtn->setGeometry(QRect(560, 370, 120, 36));
        sizePolicy.setHeightForWidth(backBtn->sizePolicy().hasHeightForWidth());
        backBtn->setSizePolicy(sizePolicy);
        backBtn->setMinimumSize(QSize(120, 36));
        backBtn->setMaximumSize(QSize(120, 36));
        backBtn->setFont(font1);
        backBtn->setStyleSheet(QString::fromUtf8(""));
        backtoBtn = new QPushButton(CityManageWindow);
        backtoBtn->setObjectName("backtoBtn");
        backtoBtn->setGeometry(QRect(82, 621, 120, 36));
        sizePolicy.setHeightForWidth(backtoBtn->sizePolicy().hasHeightForWidth());
        backtoBtn->setSizePolicy(sizePolicy);
        backtoBtn->setMinimumSize(QSize(120, 36));
        backtoBtn->setMaximumSize(QSize(120, 36));
        backtoBtn->setFont(font1);
        backtoBtn->setStyleSheet(QString::fromUtf8("QPushButton{   \n"
"     border-bottom-right-radius: 15px;  \n"
"	border-bottom-left-radius: 15px;  \n"
"	border-top-right-radius: 15px;  \n"
"	border-top-left-radius: 15px;  \n"
"	background-color: rgba(128, 128, 128, 20);\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QPushButton:hover{\n"
"	background-color: rgba(0, 0, 0,20);\n"
"}\n"
"\n"
"QPushButton:pressed,QPushButton:checked{\n"
"	background-color: rgb(255, 180, 200);\n"
"	border-bottom-right-radius: 2px;  \n"
"	border-bottom-left-radius: 2px;  \n"
"	border-top-right-radius: 2px;  \n"
"	border-top-left-radius: 2px;  \n"
"}"));
        deleteBtn = new QPushButton(CityManageWindow);
        deleteBtn->setObjectName("deleteBtn");
        deleteBtn->setGeometry(QRect(580, 200, 120, 36));
        sizePolicy.setHeightForWidth(deleteBtn->sizePolicy().hasHeightForWidth());
        deleteBtn->setSizePolicy(sizePolicy);
        deleteBtn->setMinimumSize(QSize(120, 36));
        deleteBtn->setMaximumSize(QSize(120, 36));
        deleteBtn->setFont(font1);
        deleteBtn->setStyleSheet(QString::fromUtf8(""));
        searchPic = new QLabel(CityManageWindow);
        searchPic->setObjectName("searchPic");
        searchPic->setGeometry(QRect(110, 450, 20, 20));
        sizePolicy.setHeightForWidth(searchPic->sizePolicy().hasHeightForWidth());
        searchPic->setSizePolicy(sizePolicy);
        addPic = new QLabel(CityManageWindow);
        addPic->setObjectName("addPic");
        addPic->setGeometry(QRect(230, 480, 20, 20));
        sizePolicy.setHeightForWidth(addPic->sizePolicy().hasHeightForWidth());
        addPic->setSizePolicy(sizePolicy);
        deletePic = new QLabel(CityManageWindow);
        deletePic->setObjectName("deletePic");
        deletePic->setGeometry(QRect(430, 530, 20, 20));
        sizePolicy.setHeightForWidth(deletePic->sizePolicy().hasHeightForWidth());
        deletePic->setSizePolicy(sizePolicy);
        cancelPic = new QLabel(CityManageWindow);
        cancelPic->setObjectName("cancelPic");
        cancelPic->setGeometry(QRect(390, 500, 20, 20));
        sizePolicy.setHeightForWidth(cancelPic->sizePolicy().hasHeightForWidth());
        cancelPic->setSizePolicy(sizePolicy);
        changePic = new QLabel(CityManageWindow);
        changePic->setObjectName("changePic");
        changePic->setGeometry(QRect(370, 450, 20, 20));
        sizePolicy.setHeightForWidth(changePic->sizePolicy().hasHeightForWidth());
        changePic->setSizePolicy(sizePolicy);
        tipWidget = new QWidget(CityManageWindow);
        tipWidget->setObjectName("tipWidget");
        tipWidget->setGeometry(QRect(259, 410, 601, 175));
        sizePolicy.setHeightForWidth(tipWidget->sizePolicy().hasHeightForWidth());
        tipWidget->setSizePolicy(sizePolicy);
        tipWidget->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(202, 204, 204);"));
        closeBtn = new QToolButton(tipWidget);
        closeBtn->setObjectName("closeBtn");
        closeBtn->setGeometry(QRect(570, 10, 25, 25));
        closeBtn->setStyleSheet(QString::fromUtf8("QToolButton{\n"
" border-top: 3px outset transparent;          /*\350\276\271\346\241\206\345\205\250\351\200\217\346\230\216*/\n"
"	border-bottom: 3px outset transparent;\n"
"	border-right: 3px outset transparent;\n"
"	border-left: 3px outset transparent;  \n"
"    min-width: 0px;                            /* \346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246 */\n"
"    min-height: 0px;\n"
"    border-radius: 50px;               /*\345\234\206\350\247\222*/\n"
"	background-color: rgb(202, 204, 204);\n"
"}"));
        label = new QLabel(tipWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 30, 600, 135));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(600, 135));
        label->setMaximumSize(QSize(150, 135));
        QFont font2;
        font2.setPointSize(40);
        font2.setBold(true);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 223, 223);"));
        editBtn = new QPushButton(CityManageWindow);
        editBtn->setObjectName("editBtn");
        editBtn->setGeometry(QRect(320, 70, 120, 36));
        sizePolicy.setHeightForWidth(editBtn->sizePolicy().hasHeightForWidth());
        editBtn->setSizePolicy(sizePolicy);
        editBtn->setMinimumSize(QSize(120, 36));
        editBtn->setMaximumSize(QSize(120, 36));
        editBtn->setFont(font1);
        editBtn->setStyleSheet(QString::fromUtf8(""));
        editPic = new QLabel(CityManageWindow);
        editPic->setObjectName("editPic");
        editPic->setGeometry(QRect(160, 130, 20, 20));
        sizePolicy.setHeightForWidth(editPic->sizePolicy().hasHeightForWidth());
        editPic->setSizePolicy(sizePolicy);
        searchBtn->raise();
        preBtn->raise();
        nextBtn->raise();
        firstBtn->raise();
        lastBtn->raise();
        changeBtn->raise();
        backBtn->raise();
        backtoBtn->raise();
        deleteBtn->raise();
        searchPic->raise();
        addPic->raise();
        deletePic->raise();
        cancelPic->raise();
        changePic->raise();
        tipWidget->raise();
        addBtn->raise();
        editBtn->raise();
        editPic->raise();

        retranslateUi(CityManageWindow);

        QMetaObject::connectSlotsByName(CityManageWindow);
    } // setupUi

    void retranslateUi(QWidget *CityManageWindow)
    {
        CityManageWindow->setWindowTitle(QCoreApplication::translate("CityManageWindow", "Form", nullptr));
        searchBtn->setText(QCoreApplication::translate("CityManageWindow", "\346\237\245\350\257\242", nullptr));
        preBtn->setText(QCoreApplication::translate("CityManageWindow", "\344\270\212\344\270\200\351\241\265", nullptr));
        nextBtn->setText(QCoreApplication::translate("CityManageWindow", "\344\270\213\344\270\200\351\241\265", nullptr));
        firstBtn->setText(QCoreApplication::translate("CityManageWindow", "\351\246\226\351\241\265", nullptr));
        lastBtn->setText(QCoreApplication::translate("CityManageWindow", "\345\260\276\351\241\265", nullptr));
        addBtn->setText(QCoreApplication::translate("CityManageWindow", "\345\242\236\345\212\240", nullptr));
        changeBtn->setText(QCoreApplication::translate("CityManageWindow", "\347\274\226\350\276\221", nullptr));
        backBtn->setText(QCoreApplication::translate("CityManageWindow", "\345\217\226\346\266\210", nullptr));
        backtoBtn->setText(QCoreApplication::translate("CityManageWindow", "\350\277\224\345\233\236", nullptr));
        deleteBtn->setText(QCoreApplication::translate("CityManageWindow", "\345\210\240\351\231\244", nullptr));
        searchPic->setText(QCoreApplication::translate("CityManageWindow", "TextLabel", nullptr));
        addPic->setText(QCoreApplication::translate("CityManageWindow", "TextLabel", nullptr));
        deletePic->setText(QCoreApplication::translate("CityManageWindow", "TextLabel", nullptr));
        cancelPic->setText(QCoreApplication::translate("CityManageWindow", "TextLabel", nullptr));
        changePic->setText(QCoreApplication::translate("CityManageWindow", "TextLabel", nullptr));
        closeBtn->setText(QCoreApplication::translate("CityManageWindow", "...", nullptr));
        label->setText(QCoreApplication::translate("CityManageWindow", "        \350\257\245\345\237\216\345\270\202\345\267\262\347\273\217\345\255\230\345\234\250", nullptr));
        editBtn->setText(QCoreApplication::translate("CityManageWindow", "\344\277\256\346\224\271", nullptr));
        editPic->setText(QCoreApplication::translate("CityManageWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CityManageWindow: public Ui_CityManageWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CITYMANAGEWINDOW_H
