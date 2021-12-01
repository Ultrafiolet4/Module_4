#ifndef ADMIN_H
#define ADMIN_H

#include <QDebug>
#include <QDialog>
#include <QPainter>
#include <QSqlError>
#include <QSqlQuery>
#include <QWidget>
#include "add.h"
#include "customer.h"

class QSqlTableModel;
class DBManager;

namespace Ui {
class Admin;
}

class Admin : public QWidget
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = nullptr);

    void paintEvent(QPaintEvent *);

    ~Admin();

private slots:
    void on_add_pb_clicked();

    void on_select_pb_clicked();

    void on_delete_pb_clicked();

    void on_avto_vw_clicked(const QModelIndex &index);

private:
    Ui::Admin *ui;

    DBManager *db;
    QSqlTableModel *model_avto, *model_postach, *model_zamovl;
    Add *add_new;
    int row;
};

#endif // ADMIN_H
