#include "largesearch.h"
#include "ui_largesearch.h"

LargeSearch::LargeSearch(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LargeSearch)
{
    ui->setupUi(this);
    db = SqliteDBManager::getInstance();
    search = new LargeSearchModel();
    ui->quality_cb->addItem("");
    ui->type_cb->addItem("");
    ui->country_cb->addItem("");
    ui->dtp_cb->addItem("");
    ui->stan_cb->addItem("");
    ui->fuel_cb->addItem("");
    ui->kpp_cb->addItem("");
    ui->doors_cb->addItem("");
    ui->places_cb->addItem("");
    ui->color_cb->addItem("");
    ui->drive_cb->addItem("");

    db->addComboData("quality", ui->quality_cb);
    db->addComboData("type", ui->type_cb);
    db->addComboData("country", ui->country_cb);
    db->addComboData("dtp", ui->dtp_cb);
    db->addComboData("stan", ui->stan_cb);
    db->addComboData("fuel", ui->fuel_cb);
    db->addComboData("kpp", ui->kpp_cb);
    db->addComboData("drive", ui->drive_cb);
    db->addComboData("doors", ui->doors_cb);
    db->addComboData("places", ui->places_cb);
    db->addComboData("color", ui->color_cb);

    model = new QSqlTableModel(this, db->getDB());
    model->setTable("avto");

    connect(ui->fuelcost_rb, &QRadioButton::clicked, this, &LargeSearch::Fuelcost);
    connect(ui->capacity_rb, &QRadioButton::clicked, this, &LargeSearch::Capacity);
    connect(ui->power_rb, &QRadioButton::clicked, this, &LargeSearch::Power);
    connect(ui->run_rb, &QRadioButton::clicked, this, &LargeSearch::Run);
    connect(ui->year_rb, &QRadioButton::clicked, this, &LargeSearch::Year);
    connect(ui->price_rb, &QRadioButton::clicked, this, &LargeSearch::Price);
}

void LargeSearch::paintEvent(QPaintEvent *)
{
    QFont newFont("Times New Roman", 12, QFont::Bold, false);

    ui->quality_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->type_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->country_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->dtp_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->stan_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->fuel_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->kpp_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->drive_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->fuelcost_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->capacity_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->power_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->run_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->doors_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->places_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->color_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->fromcapacity_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->tocapacity_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->topower_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->frompower_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->fromcapacity_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->tofuelcost_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->fromfuelcost_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->torun_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->fromrun_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->year_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->fromyear_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->toyear_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->price_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->fromprice_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->toprice_lbl->setStyleSheet("color: rgb(255, 255, 255)");

    this->setFont(newFont);

    QPainter painter(this);
    painter.drawPixmap(this->rect(), QPixmap(":/img/customergreen.png").scaled(this->size()));
}

LargeSearch::~LargeSearch()
{
    delete ui;
}

void LargeSearch::Fuelcost()
{
    if (ui->fromfuelcost_led->text() != 0 && ui->tofuelcost_led->text() != 0) {
        search->getModel()->setFilter("fuelcost > " + ui->fromfuelcost_led->text() + " AND "
                                      + "fuelcost<" + ui->tofuelcost_led->text());
    } else if (ui->fromfuelcost_led->text() != 0) {
        search->getModel()->setFilter("fuelcost > " + ui->fromfuelcost_led->text());
    }
    search->getModel()->select();
}

void LargeSearch::Capacity()
{
    if (ui->fromcapacity_led->text() != 0 && ui->tocapacity_led->text() != 0) {
        search->getModel()->setFilter("capacity > " + ui->fromcapacity_led->text() + " AND "
                                      + "capacity<" + ui->tocapacity_led->text());
    } else if (ui->fromcapacity_led->text() != 0) {
        search->getModel()->setFilter("capacity > " + ui->fromcapacity_led->text());
    }
    search->getModel()->select();
}

void LargeSearch::Power()
{
    if (ui->frompower_led->text() != 0 && ui->topower_led->text() != 0) {
        search->getModel()->setFilter("power > " + ui->frompower_led->text() + " AND " + "power<"
                                      + ui->topower_led->text());
    } else if (ui->frompower_led->text() != 0) {
        search->getModel()->setFilter("power > " + ui->frompower_led->text());
    }
    search->getModel()->select();
}

