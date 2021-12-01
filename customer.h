#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <QWidget>
#include <QPainter>
#include <QEvent>
#include <QDialog>
#include "dbmanager.h"
#include "all.h"


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

private slots:


    void on_alternative_pb_clicked();


    void on_all_pb_clicked();

private:
    Ui::Customer *ui;
    QString styleButton;
    QColor from,to;
    DBManager *db;
    All *all_avto;

    void colorizeFirst(int color);
    void colorizeFirstPrice(int color);
    void colorizeLast(int color);
    void colorizeLastPrice(int color);

    void setValue_fromyear(int value);
    void setValue_toyear(int value);
    void setValue_fromprice(int value);
    void setValue_toprice(int value);
};

#endif // CUSTOMER_H
