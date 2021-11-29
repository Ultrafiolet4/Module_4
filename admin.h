#ifndef ADMIN_H
#define ADMIN_H

#include <QWidget>
#include <QSqlQuery>
#include <QPainter>
#include <QSqlError>
#include <QDebug>

class QSqlTableModel;
class DBManager;

namespace Ui {
class Admin;
}

class Admin : public QWidget
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = nullptr);

    void paintEvent(QPaintEvent *);

    ~Admin();

private:
    Ui::Admin *ui;

    DBManager *db;
    QSqlTableModel *model_avto, *model_postach, *model_zmovn;
};

#endif // ADMIN_H
