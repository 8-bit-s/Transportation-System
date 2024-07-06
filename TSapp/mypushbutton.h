#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QPushButton>

// 遇到鼠标事件字体颜色发生改变
class MyPushButton : public QPushButton
{
    Q_OBJECT
public:
    explicit MyPushButton(QWidget *parent = nullptr);
    //鼠标进入事件
    void enterEvent(QEvent *);
    //鼠标离开事件
    void leaveEvent(QEvent *);

signals:
};

#endif // MYPUSHBUTTON_H
