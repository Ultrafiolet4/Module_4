#ifndef LARGESEARCHMODEL_H
#define LARGESEARCHMODEL_H

#include <QDialog>
#include <QLabel>
#include <QTableView>
#include "dbmanager.h"
#include "dry.h"
#include "idialog.h"
#include "sqlitedbmanager.h"

namespace Ui {
class LargeSearchModel;
}

class LargeSearchModel : public QDialog
{
    Q_OBJECT

public:
    explicit LargeSearchModel(QWidget *parent = nullptr);
    QSqlTableModel *getModel();
    ~LargeSearchModel();

private slots:
    void on_check_pb_clicked();

    void on_zamovl_pb_clicked();

private:
    Ui::LargeSearchModel *ui;
    DBManager *db;
    QSqlTableModel *model;
    int row;
    IDialog *inter;
};

#endif // LARGESEARCHMODEL_H
