#ifndef ADMIN_H
#define ADMIN_H

#include <QComboBox>
#include <QDebug>
#include <QDialog>
#include <QFileDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPainter>
#include <QPushButton>
#include <QScrollArea>
#include <QSqlError>
#include <QSqlQuery>
#include <QWidget>

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

private slots:
    void on_add_pb_clicked();

private:
    Ui::Admin *ui;

    DBManager *db;
    QSqlTableModel *model_avto, *model_postach, *model_zamovl;

};

#endif // ADMIN_H
