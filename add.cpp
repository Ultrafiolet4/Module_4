#include "add.h"
#include "ui_add.h"

Add::Add(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add)
{
    temp=new Auto;
    ui->setupUi(this);
    db=SqliteDBManager::getInstance();
    db->connectToDataBase();
}

void Add::paintEvent(QPaintEvent *)
{
    ui->quality_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->type_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->country_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->marka_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->model_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->year_lbl->setStyleSheet("color: rgb(255, 255, 255)");
    ui->price_lbl->setStyleSheet("color: rgb(255, 255, 255)");
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
    ui->pathpicture_lbl->setStyleSheet("color: rgb(255, 255, 255)");

    QPainter painter(this);
    painter.drawPixmap(this->rect(),QPixmap(":/img/customerblue.png").scaled(this->size()));
}

Add::~Add()
{
    delete ui;
}

void Add::on_cancel_pb_clicked()
{
    this->close();
}


void Add::on_ok_pb_clicked()
{
    temp->setQuality(ui->quality_led->text());
    temp->setType(ui->type_led->text());
    temp->setCountry(ui->country_led->text());
    temp->setMarka(ui->marka_led->text());
    temp->setModel(ui->model_led->text());
    temp->setYear(ui->year_led->text().toInt());
    temp->setPrice(ui->price_led->text().toInt());
    temp->setDtp(ui->dtp_led->text());
    temp->setStan(ui->stan_led->text());
    temp->setFuel(ui->fuel_led->text());
    temp->setKpp(ui->kpp_led->text());
    temp->setDrive(ui->drive_led->text());
    temp->setFuelcost(ui->fuelcost_led->text().toInt());
    temp->setCapacity(ui->capacity_led->text().toInt());
    temp->setPower(ui->power_led->text().toInt());
    temp->setRun(ui->run_led->text().toInt());
    temp->setDoors(ui->doors_led->text().toInt());
    temp->setPlaces(ui->places_led->text().toInt());
    temp->setColor(ui->color_led->text());
    temp->setVincode(ui->vincode_led->text());
    temp->setPathPicture(ui->pathpicture_led->text());

    db->inserIntoTable(temp);
    this->close();
}


void Add::on_pathpicture_pb_clicked()
{
    QFileDialog *path=new QFileDialog(this);
    path->show();
    ui->pathpicture_led->setText(path->getOpenFileName());
}