void LargeSearch::Run()
{
    if (ui->fromrun_led->text() != 0 && ui->torun_led->text() != 0) {
        search->getModel()->setFilter("run > " + ui->fromrun_led->text() + " AND " + "run<"
                                      + ui->torun_led->text());
    } else if (ui->fromrun_led->text() != 0) {
        search->getModel()->setFilter("run > " + ui->fromrun_led->text());
    }
    search->getModel()->select();
}

void LargeSearch::Year()
{
    if (ui->fromyear_led->text() != 0 && ui->toyear_led->text() != 0) {
        search->getModel()->setFilter("year > " + ui->fromyear_led->text() + " AND " + "year<"
                                      + ui->toyear_led->text());
    } else if (ui->fromyear_led->text() != 0) {
        search->getModel()->setFilter("year > " + ui->fromyear_led->text());
    }
    search->getModel()->select();
}

void LargeSearch::Price()
{
    if (ui->fromprice_led->text() != 0 && ui->toprice_led->text() != 0) {
        search->getModel()->setFilter("price > " + ui->fromprice_led->text() + " AND " + "price<"
                                      + ui->toprice_led->text());
    } else if (ui->fromprice_led->text() != 0) {
        search->getModel()->setFilter("price > " + ui->fromprice_led->text());
    }
    search->getModel()->select();
}

void LargeSearch::on_search_pb_clicked()
{
    ui->fromfuelcost_led->setText("");
    ui->fromcapacity_led->setText("");
    ui->frompower_led->setText("");
    ui->fromrun_led->setText("");
    ui->tofuelcost_led->setText("");
    ui->tocapacity_led->setText("");
    ui->topower_led->setText("");
    ui->torun_led->setText("");
    QString quality, type, country, dtp, stan, fuel, kpp, drive, doors, places, color;
    quality = "\"" + ui->quality_cb->currentText() + "\"";
    type = "\"" + ui->type_cb->currentText() + "\"";
    country = "\"" + ui->country_cb->currentText() + "\"";
    dtp = "\"" + ui->dtp_cb->currentText() + "\"";
    stan = "\"" + ui->stan_cb->currentText() + "\"";
    fuel = "\"" + ui->fuel_cb->currentText() + "\"";
    kpp = "\"" + ui->kpp_cb->currentText() + "\"";
    drive = "\"" + ui->drive_cb->currentText() + "\"";
    doors = "\"" + ui->doors_cb->currentText() + "\"";
    places = "\"" + ui->places_cb->currentText() + "\"";
    color = "\"" + ui->color_cb->currentText() + "\"";

    if (ui->quality_cb->currentText() != "") {
        search->getModel()->setFilter("quality=" + quality);
    }
    if (ui->type_cb->currentText() != "") {
        search->getModel()->setFilter("type=" + type);
    }
    if (ui->country_cb->currentText() != "") {
        search->getModel()->setFilter("country=" + country);
    }
    if (ui->dtp_cb->currentText() != "") {
        search->getModel()->setFilter("dtp=" + dtp);
    }
    if (ui->stan_cb->currentText() != "") {
        search->getModel()->setFilter("stan=" + stan);
    }
    if (ui->fuel_cb->currentText() != "") {
        search->getModel()->setFilter("fuel=" + fuel);
    }
    if (ui->drive_cb->currentText() != "") {
        search->getModel()->setFilter("drive=" + drive);
    }
    if (ui->doors_cb->currentText() != "") {
        search->getModel()->setFilter("doors=" + doors);
    }
    if (ui->places_cb->currentText() != "") {
        search->getModel()->setFilter("places=" + places);
    }
    if (ui->color_cb->currentText() != "") {
        search->getModel()->setFilter("color=" + color);
    }

    ui->quality_cb->setCurrentIndex(0);
    ui->type_cb->setCurrentIndex(0);
    ui->country_cb->setCurrentIndex(0);
    ui->dtp_cb->setCurrentIndex(0);
    ui->stan_cb->setCurrentIndex(0);
    ui->fuel_cb->setCurrentIndex(0);
    ui->drive_cb->setCurrentIndex(0);
    ui->doors_cb->setCurrentIndex(0);
    ui->places_cb->setCurrentIndex(0);

    search->show();
}
