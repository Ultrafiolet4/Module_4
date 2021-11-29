#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QSqlDatabase>
#include <QVariantList>

class DBManager
{
public:
    DBManager();

    virtual void connectToDataBase() = 0;
    virtual QSqlDatabase getDB() = 0;
//    virtual bool inserIntoTable(const QString tableName, const QVariantList &data) = 0;
};

#endif // DBMANAGER_H
