#ifndef LARGESEARCH_H
#define LARGESEARCH_H

#include <QDialog>
#include <QPainter>
#include "dbmanager.h"
#include "largesearchmodel.h"
#include "sqlitedbmanager.h"

namespace Ui {
class LargeSearch;
}

class LargeSearch : public QDialog
{
    Q_OBJECT

public:
    explicit LargeSearch(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *);
    ~LargeSearch();

private slots:
    void on_search_pb_clicked();

    void Fuelcost();

    void Capacity();

    void Power();

    void Run();

    void Year();

    void Price();

private:
    Ui::LargeSearch *ui;
    DBManager *db;
    QSqlTableModel *model;
    LargeSearchModel *search;
};

#endif // LARGESEARCH_H
