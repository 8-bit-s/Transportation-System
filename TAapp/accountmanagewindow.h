#ifndef ACCOUNTMANAGEWINDOW_H
#define ACCOUNTMANAGEWINDOW_H

#include <QWidget>

namespace Ui {
class AccountManageWindow;
}

class AccountManageWindow : public QWidget
{
    Q_OBJECT

public:
    explicit AccountManageWindow(QWidget *parent = nullptr);
    ~AccountManageWindow();

private:
    Ui::AccountManageWindow *ui;
};

#endif // ACCOUNTMANAGEWINDOW_H
