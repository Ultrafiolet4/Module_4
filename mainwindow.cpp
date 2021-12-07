#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    customer = new Customer();
    admin = new Admin();
    dialog=new AddNew();
    db = SqliteDBManager::getInstance();

    db->createTables();
    model = new QSqlTableModel(this, db->getDB());
    model->setTable("admin");

    connect(customer, &Customer::firstWindow, this, &MainWindow::show);
    connect(admin, &Admin::firstWindow, this, &MainWindow::show);
    ui->password_led->setEchoMode(QLineEdit::Password);
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
    QString temp1 = ui->login_led->text();
    QString temp2 = ui->password_led->text();

    QSqlQuery query;
    QSqlRecord rec;
    QMessageBox msg;
    if (!query.exec("SELECT * FROM admin")) {
        qDebug() << query.lastError();
    }
    rec = query.record();
    query.next();
    if (query.value(rec.indexOf("login")).toString() != temp1) {
        msg.setText("Login incorrect!!");
        msg.exec();
    } else if (query.value(rec.indexOf("password")).toString() != temp2) {
        msg.setText("Password incorrect!!");
        msg.exec();
    } else {
        ui->login_led->setText("");
        ui->password_led->setText("");
        this->close();
        admin->show();
    }
}

void MainWindow::on_newadm_pb_clicked()
{
    dialog->show();
}

