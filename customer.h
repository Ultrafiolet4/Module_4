#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <QWidget>
#include <QPainter>
#include <QEvent>
#include <QDialog>

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

private:
    Ui::Customer *ui;
    QString styleButton;
    QColor from,to;

    void colorizeFirst(int color);
    void colorizeFirstPrice(int color);
    void colorizeLast(int color);
    void colorizeLastPrice(int color);
};

#endif // CUSTOMER_H
