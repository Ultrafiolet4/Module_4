#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QComboBox>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QVariantList>
#include "auto.h"
#include "log.h"

class DBManager
{
public:
    DBManager();

    virtual void connectToDataBase() = 0;
    virtual QSqlDatabase getDB() = 0;
    virtual bool inserIntoTable(Auto *) = 0;
    virtual bool selectData(QString) = 0 ;
    virtual bool addComboData(QString,QComboBox*) = 0 ;
    virtual bool addModelData(QString,QString,QString,QComboBox *)=0;
    virtual bool addAdmin(Log*)=0;
    virtual bool createTables() = 0;
    virtual bool insertZamovl(QSqlTableModel *, int) = 0;
};

#endif // DBMANAGER_H
