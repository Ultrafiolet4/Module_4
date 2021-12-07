#include "sqlitedbmanager.h"

#include <QDate>
#include <QDebug>
#include <QFile>
#include <QObject>
#include <QSqlError>
#include <QSqlQuery>

SqliteDBManager *SqliteDBManager::instance = nullptr;

SqliteDBManager::SqliteDBManager() {}

SqliteDBManager *SqliteDBManager::getInstance()
{
    if (instance == nullptr) {
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
    bool condition = true;

    if (!query.exec("CREATE TABLE avto(id INTEGER PRIMARY KEY AUTOINCREMENT,"
                    "marka VARCHAR(30),"
                    "model VARCHAR(30),"
                    "quality VARCHAR(80),"
                    "country VARCHAR(30),"
                    "type VARCHAR(30),"
                    "year INTEGER,"
                    "price INTEGER,"
                    "dtp VARCHAR(50),"
                    "pathpicture VARCHAR(100),"
                    "stan VARCHAR(50),"
                    "kpp VARCHAR(30),"
                    "fuel VARCHAR(30),"
                    "drive VARCHAR(30),"
                    "fuelcost REAL,"
                    "capacity REAL,"
                    "power INTEGER,"
                    "run INTEGER,"
                    "doors INTEGER,"
                    "places INTEGER,"
                    "color VARCHAR(30),"
                    "vincode VARCHAR(50))")) {
        qDebug() << "Problem with table avto!";
        qDebug() << query.lastError().text();
        condition = false;
    }

    if (!query.exec("CREATE TABLE zamovlennya(id INTEGER PRIMARY KEY AUTOINCREMENT,"
                    "marka VARCHAR(50),"
                    "model VARCHAR(50),"
                    "date DATE,"
                    "run INTEGER)")) {
        qDebug() << "Problem with table zamovlennya!";
        qDebug() << query.lastError().text();
        condition = false;
    }
    if (!query.exec("CREATE TABLE admin(id INTEGER PRIMARY KEY AUTOINCREMENT,"
                    "login VARCHAR(100),"
                    "password VARCHAR(100))")) {
        qDebug() << "Problem with table admin!";
        qDebug() << query.lastError().text();
        condition = false;
    }
    return condition;
}

/* Методи для підключення до бази даних
 * */
void SqliteDBManager::connectToDataBase()
{
    /* Перед підключенням до бази даних виконуємо перевірку на її існування.
     * В залежності від результату виконуємо відкриття бази даних або її відновлення
     * */
    if (QFile(DATABASE_NAME).exists()) {
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
    query.prepare(
        "INSERT INTO "
        "avto(marka,model,quality,country,type,year,price,dtp,pathpicture,stan,kpp,fuel,drive,"
        "fuelcost,capacity,power,"
        "run,doors,places,color,vincode) "
        "VALUES (:Marka,:Model,:Quality,:Country,:Type,:Year,:Price,:Dtp,:Pathpicture,"
        ":Stan,:Kpp,:Fuel,:Drive,:Fuelcost,:Capacity,:Power,:Run,:Doors,:Places,:Color,:Vincode)");
    query.bindValue(":Marka", avto->getMarka());
    query.bindValue(":Model", avto->getModel());
    query.bindValue(":Quality", avto->getQuality());
    query.bindValue(":Country", avto->getCountry());
    query.bindValue(":Type", avto->getType());
    query.bindValue(":Year", avto->getYear());
    query.bindValue(":Price", avto->getPrice());
    query.bindValue(":Dtp", avto->getDtp());
    query.bindValue(":Pathpicture", avto->getPathPicture());
    query.bindValue(":Stan", avto->getStan());
    query.bindValue(":Kpp", avto->getKpp());
    query.bindValue(":Fuel", avto->getFuel());
    query.bindValue(":Drive", avto->getDrive());
    query.bindValue(":Fuelcost", avto->getFuelcost());
    query.bindValue(":Capacity", avto->getCapacity());
    query.bindValue(":Power", avto->getPower());
    query.bindValue(":Run", avto->getRun());
    query.bindValue(":Doors", avto->getDoors());
    query.bindValue(":Places", avto->getPlaces());
    query.bindValue(":Vincode", avto->getVincode());
    query.bindValue(":Color", avto->getColor());

    if (!query.exec()) {
        qDebug() << query.lastError();
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

bool SqliteDBManager::addComboData(QString name, QComboBox *temp)
{
    QSqlQuery query;

    query.exec("SELECT DISTINCT " + name + " FROM avto");
    while (query.next()) {
        temp->addItem(query.value(0).toString());
    }
    return true;
}

bool SqliteDBManager::addModelData(QString pole, QString question, QString name, QComboBox *temp)
{
    QSqlQuery query;

    if (!query.exec("SELECT DISTINCT " + pole + " FROM avto WHERE " + question + " = " + name)) {
        qDebug() << query.lastError();
        qDebug() << query.lastQuery();
    }

    while (query.next()) {
        temp->addItem(query.value(0).toString());
    }
    return true;
}

bool SqliteDBManager::addAdmin(Log *temp)
{
    QSqlQuery query;
    query.prepare("INSERT INTO admin(login,password) VALUES(:Login,:Password)");
    query.bindValue(":Login", temp->getLogin());
    query.bindValue(":Password", temp->getPassword());
    if (!query.exec()) {
        qDebug() << query.lastError();
        qDebug() << query.lastQuery();
        return false;
    }
    return true;
}

bool SqliteDBManager::insertZamovl(QSqlTableModel *model, int row)
{
    QSqlQuery query;
    query.prepare("INSERT INTO zamovlennya(marka,model,date,run) VALUES(:Marka,:Model,:Date,:Run)");
    query.bindValue(":Marka", model->index(row, 1).data().toString());
    query.bindValue(":Model", model->index(row, 2).data().toString());
    query.bindValue(":Date", QDate::currentDate());
    query.bindValue(":Run", model->index(row, 17).data().toString());
    if (!query.exec()) {
        qDebug() << query.lastError();
        qDebug() << query.lastQuery();
        return false;
    }
    return true;
}
