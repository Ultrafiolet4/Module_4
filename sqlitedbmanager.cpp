#include "sqlitedbmanager.h"

#include <QObject>
#include <QSqlQuery>
#include <QSqlError>
#include <QFile>
#include <QDate>
#include <QDebug>

SqliteDBManager* SqliteDBManager::instance = nullptr;

SqliteDBManager::SqliteDBManager(){

}

SqliteDBManager* SqliteDBManager::getInstance()
{
    if(instance == nullptr){
        instance = new SqliteDBManager;
    }
    return instance;
}

bool SqliteDBManager::openDataBase()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(DATABASE_NAME);
    db.setHostName(DATABASE_HOSTNAME);
    if (db.open()) {
        return true;
    } else {
        return false;
    }
}

bool SqliteDBManager::restoreDataBase()
{
    if (this->openDataBase()) {
        if (!this->createTables()) {
            return false;
        } else {
            return true;
        }
    } else {
        qDebug() << "Error!";
        return false;
    }
}

bool SqliteDBManager::createTables()
{
    QSqlQuery query;

    if (!query.exec("CREATE TABLE avto(id INTEGER PRIMARY KEY AUTOINCREMENT,"
                    "marka VARCHAR(30),"
                    "model VARCHAR(30),"
                    "quality VARCHAR(80),"
                    "country VARCHAR(30),"
                    "type VARCHAR(30),"
                    "price INTEGER,"
                    "dtp VARCHAR(50),"
                    "pathpicture VARCHAR(100),"
                    "stan VARCHAR(50),"
                    "kpp VARCHAR(30),"
                    "fuel VARCHAR(30),"
                    "drive VARCHAR(30),"
                    "fuelcost INTEGER,"
                    "capacity INTEGER,"
                    "power INTEGER,"
                    "run INTEGER,"
                    "doors INTEGER,"
                    "places INTEGER,"
                    "color VARCHAR(30),"
                    "vincode VARCHAR(50))")) {
        qDebug() << "Problem with table avto!";
        qDebug() << query.lastError().text();
        return false;
    }

    if (!query.exec("CREATE TABLE postachalnuk(id INTEGER PRIMARY KEY AUTOINCREMENT,"
                    "nazva VARCHAR(50),"
                    "country VARCHAR(50),"
                    "city VARCHAR(50),"
                    "adress VARCHAR(50),"
                    "phone INTEGER,"
                    "date VARCHAR(50),"
                    "pathpicture VARCHAR(100))")) {
        qDebug() << "Problem with table postachalnuk!";
        qDebug() << query.lastError().text();
        return false;
    }

    if (!query.exec("CREATE TABLE zamovlennya(id INTEGER PRIMARY KEY AUTOINCREMENT,"
                    "marka VARCHAR(30),"
                    "model VARCHAR(30),"
                    "quality VARCHAR(80),"
                    "country VARCHAR(30),"
                    "type VARCHAR(30),"
                    "price INTEGER,"
                    "dtp VARCHAR(50),"
                    "pathpicture VARCHAR(100),"
                    "stan VARCHAR(50),"
                    "kpp VARCHAR(30),"
                    "fuel VARCHAR(30),"
                    "drive VARCHAR(30),"
                    "fuelcost INTEGER,"
                    "capacity INTEGER,"
                    "power INTEGER,"
                    "run INTEGER,"
                    "doors INTEGER,"
                    "places INTEGER,"
                    "color VARCHAR(30),"
                    "vincode VARCHAR(50))")) {
        qDebug() << "Problem with table zamovlennya!";
        qDebug() << query.lastError().text();
        return false;
    }
    return true;
}

/* Методи для підключення до бази даних
 * */
void SqliteDBManager::connectToDataBase()
{
    /* Перед підключенням до бази даних виконуємо перевірку на її існування.
     * В залежності від результату виконуємо відкриття бази даних або її відновлення
     * */
    if(QFile(DATABASE_NAME).exists()){
        this->openDataBase();
    } else {
        this->restoreDataBase();
    }
}

QSqlDatabase SqliteDBManager::getDB()
{
    return db;
}

bool SqliteDBManager::inserIntoTable(Auto *avto)
{
    QSqlQuery query;
    query.prepare("INSERT INTO "
                  "avto(marka,model,quality,country,type,price,dtp,pathpicture,stan,kpp,fuel,drive,"
                  "fuelcost,capacity,power,"
                  "run,doors,places,color,vincode) "
                  "VALUES (:Marka,:Model,:Quality,:Country,:Type,:Price,:Dtp,:Pathpicture,"
                  ":Stan,:Kpp,:Fuel,:Drive,:Fuelcost,:Capacity,:Power,:Run,:Doors,:Places,:Color,:Vincode)");
    query.bindValue(":Marka", avto->getMarka());
    query.bindValue(":Model", avto->getModel());
    query.bindValue(":Quality", avto->getQuality());
    query.bindValue(":Country", avto->getCountry());
    query.bindValue(":Type", avto->getType());
    query.bindValue(":Price", avto->getPrice());
    query.bindValue(":Dtp", avto->getDtp());
    query.bindValue(":Pathpicture", avto->getPathPicture());
    query.bindValue(":Stan", avto->getStan());
    query.bindValue(":Kpp", avto->getKpp());
    query.bindValue(":Fuel", avto->getFuel());
    query.bindValue(":Drive", avto->getDrive());
    query.bindValue(":Fuelcost",avto->getFuelcost());
    query.bindValue(":Capacity", avto->getCapacity());
    query.bindValue(":Power", avto->getPower());
    query.bindValue(":Run", avto->getRun());
    query.bindValue(":Doors", avto->getDoors());
    query.bindValue(":Places", avto->getPlaces());
    query.bindValue(":Vincode", avto->getVincode());
    query.bindValue(":Color", avto->getColor());


    if(!query.exec())
    {
        qDebug()<<query.lastError();
        return false;
    }

    return true;
}

bool SqliteDBManager::selectData(QString tablename)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM " + tablename);
    return true;
}
