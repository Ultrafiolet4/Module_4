#include "oldavto.h"
#include "ui_oldavto.h"

OldAvto::OldAvto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OldAvto)
{
    ui->setupUi(this);
    db = SqliteDBManager::getInstance();
    db->connectToDataBase();

    inter = new Dry();
    model = new QSqlTableModel(this, db->getDB());
    model->setTable("avto");
    model->setFilter("quality=\"Б-в\"");

    ui->old_vw->setModel(model);
    model->select();

    ui->old_vw->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->old_vw->setColumnHidden(0, true);
    ui->old_vw->setColumnHidden(8, true);
    ui->old_vw->setColumnHidden(11, true);
    ui->old_vw->setColumnHidden(12, true);
    ui->old_vw->setColumnHidden(13, true);
    ui->old_vw->setColumnHidden(14, true);
    ui->old_vw->setColumnHidden(15, true);
    ui->old_vw->setColumnHidden(16, true);
    ui->old_vw->setColumnHidden(18, true);
    ui->old_vw->setColumnHidden(19, true);
    ui->old_vw->setColumnHidden(21, true);
    ui->old_vw->setColumnHidden(9, true);
}

OldAvto::~OldAvto()
{
    delete ui;
}

void OldAvto::on_old_pb_clicked()
{
    row = ui->old_vw->selectionModel()->currentIndex().row();
    qDebug() << row;
    inter->createDialog(model, row);
}

void OldAvto::on_zamovl_pb_clicked()
{
    db->insertZamovl(model, ui->old_vw->selectionModel()->currentIndex().row());
}
