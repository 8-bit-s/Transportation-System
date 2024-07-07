#ifndef CITYMANAGEWINDOW_H
#define CITYMANAGEWINDOW_H

#include <QWidget>

namespace Ui {
class CityManageWindow;
}

class CityManageWindow : public QWidget
{
    Q_OBJECT

public:
    explicit CityManageWindow(QWidget *parent = nullptr);
    ~CityManageWindow();

private:
    Ui::CityManageWindow *ui;
};

#endif // CITYMANAGEWINDOW_H
