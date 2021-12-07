#include "smallsearch.h"
#include "ui_smallsearch.h"

SmallSearch::SmallSearch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SmallSearch)
{
    ui->setupUi(this);
    db = SqliteDBManager::getInstance();
    inter = new Dry();
    model = new QSqlTableModel(this, db->getDB());
    model->setTable("avto");
    ui->small_vw->setModel(model);
    model->select();

    ui->small_vw->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->small_vw->setColumnHidden(0, true);
    ui->small_vw->setColumnHidden(8, true);
    ui->small_vw->setColumnHidden(11, true);
    ui->small_vw->setColumnHidden(12, true);
    ui->small_vw->setColumnHidden(13, true);
    ui->small_vw->setColumnHidden(14, true);
    ui->small_vw->setColumnHidden(15, true);
    ui->small_vw->setColumnHidden(16, true);
    ui->small_vw->setColumnHidden(18, true);
    ui->small_vw->setColumnHidden(19, true);
    ui->small_vw->setColumnHidden(21, true);
    ui->small_vw->setColumnHidden(9, true);
}

QSqlTableModel *SmallSearch::getModel()
{
    return model;
}

QTableView *SmallSearch::getTable()
{
    return ui->small_vw;
}

SmallSearch::~SmallSearch()
{
    delete ui;
}
void SmallSearch::on_small_pb_clicked()
{
    qDebug() << model->index(2, row).data().toString();
    row = ui->small_vw->selectionModel()->currentIndex().row();
    inter->createDialog(model, row);
}

void SmallSearch::on_zamovl_pb_clicked()
{
    db->insertZamovl(model, ui->small_vw->selectionModel()->currentIndex().row());
}
