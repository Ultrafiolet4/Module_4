#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <QCheckBox>
#include <QDialog>
#include <QEvent>
#include <QPainter>
#include <QSqlQuery>
#include <QWidget>
#include "all.h"
#include "dbmanager.h"
#include "largesearch.h"
#include "newavto.h"
#include "oldavto.h"
#include "smallsearch.h"
#include "sqlitedbmanager.h"

namespace Ui {
class Customer;
}

class Customer : public QWidget
{
    Q_OBJECT

public:
    explicit Customer(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *);
    ~Customer();

signals:
    void firstWindow();

private slots:


    void on_all_pb_clicked();

    void on_old_pb_clicked();

    void on_new_pb_clicked();

    void on_name_cb_activated(const QString &arg1);

    void on_search_pb_clicked();

    void on_greatsearch_pb_clicked();

    void on_exit_pb_clicked();

private:
    Ui::Customer *ui;
    QString styleButton;
    DBManager *db;
    All *all_avto;
    Newavto *new_avto;
    OldAvto *old_avto;
    SmallSearch *small_search;
    LargeSearch *large_search;
    QSqlTableModel *model;
};

#endif // CUSTOMER_H

