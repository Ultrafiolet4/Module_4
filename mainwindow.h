#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "customer.h"
#include "admin.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_customer_pb_clicked();

    void on_admin_pb_clicked();

private:
    Ui::MainWindow *ui;
    Customer *customer;
    Admin *admin;
};
#endif // MAINWINDOW_H