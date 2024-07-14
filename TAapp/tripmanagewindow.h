#ifndef TRIPMANAGEWINDOW_H
#define TRIPMANAGEWINDOW_H

#include <QWidget>

namespace Ui {
class TripManageWindow;
}

class TripManageWindow : public QWidget
{
    Q_OBJECT

public:
    explicit TripManageWindow(QWidget *parent = nullptr);
    ~TripManageWindow();

private:
    Ui::TripManageWindow *ui;
};

#endif // TRIPMANAGEWINDOW_H
