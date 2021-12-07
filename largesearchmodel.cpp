#include "largesearchmodel.h"
#include "ui_largesearchmodel.h"

LargeSearchModel::LargeSearchModel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LargeSearchModel)
{
    ui->setupUi(this);
    db = SqliteDBManager::getInstance();
    inter = new Dry();
    model = new QSqlTableModel(this, db->getDB());
    model->setTable("avto");
    ui->large_vw->setModel(model);
    model->select();
}

QSqlTableModel *LargeSearchModel::getModel()
{
    return model;
}

LargeSearchModel::~LargeSearchModel()
{
    delete ui;
}

void LargeSearchModel::on_check_pb_clicked()
{
    inter->createDialog(model, ui->large_vw->selectionModel()->currentIndex().row());
}

void LargeSearchModel::on_zamovl_pb_clicked()
{
    db->insertZamovl(model, ui->large_vw->selectionModel()->currentIndex().row());
}
