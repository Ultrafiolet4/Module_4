#include "all.h"
#include "ui_all.h"

All::All(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::All)
{
    ui->setupUi(this);
    db=SqliteDBManager::getInstance();
    db->connectToDataBase();

    inter = new Dry();

    model = new QSqlTableModel(this, db->getDB());
    model->setTable("avto");
    ui->all_vw->setModel(model);
    model->select();

    ui->all_vw->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->all_vw->setColumnHidden(0,true);
    ui->all_vw->setColumnHidden(8, true);
    ui->all_vw->setColumnHidden(11, true);
    ui->all_vw->setColumnHidden(12, true);
    ui->all_vw->setColumnHidden(13, true);
    ui->all_vw->setColumnHidden(14, true);
    ui->all_vw->setColumnHidden(15, true);
    ui->all_vw->setColumnHidden(16, true);
    ui->all_vw->setColumnHidden(18, true);
    ui->all_vw->setColumnHidden(19, true);
    ui->all_vw->setColumnHidden(21, true);
    ui->all_vw->setColumnHidden(9, true);
}

All::~All()
{
    delete ui;
}

void All::on_all_vw_clicked(const QModelIndex &index)
{
    row=index.row();
}


void All::on_check_pb_clicked()
{
    inter->createDialog(model, row);
}

void All::on_zamovl_pb_clicked()
{
    db->insertZamovl(model, row);
}
