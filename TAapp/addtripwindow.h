#ifndef ADDTRIPWINDOW_H
#define ADDTRIPWINDOW_H

#include "TripTable.h"
#include <QWidget>
#include <QLabel>
#include <QLayout>
#include <QPushButton>
#include <QCheckBox>
#include <QButtonGroup>
#include <QLineEdit>


namespace Ui {
class AddTripWindow;
}

class AddTripWindow : public QWidget
{
    Q_OBJECT

public:
    explicit AddTripWindow(QWidget *parent = nullptr);
    ~AddTripWindow();

signals:
    void add_trip(Trip trip);

public slots:
    void ensure_clicked();

private:
    Ui::AddTripWindow *ui;
    QGridLayout *pGridLay;
    QGridLayout *typeLay;
    QCheckBox *checkbox1;
    QCheckBox *checkbox2;
    QButtonGroup *checkboxGroup; // 创建按钮组用于单选
    QLabel *start_label;
    QLabel *end_label;
    QLabel *time_label;
    QLabel *cost_label;
    QLabel *dis_label;
    QComboBox *start_box;
    QComboBox *end_box;
    QLineEdit *hour_edit;
    QLineEdit *min_edit;
    QLineEdit *cost_edit;
    QLineEdit *dis_edit;
    QPushButton* ensure_button;
};

#endif // ADDTRIPWINDOW_H
