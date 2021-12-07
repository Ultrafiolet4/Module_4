#ifndef SQLITEDBMANAGER_H
#define SQLITEDBMANAGER_H

#include <QMessageBox>
#include <QSqlRecord>
#include <auto.h>
#include <dbmanager.h>

#define DATABASE_HOSTNAME "Avtosalon_host"
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

public:
    static SqliteDBManager *getInstance();

    bool createTables();
    void connectToDataBase();
    QSqlDatabase getDB();
    bool inserIntoTable(Auto *avto);
    bool selectData(QString tablename);
    bool addComboData(QString,QComboBox *temp);
    bool addModelData(QString pole,QString question,QString name,QComboBox *temp);
    bool addAdmin(Log*);
    virtual bool insertZamovl(QSqlTableModel *model, int row);
};

#endif // SQLITEDBMANAGER_H
