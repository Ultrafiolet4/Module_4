#ifndef ALL_H
#define ALL_H

#include <QDebug>
#include <QDialog>
#include <QLabel>
#include <QPainter>
#include <QSqlTableModel>
#include "dbmanager.h"
#include "dry.h"
#include "idialog.h"
#include "sqlitedbmanager.h"

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

    void on_zamovl_pb_clicked();

private:
    Ui::All *ui;
    DBManager *db;
    int row;
    QSqlTableModel *model;
    IDialog *inter;
};

#endif // ALL_H
