#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    customer = new Customer();
    admin = new Admin();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_customer_pb_clicked()
{
    this->close();
    customer->show();
}


void MainWindow::on_admin_pb_clicked()
{
    this->close();
    admin->show();
}

