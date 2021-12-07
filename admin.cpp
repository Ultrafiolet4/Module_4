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

    model_zamovl=new QSqlTableModel(this,db->getDB());
    model_zamovl->setTable("zamovlennya");
    ui->order_vw->setModel(model_zamovl);
    model_zamovl->select();

    model_admin=new QSqlTableModel(this,db->getDB());
    model_admin->setTable("admin");
    ui->admin_vw->setModel(model_admin);
    model_admin->select();

    ui->admin_vw->setColumnHidden(2, true);
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


void Admin::on_exit_pb_clicked()
{
    this->close();
    emit firstWindow();
}

void Admin::on_deleteadm_pb_clicked()
{
    row = ui->admin_vw->selectionModel()->currentIndex().row();
    model_admin->removeRow(row);
}

void Admin::on_selectadm_pb_clicked()
{
    db->selectData("admin");
    model_admin->select();
}

void Admin::on_delete_pb_3_clicked()
{
    model_zamovl->removeRow(ui->order_vw->selectionModel()->currentIndex().row());
}

void Admin::on_select_pb_3_clicked()
{
    db->selectData("zamovlennya");
    model_zamovl->select();
}
