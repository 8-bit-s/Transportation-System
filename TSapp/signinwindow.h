#ifndef SIGNINWINDOW_H
#define SIGNINWINDOW_H

#include <QDialog>

namespace Ui {
class SignInWindow;
}

class SignInWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SignInWindow(QWidget *parent = nullptr);
    ~SignInWindow();

signals:
    // 重开主页面的信号
    void ReshowMainWindow();
private:
    Ui::SignInWindow *ui;
    // 发送信号给主窗口，关闭子窗口
    void CloseSignInWindow();
};

#endif // SIGNINWINDOW_H
