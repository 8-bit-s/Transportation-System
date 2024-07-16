#ifndef HOMEWINDOW_H
#define HOMEWINDOW_H

#include <QWidget>
#include "tag.h"

namespace Ui {
class HomeWindow;
}

class HomeWindow : public QWidget
{
    Q_OBJECT

public:
    explicit HomeWindow(QWidget *parent = nullptr);
    ~HomeWindow();

private:
    Ui::HomeWindow *ui;
};

#endif // HOMEWINDOW_H
