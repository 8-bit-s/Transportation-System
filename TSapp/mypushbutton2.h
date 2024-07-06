#ifndef MYPUSHBUTTON2_H
#define MYPUSHBUTTON2_H

#include <QPushButton>

// 遇到鼠标事件背景颜色发生改变
class MyPushButton2 : public QPushButton
{
    Q_OBJECT
public:
    explicit MyPushButton2(QWidget *parent = nullptr);
    //鼠标进入事件
    void enterEvent(QEvent *);
    //鼠标离开事件
    void leaveEvent(QEvent *);

signals:
};

#endif // MYPUSHBUTTON2_H
