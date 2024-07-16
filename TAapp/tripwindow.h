#ifndef TRIPWINDOW_H
#define TRIPWINDOW_H

#include <QWidget>
#include <QLabel>
#include <QLayout>
#include <QPushButton>
#include <QCheckBox>
#include <QButtonGroup>
#include <QLineEdit>
#include "TripTable.h"

namespace Ui {
class TripWindow;
}

class TripWindow : public QWidget
{
    Q_OBJECT

public:
    explicit TripWindow(QWidget *parent = nullptr);
    ~TripWindow();

public slots:
    void updateWindow();
    void createWindow(int i,Trip trip);
    void delete_cliched();
    void ensure_clicked();
    void begin_modify();
    void end_modyfy(){
        emit modify_trip(index,trip);
    };
    void hide_read();
    void hide_write();
    void show_read();
    void show_write();

signals:
    void modify_trip(int i,Trip trip);
    void delete_trip(int i);


private:
    Ui::TripWindow *ui;
    Trip trip;
    int index;
    QGridLayout *typeLay;
    QCheckBox *checkbox1;

    QCheckBox *checkbox2;

    QButtonGroup *checkboxGroup; // 创建按钮组用于单选
    QLabel *start_text;
    QLabel *start_label;
    QLabel *end_text;
    QLabel *end_label;
    QLabel *time_text;
    QLabel *time_label;
    QLabel *cost_text;
    QLabel *cost_label;
    QLabel *dis_text;
    QLabel *dis_label;
    QLabel *type_text;
    QLabel *type_label;
    QPushButton* modify_button;
    QPushButton* delete_button;
    QGridLayout *pGridLay;

    QComboBox *start_box;
    QComboBox *end_box;
    QLineEdit *hour_edit;
    QLineEdit *min_edit;
    QLineEdit *cost_edit;
    QLineEdit *dis_edit;
    QPushButton* ensure_button;


};

#endif // TRIPWINDOW_H
