#include "customer.h"
#include "ui_customer.h"

Customer::Customer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Customer)
{
    ui->setupUi(this);
    db=SqliteDBManager::getInstance();
    all_avto=new All();
    new_avto = new Newavto();
    old_avto = new OldAvto();
    small_search=new SmallSearch();
    large_search=new LargeSearch();

    db->addComboData("marka", ui->name_cb);

    model = new QSqlTableModel(this, db->getDB());
    model->setTable("avto");
}

void Customer::paintEvent(QPaintEvent *)
{
    styleButton=QString(
            "QAbstractButton {"
                    "color: rgb(255, 255, 255);"
                    "border: 2px solid rgb(100,200,200); "
                    "border-radius: 5px;"
                    "background: rgba(100,100,100,100);"
            "}"
            "QAbstractButton:pressed  {"
                    "color: rgb(255, 255, 255);"
                    "border: 4px solid rgb(90,90,90); "
                    "border-radius: 0px;"
                    "background: rgb(110,100,100);"
                    "}");

    ui->all_pb->setStyleSheet(styleButton);
    ui->old_pb->setStyleSheet(styleButton);
    ui->new_pb->setStyleSheet(styleButton);
    ui->greatsearch_pb->setStyleSheet(styleButton);
    ui->search_pb->setStyleSheet(styleButton);
    ui->exit_pb->setStyleSheet(styleButton);

    QPainter painter(this);
    painter.drawPixmap(this->rect(),QPixmap(":/img/customer.jpg").scaled(this->size()));
}

Customer::~Customer()
{
    delete ui;
}



void Customer::on_all_pb_clicked()
{
    all_avto->show();
}


void Customer::on_old_pb_clicked()
{
    old_avto->show();
}

void Customer::on_new_pb_clicked()
{
    new_avto->show();
}



void Customer::on_name_cb_activated(const QString &arg1)
{
    ui->model_cb->clear();
    ui->model_cb->addItem("Модель автомобіля");
    db->addModelData("model","marka","\""+arg1+"\"",ui->model_cb);
}


void Customer::on_search_pb_clicked()
{
    QString marka, model;
    marka="\""+ui->name_cb->currentText()+"\"";
    model="\""+ui->model_cb->currentText()+"\"";
    if(ui->name_cb->currentText()!="Марка автомобіля")
    {
        small_search->getModel()->setFilter("marka="+marka);
    }
    if(ui->model_cb->currentText()!="Модель автомобіля")
    {
        small_search->getModel()->setFilter("model="+model);
    }
    small_search->show();
}


void Customer::on_greatsearch_pb_clicked()
{
    large_search->show();
}


void Customer::on_exit_pb_clicked()
{
    this->close();
    emit firstWindow();
}
