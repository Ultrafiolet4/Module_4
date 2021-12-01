#include "admin.h"
#include <QSqlTableModel>
#include "auto.h"
#include "dbmanager.h"
#include "sqlitedbmanager.h"
#include "ui_admin.h"

Admin::Admin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Admin)
{
    ui->setupUi(this);
    add_new=new Add();
    db = SqliteDBManager::getInstance();
    db->connectToDataBase();

    model_avto = new QSqlTableModel(this, db->getDB());
    model_avto->setTable("avto");
    ui->avto_vw->setModel(model_avto);
    model_avto->select();
    model_postach=new QSqlTableModel(this,db->getDB());
    model_postach->setTable("postachalnuk");
    ui->suplier_vw->setModel(model_postach);
    model_postach->select();

    model_zamovl=new QSqlTableModel(this,db->getDB());
    model_zamovl->setTable("zamovlennya");
    ui->order_vw->setModel(model_zamovl);
    model_zamovl->select();

}

void Admin::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawPixmap(this->rect(),QPixmap(":/img/customerred.png").scaled(this->size()));
}

Admin::~Admin()
{
    delete ui;
}

void Admin::on_add_pb_clicked()
{
      add_new->show();
}

void Admin::on_select_pb_clicked()
{
    db->selectData("avto");
    model_avto->select();
}


void Admin::on_delete_pb_clicked()
{
    model_avto->removeRow(row);
}


void Admin::on_avto_vw_clicked(const QModelIndex &index)
{
    row=index.row();
}

