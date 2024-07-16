#ifndef TRIPUNIT_H
#define TRIPUNIT_H

#include <QWidget>
#include <QLabel.h>
#include<QMessageBox>
#include "TripTable.h"

namespace Ui {
class tripUnit;
}

class tripUnit : public QWidget
{
    Q_OBJECT

public:
    explicit tripUnit(QWidget *parent = nullptr);
    void setTrip(Trip &trip);
    void setIndex(int i){
        index=i;
    }
    ~tripUnit();
    int index;
    bool is_checked=false;

signals:
    void clicked(tripUnit *t);

protected:
    void mousePressEvent(QMouseEvent *event) override
    {
        emit clicked(this);
    }

private:
    Ui::tripUnit *ui;

    QLabel *typepicLabel;
    QLabel *arrowpic;
    QLabel *city1;
    QLabel *city2;
    QLabel *cost;
    QLabel *distance;
    QLabel *time;
};

#endif // TRIPUNIT_H
