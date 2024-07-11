#ifndef ADDWINDOW_H
#define ADDWINDOW_H

#include <QWidget>

namespace Ui {
class AddWindow;
}

class AddWindow : public QWidget
{
    Q_OBJECT

public:
    explicit AddWindow(QWidget *parent = nullptr);
    ~AddWindow();
    Ui::AddWindow *ui;

private:
private slots:
    void on_addBtn_clicked();
signals:
    void add(QString city);
};

#endif // ADDWINDOW_H
