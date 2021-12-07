#ifndef ADDNEW_H
#define ADDNEW_H

#include <QDialog>
#include "dbmanager.h"
#include "sqlitedbmanager.h"
#include "log.h"

namespace Ui {
class AddNew;
}

class AddNew : public QDialog
{
    Q_OBJECT

public:
    explicit AddNew(QWidget *parent = nullptr);
    ~AddNew();

private slots:
    void on_ok_pb_clicked();

    void on_cancel_pb_clicked();

private:
    Ui::AddNew *ui;
    DBManager *db;
    Log *log;
};

#endif // ADDNEW_H
