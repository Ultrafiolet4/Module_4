#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QSqlDatabase>
#include <QVariantList>
#include "auto.h"

class DBManager
{
public:
    DBManager();

    virtual void connectToDataBase() = 0;
    virtual QSqlDatabase getDB() = 0;
    virtual bool inserIntoTable(Auto *) = 0;
    virtual bool selectData(QString) = 0 ;
};

#endif // DBMANAGER_H
