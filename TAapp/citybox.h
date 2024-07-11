#ifndef CITYBOX_H
#define CITYBOX_H

#include <QWidget>

class CityManageWindow;
namespace Ui {
class CityBox;
}

class CityBox : public QWidget
{
    Q_OBJECT

public:
    explicit CityBox(QWidget *parent = nullptr);
    CityBox(QString city, QWidget *parent = nullptr);
    ~CityBox();
    Ui::CityBox *ui;

private:
private slots:
    void on_cityBtn_clicked();

signals:
    void changeable();
};

#endif // CITYBOX_H
