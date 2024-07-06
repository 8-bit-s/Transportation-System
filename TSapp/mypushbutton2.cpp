#include "mypushbutton2.h"

MyPushButton2::MyPushButton2(QWidget *parent)
    : QPushButton{parent}
{}

void MyPushButton2::enterEvent(QEvent *)
{
    setStyleSheet("background-color: rgb(55, 111, 255);");
}

void MyPushButton2::leaveEvent(QEvent *)
{
    setStyleSheet("background-color: rgb(21, 18, 255);");
}
