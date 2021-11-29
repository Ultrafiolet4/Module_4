#include "admin.h"
#include <QSqlTableModel>
#include "dbmanager.h"
#include "sqlitedbmanager.h"
#include "ui_admin.h"

Admin::Admin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Admin)
{
    ui->setupUi(this);
    db = SqliteDBManager::getInstance();
    db->connectToDataBase();

    model_avto = new QSqlTableModel(this, db->getDB());
    model_avto->setTable("avto");
    ui->avto_vw->setModel(model_avto);
    model_avto->select();
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
