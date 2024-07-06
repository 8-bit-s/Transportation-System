#include "mypushbutton.h"
#include <QString>

MyPushButton::MyPushButton(QWidget *parent)
    : QPushButton{parent}
{}

void MyPushButton::enterEvent(QEvent *)
{
    setStyleSheet("color: rgb(0, 255, 255);");
}

void MyPushButton::leaveEvent(QEvent *)
{
    setStyleSheet("color: rgb(22, 48, 255);");
}
