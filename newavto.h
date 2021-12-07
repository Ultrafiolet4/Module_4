#ifndef NEWAVTO_H
#define NEWAVTO_H

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
class Newavto;
}

class Newavto : public QDialog
{
    Q_OBJECT

public:
    explicit Newavto(QWidget *parent = nullptr);
    ~Newavto();

private slots:

    void on_checknew_pb_clicked();

    void on_zamovl_pb_clicked();

private:
    Ui::Newavto *ui;
    DBManager *db;
    int row;
    QSqlTableModel *model;
    IDialog *inter;
};

#endif // NEWAVTO_H
