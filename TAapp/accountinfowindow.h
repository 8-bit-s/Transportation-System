#ifndef ACCOUNTINFOWINDOW_H
#define ACCOUNTINFOWINDOW_H

#include <QWidget>

namespace Ui {
class AccountInfoWindow;
}

class AccountInfoWindow : public QWidget
{
    Q_OBJECT

public:
    explicit AccountInfoWindow(QWidget *parent = nullptr);
    ~AccountInfoWindow();

private:
    Ui::AccountInfoWindow *ui;
};

#endif // ACCOUNTINFOWINDOW_H
