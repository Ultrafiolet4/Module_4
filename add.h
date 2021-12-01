#ifndef ADD_H
#define ADD_H

#include <QDialog>
#include <QPainter>
#include "auto.h"
#include "sqlitedbmanager.h"
#include <QFileDialog>
#include <QDebug>

namespace Ui {
class Add;
}

class Add : public QDialog
{
    Q_OBJECT

public:
    explicit Add(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *);
    ~Add();

private slots:
    void on_cancel_pb_clicked();

    void on_ok_pb_clicked();

    void on_pathpicture_pb_clicked();

private:
    Ui::Add *ui;
    Auto *temp;
    DBManager *db;
};

#endif // ADD_H
