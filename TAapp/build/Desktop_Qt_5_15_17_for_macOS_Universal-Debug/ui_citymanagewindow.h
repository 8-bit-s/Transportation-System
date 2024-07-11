/********************************************************************************
** Form generated from reading UI file 'citymanagewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CITYMANAGEWINDOW_H
#define UI_CITYMANAGEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CityManageWindow
{
public:
    QLabel *changePic;
    QLabel *addPic;
    QLabel *searchPic;
    QPushButton *searchBtn;
    QPushButton *addBtn;
    QPushButton *changeBtn;
    QPushButton *deleteBtn;
    QPushButton *backBtn;
    QLabel *cancelPic;
    QLabel *deletePic;

    void setupUi(QWidget *CityManageWindow)
    {
        if (CityManageWindow->objectName().isEmpty())
            CityManageWindow->setObjectName(QString::fromUtf8("CityManageWindow"));
        CityManageWindow->resize(1030, 730);
        CityManageWindow->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        changePic = new QLabel(CityManageWindow);
        changePic->setObjectName(QString::fromUtf8("changePic"));
        changePic->setGeometry(QRect(750, 110, 20, 20));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(changePic->sizePolicy().hasHeightForWidth());
        changePic->setSizePolicy(sizePolicy);
        addPic = new QLabel(CityManageWindow);
        addPic->setObjectName(QString::fromUtf8("addPic"));
        addPic->setGeometry(QRect(530, 100, 20, 20));
        sizePolicy.setHeightForWidth(addPic->sizePolicy().hasHeightForWidth());
        addPic->setSizePolicy(sizePolicy);
        addPic->setMaximumSize(QSize(20, 20));
        searchPic = new QLabel(CityManageWindow);
        searchPic->setObjectName(QString::fromUtf8("searchPic"));
        searchPic->setGeometry(QRect(260, 355, 20, 20));
        sizePolicy.setHeightForWidth(searchPic->sizePolicy().hasHeightForWidth());
        searchPic->setSizePolicy(sizePolicy);
        searchPic->setMaximumSize(QSize(20, 20));
        searchPic->setIndent(0);
        searchBtn = new QPushButton(CityManageWindow);
        searchBtn->setObjectName(QString::fromUtf8("searchBtn"));
        searchBtn->setGeometry(QRect(210, 130, 120, 36));
        sizePolicy.setHeightForWidth(searchBtn->sizePolicy().hasHeightForWidth());
        searchBtn->setSizePolicy(sizePolicy);
        searchBtn->setMinimumSize(QSize(0, 36));
        searchBtn->setMaximumSize(QSize(120, 36));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        searchBtn->setFont(font);
        searchBtn->setStyleSheet(QString::fromUtf8("QPushButton{   \n"
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
        addBtn = new QPushButton(CityManageWindow);
        addBtn->setObjectName(QString::fromUtf8("addBtn"));
        addBtn->setGeometry(QRect(330, 130, 120, 36));
        sizePolicy.setHeightForWidth(addBtn->sizePolicy().hasHeightForWidth());
        addBtn->setSizePolicy(sizePolicy);
        addBtn->setMinimumSize(QSize(0, 36));
        addBtn->setMaximumSize(QSize(120, 36));
        addBtn->setFont(font);
        addBtn->setStyleSheet(QString::fromUtf8("QPushButton{   \n"
"    border-top-left-radius: 2px;               /*\345\234\206\350\247\222*/\n"
"	border-top-right-radius: 2px;  \n"
"	border-bottom-right-radius: 2px;  \n"
"	border-bottom-left-radius: 2px;  \n"
"	background-color: rgba(128, 128, 128, 20);\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QPushButton:hover{\n"
"	background-color: rgba(0, 0, 0,20);\n"
"}\n"
"\n"
"QPushButton:pressed{	\n"
"	background-color: rgb(255, 180, 200);\n"
"}"));
        changeBtn = new QPushButton(CityManageWindow);
        changeBtn->setObjectName(QString::fromUtf8("changeBtn"));
        changeBtn->setGeometry(QRect(450, 130, 120, 36));
        sizePolicy.setHeightForWidth(changeBtn->sizePolicy().hasHeightForWidth());
        changeBtn->setSizePolicy(sizePolicy);
        changeBtn->setMinimumSize(QSize(0, 36));
        changeBtn->setMaximumSize(QSize(120, 36));
        changeBtn->setFont(font);
        changeBtn->setStyleSheet(QString::fromUtf8("QPushButton{   \n"
"     border-bottom-right-radius: 15px;  \n"
"	border-bottom-left-radius: 2px;  \n"
"	border-top-right-radius: 15px;  \n"
"	border-top-left-radius: 2px;  \n"
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
        deleteBtn->setObjectName(QString::fromUtf8("deleteBtn"));
        deleteBtn->setGeometry(QRect(570, 130, 120, 36));
        sizePolicy.setHeightForWidth(deleteBtn->sizePolicy().hasHeightForWidth());
        deleteBtn->setSizePolicy(sizePolicy);
        deleteBtn->setMinimumSize(QSize(0, 0));
        deleteBtn->setMaximumSize(QSize(120, 36));
        deleteBtn->setFont(font);
        deleteBtn->setStyleSheet(QString::fromUtf8("QPushButton{   \n"
"    border-bottom-right-radius: 2px;  \n"
"	border-bottom-left-radius: 2px;  \n"
"	border-top-right-radius: 2px;  \n"
"	border-top-left-radius: 2px;  \n"
"	background-color: rgba(128, 128, 128, 20);\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QPushButton:hover{\n"
"	background-color: rgba(0, 0, 0,20);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	\n"
"	background-color: rgb(255, 180, 200);\n"
"}"));
        backBtn = new QPushButton(CityManageWindow);
        backBtn->setObjectName(QString::fromUtf8("backBtn"));
        backBtn->setGeometry(QRect(690, 130, 120, 36));
        sizePolicy.setHeightForWidth(backBtn->sizePolicy().hasHeightForWidth());
        backBtn->setSizePolicy(sizePolicy);
        backBtn->setMinimumSize(QSize(0, 0));
        backBtn->setMaximumSize(QSize(120, 36));
        backBtn->setFont(font);
        backBtn->setStyleSheet(QString::fromUtf8("QPushButton{   \n"
"    border-bottom-right-radius: 15px;  \n"
"	border-bottom-left-radius: 2px;  \n"
"	border-top-right-radius: 15px;  \n"
"	border-top-left-radius: 2px;  \n"
"	background-color: rgba(128, 128, 128, 20);\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QPushButton:hover{\n"
"	background-color: rgba(0, 0, 0,20);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	\n"
"	background-color: rgb(255, 180, 200);\n"
"}"));
        cancelPic = new QLabel(CityManageWindow);
        cancelPic->setObjectName(QString::fromUtf8("cancelPic"));
        cancelPic->setGeometry(QRect(420, 250, 20, 20));
        cancelPic->setMinimumSize(QSize(20, 20));
        cancelPic->setMaximumSize(QSize(20, 20));
        deletePic = new QLabel(CityManageWindow);
        deletePic->setObjectName(QString::fromUtf8("deletePic"));
        deletePic->setGeometry(QRect(550, 300, 20, 20));
        deletePic->setMinimumSize(QSize(20, 20));
        deletePic->setMaximumSize(QSize(20, 20));
        addPic->raise();
        searchPic->raise();
        cancelPic->raise();
        deletePic->raise();
        changePic->raise();
        searchBtn->raise();
        addBtn->raise();
        changeBtn->raise();
        deleteBtn->raise();
        backBtn->raise();

        retranslateUi(CityManageWindow);

        QMetaObject::connectSlotsByName(CityManageWindow);
    } // setupUi

    void retranslateUi(QWidget *CityManageWindow)
    {
        CityManageWindow->setWindowTitle(QCoreApplication::translate("CityManageWindow", "Form", nullptr));
        changePic->setText(QCoreApplication::translate("CityManageWindow", "TextLabel", nullptr));
        addPic->setText(QCoreApplication::translate("CityManageWindow", "TextLabel", nullptr));
        searchPic->setText(QCoreApplication::translate("CityManageWindow", "TextLabel", nullptr));
        searchBtn->setText(QCoreApplication::translate("CityManageWindow", "\346\237\245\350\257\242", nullptr));
        addBtn->setText(QCoreApplication::translate("CityManageWindow", "\345\242\236\345\212\240", nullptr));
        changeBtn->setText(QCoreApplication::translate("CityManageWindow", "\347\274\226\350\276\221", nullptr));
        deleteBtn->setText(QCoreApplication::translate("CityManageWindow", "\345\210\240\351\231\244", nullptr));
        backBtn->setText(QCoreApplication::translate("CityManageWindow", "\345\217\226\346\266\210", nullptr));
        cancelPic->setText(QCoreApplication::translate("CityManageWindow", "TextLabel", nullptr));
        deletePic->setText(QCoreApplication::translate("CityManageWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CityManageWindow: public Ui_CityManageWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CITYMANAGEWINDOW_H
