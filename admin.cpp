#include "admin.h"
#include "ui_admin.h"
#include "dbmanager.h"
#include "sqlitedbmanager.h"

Admin::Admin(DBManager* dbManager,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Admin),
    db(dbManager)
{
    ui->setupUi(this);
    db = SqliteDBManager::getInstance();
    db->connectToDataBase();

    QSqlQuery *query=new QSqlQuery();

    if(!query->exec("CREATE TABLE avto(id INTEGER PRIMARY KEY AUTOINCREMENT,"
                   "marka TEXT,"
                   "model TEXT,"
                   "quality TEXT,"
                   "country TEXT,"
                   "type TEXT,"
                   "price INTEGER,"
                   "dtp TEXT,"
                   "stan TEXT,"
                   "kpp TEXT,"
                   "fuel TEXT,"
                   "drive TEXT,"
                   "fuelcost INTEGER,"
                   "capacity INTEGER,"
                   "power INTEGER,"
                   "run INTEGER,"
                   "doors INTEGER,"
                   "places INTEGER,"
                   "color TEXT,"
                   "vincode TEXT)"))
    {
        qDebug()<<query->lastError().text();
    }


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
