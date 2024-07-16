#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "homewindow.h"
#include "loginwindow.h"
#include "accountinfowindow.h"
#include "tripmanagewindow.h"
#include "citymanagewindow.h"
#include "accountmanagewindow.h"

#include <stack>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void goback();


private slots:
    void on_loginButton_clicked();
    void adminLogin();

    void on_homeButton_clicked();

    void on_tripButton_clicked();

    void on_cityButton_clicked();

    void on_accountButton_clicked();

    void on_backButton_clicked();

private:
    Ui::MainWindow *ui;
    TripManageWindow *tripmanagewindow;
    CityManageWindow *citymanagewindow;
    HomeWindow *homewindow;
    AccountManageWindow *accountmanagewindow;


};
#endif // MAINWINDOW_H
