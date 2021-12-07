#ifndef SMALLSEARCH_H
#define SMALLSEARCH_H

#include <QDebug>
#include <QDialog>
#include <QLabel>
#include <QPainter>
#include <QSqlTableModel>
#include <QTableView>
#include "dbmanager.h"
#include "dry.h"
#include "idialog.h"
#include "sqlitedbmanager.h"

namespace Ui {
class SmallSearch;
}

class SmallSearch : public QDialog
{
    Q_OBJECT

public:
    explicit SmallSearch(QWidget *parent = nullptr);
    QSqlTableModel* getModel();
    QTableView *getTable();
    ~SmallSearch();

private slots:

    void on_small_pb_clicked();

    void on_zamovl_pb_clicked();

private:
    Ui::SmallSearch *ui;
    DBManager *db;
    int row;
    QSqlTableModel *model;
    IDialog *inter;
};

#endif // SMALLSEARCH_H
