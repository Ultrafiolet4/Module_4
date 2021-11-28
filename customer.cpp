#include "customer.h"
#include "ui_customer.h"

Customer::Customer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Customer)
{
    ui->setupUi(this);
    styleButton=QString(
            "QAbstractButton {"
                    "color: rgb(255, 255, 255);"
                    "border: 2px solid rgb(100,200,200); "
                    "border-radius: 5px;"
                    "background: rgba(100,100,100,100);"
            "}"
            "QAbstractButton:pressed  {"
                    "color: rgb(255, 255, 255);"
                    "border: 4px solid rgb(90,90,90); "
                    "border-radius: 0px;"
                    "background: rgb(110,100,100);"
                    "}");

    ui->all_pb->setStyleSheet(styleButton);
    ui->alternative_pb->setStyleSheet(styleButton);
    ui->old_pb->setStyleSheet(styleButton);
    ui->new_pb->setStyleSheet(styleButton);
    ui->greatsearch_pb->setStyleSheet(styleButton);
    ui->search_pb->setStyleSheet(styleButton);

    ui->first_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->last_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->first2_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->last2_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->firstprice_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->lastprice_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->first2price_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->last2price_lbl->setStyleSheet("color: rgb(255, 255, 255)");

    ui->first_sld->setMinimum(0);
    ui->lastprice_sld->setMinimum(0);
    ui->last_sld->setMinimum(0);
    ui->firstprice_sld->setMinimum(0);
    ui->first_sld->setMaximum(100);
    ui->last_sld->setMaximum(100);
    ui->firstprice_sld->setMaximum(100);
    ui->first_sld->setMaximum(100);

    connect(ui->first_sld, &QSlider::valueChanged, this, &Customer::colorizeFirst);
    connect(ui->firstprice_sld, &QSlider::valueChanged, this, &Customer::colorizeFirstPrice);
    connect(ui->last_sld, &QSlider::valueChanged, this, &Customer::colorizeLast);
    connect(ui->lastprice_sld, &QSlider::valueChanged, this, &Customer::colorizeLastPrice);

    colorizeFirst(ui->first_sld->value());
    colorizeFirstPrice(ui->firstprice_sld->value());
    colorizeLast(ui->last_sld->value());
    colorizeLastPrice(ui->lastprice_sld->value());
}

void Customer::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawPixmap(this->rect(),QPixmap(":/img/customer.jpg").scaled(this->size()));
}

void Customer::colorizeFirst(int color)
{
          int difference = ui->first_sld->maximum() - ui->first_sld->minimum();
          color = color - ui->first_sld->minimum();
          qreal position = qreal(color) / difference;
          QColor rgb = QColor::fromRgb(255 * position, 30, 180);
          ui->first_sld->setStyleSheet(QString("QSlider::handle:horizontal {background-color: %1;}").arg(rgb.name()));
}

void Customer::colorizeFirstPrice(int color)
{
          int difference = ui->firstprice_sld->maximum() - ui->firstprice_sld->minimum();
          color = color - ui->firstprice_sld->minimum();
          qreal position = qreal(color) / difference;
          QColor rgb = QColor::fromRgb(255 * position, 30, 180);
          ui->firstprice_sld->setStyleSheet(QString("QSlider::handle:horizontal {background-color: %1;}").arg(rgb.name()));
}

void Customer::colorizeLast(int color)
{
          int difference = ui->last_sld->maximum() - ui->last_sld->minimum();
          color = color - ui->last_sld->minimum();
          qreal position = qreal(color) / difference;
          QColor rgb = QColor::fromRgb(255 * position, 30, 180);
          ui->last_sld->setStyleSheet(QString("QSlider::handle:horizontal {background-color: %1;}").arg(rgb.name()));
}

void Customer::colorizeLastPrice(int color)
{
          int difference = ui->lastprice_sld->maximum() - ui->lastprice_sld->minimum();
          color = color - ui->lastprice_sld->minimum();
          qreal position = qreal(color) / difference;
          QColor rgb = QColor::fromRgb(255 * position, 30, 180);
          ui->lastprice_sld->setStyleSheet(QString("QSlider::handle:horizontal {background-color: %1;}").arg(rgb.name()));
}
Customer::~Customer()
{
    delete ui;
}




void Customer::on_alternative_pb_clicked()
{
    QDialog *alt_menu=new QDialog;

}

