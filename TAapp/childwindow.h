#ifndef CHILDWINDOW_H
#define CHILDWINDOW_H

#include <QWidget>

namespace Ui {
class ChildWindow;
}

class ChildWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ChildWindow(QWidget *parent = nullptr);
    ~ChildWindow();
    Ui::ChildWindow *ui;

private:
private slots:
    void on_sureBtn_clicked();
signals:
    void add(QString city);
};

#endif // CHILDWINDOW_H
