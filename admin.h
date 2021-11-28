#ifndef ADMIN_H
#define ADMIN_H

#include <QWidget>
#include <QSqlQuery>
#include <QPainter>
#include <QSqlError>
#include <QDebug>

class QSqlTableModel;
class DBManager;

namespace Ui {
class Admin;
}

class Admin : public QWidget
{
    Q_OBJECT

public:

    Admin(QWidget *parent = nullptr);
    explicit Admin(DBManager* dbManager,QWidget *parent = nullptr);

    void paintEvent(QPaintEvent *);

    ~Admin();

private:
    Ui::Admin *ui;

    DBManager *db;
    QSqlTableModel  *model;
};

#endif // ADMIN_H
