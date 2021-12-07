#ifndef OLDAVTO_H
#define OLDAVTO_H

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
class OldAvto;
}

class OldAvto : public QDialog
{
    Q_OBJECT

public:
    explicit OldAvto(QWidget *parent = nullptr);
    ~OldAvto();

private slots:

    void on_old_pb_clicked();

    void on_zamovl_pb_clicked();

private:
    Ui::OldAvto *ui;
    DBManager *db;
    int row;
    QSqlTableModel *model;
    IDialog *inter;
};

#endif // OLDAVTO_H
