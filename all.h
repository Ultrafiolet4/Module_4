#ifndef ALL_H
#define ALL_H

#include <QDialog>
#include "dbmanager.h"
#include <QSqlTableModel>
#include "sqlitedbmanager.h"
#include <QLabel>
#include <QDebug>
#include <QPainter>

namespace Ui {
class All;
}

class All : public QDialog
{
    Q_OBJECT

public:
    explicit All(QWidget *parent = nullptr);
    ~All();

private slots:
    void on_all_vw_clicked(const QModelIndex &index);

    void on_check_pb_clicked();

private:
    Ui::All *ui;
    DBManager *db;
    int row;
    QSqlTableModel *model;
};

#endif // ALL_H
