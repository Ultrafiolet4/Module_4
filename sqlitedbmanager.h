#ifndef SQLITEDBMANAGER_H
#define SQLITEDBMANAGER_H

#include <auto.h>
#include <dbmanager.h>

#define DATABASE_HOSTNAME   "Avtosalon_host"
#define DATABASE_NAME       "Avtosalon.db"

class SqliteDBManager : public DBManager
{
private:
    QSqlDatabase    db;

    static SqliteDBManager* instance;

    SqliteDBManager();

    bool openDataBase();
    bool restoreDataBase();
    void closeDataBase();
    bool createTables();
public:

    static SqliteDBManager* getInstance();

    void connectToDataBase();
    QSqlDatabase getDB();
    bool inserIntoTable(Auto avto);
};

#endif // SQLITEDBMANAGER_H
