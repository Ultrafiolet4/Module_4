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
