#include "newavto.h"
#include "ui_newavto.h"

Newavto::Newavto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Newavto)
{
    ui->setupUi(this);
    db = SqliteDBManager::getInstance();
    db->connectToDataBase();

    inter = new Dry();

    model = new QSqlTableModel(this, db->getDB());
    model->setTable("avto");
    model->setFilter("quality=\"Нова\"");
    ui->new_vw->setModel(model);
    model->select();

    ui->new_vw->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->new_vw->setColumnHidden(0, true);
    ui->new_vw->setColumnHidden(8, true);
    ui->new_vw->setColumnHidden(11, true);
    ui->new_vw->setColumnHidden(12, true);
    ui->new_vw->setColumnHidden(13, true);
    ui->new_vw->setColumnHidden(14, true);
    ui->new_vw->setColumnHidden(15, true);
    ui->new_vw->setColumnHidden(16, true);
    ui->new_vw->setColumnHidden(18, true);
    ui->new_vw->setColumnHidden(19, true);
    ui->new_vw->setColumnHidden(21, true);
    ui->new_vw->setColumnHidden(9, true);
}

Newavto::~Newavto()
{
    delete ui;
}

void Newavto::on_checknew_pb_clicked()
{
    row = ui->new_vw->selectionModel()->currentIndex().row();
    inter->createDialog(model, row);
}

void Newavto::on_zamovl_pb_clicked()
{
    db->insertZamovl(model, ui->new_vw->selectionModel()->currentIndex().row());
}
