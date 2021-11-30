#include "admin.h"
#include <QSqlTableModel>
#include "auto.h"
#include "dbmanager.h"
#include "sqlitedbmanager.h"
#include "ui_admin.h"

Admin::Admin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Admin)
{
    ui->setupUi(this);
    db = SqliteDBManager::getInstance();
    db->connectToDataBase();

    model_avto = new QSqlTableModel(this, db->getDB());
    model_avto->setTable("avto");
    ui->avto_vw->setModel(model_avto);
    model_avto->select();
    model_postach=new QSqlTableModel(this,db->getDB());
    model_postach->setTable("postachalnuk");
    ui->suplier_vw->setModel(model_postach);
    model_postach->select();

    model_zamovl=new QSqlTableModel(this,db->getDB());
    model_zamovl->setTable("zamovlennya");
    ui->order_vw->setModel(model_zamovl);
    model_zamovl->select();
}

void Admin::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawPixmap(this->rect(),QPixmap(":/img/customerred.png").scaled(this->size()));
}

Admin::~Admin()
{
    delete ui;
}

void Admin::on_add_pb_clicked()
{
    QString path;
    Auto *temp = new Auto;
    QDialog *avto=new QDialog;
    avto->setFixedSize(500, 800);

    QVBoxLayout *m_lay=new QVBoxLayout(avto);
    QHBoxLayout *quality_lay=new QHBoxLayout(avto);
    QHBoxLayout *type_lay=new QHBoxLayout(avto);
    QHBoxLayout *country_lay=new QHBoxLayout(avto);
    QHBoxLayout *marka_lay=new QHBoxLayout(avto);
    QHBoxLayout *model_lay=new QHBoxLayout(avto);
    QHBoxLayout *year_lay=new QHBoxLayout(avto);
    QHBoxLayout *price_lay=new QHBoxLayout(avto);
    QHBoxLayout *dtp_lay=new QHBoxLayout(avto);
    QHBoxLayout *stan_lay=new QHBoxLayout(avto);
    QHBoxLayout *fuel_lay=new QHBoxLayout(avto);
    QHBoxLayout *kpp_lay=new QHBoxLayout(avto);
    QHBoxLayout *drive_lay=new QHBoxLayout(avto);
    QHBoxLayout *fuelcost_lay=new QHBoxLayout(avto);
    QHBoxLayout *capacity_lay=new QHBoxLayout(avto);
    QHBoxLayout *power_lay=new QHBoxLayout(avto);
    QHBoxLayout *run_lay=new QHBoxLayout(avto);
    QHBoxLayout *doors_lay=new QHBoxLayout(avto);
    QHBoxLayout *places_lay=new QHBoxLayout(avto);
    QHBoxLayout *color_lay=new QHBoxLayout(avto);
    QHBoxLayout *button_lay = new QHBoxLayout(avto);
    QHBoxLayout *pathpicture_lay = new QHBoxLayout(avto);

    QLabel *quality_lbl = new QLabel(avto);
    QLineEdit *quality_led=new QLineEdit(avto);

    QLabel *type_lbl=new QLabel(avto);
    QLineEdit *type_led=new QLineEdit(avto);

    QLabel *country_lbl=new QLabel(avto);
    QLineEdit *country_led=new QLineEdit(avto);

    QLabel *marka_lbl=new QLabel(avto);
    QLineEdit *marka_led=new QLineEdit(avto);

    QLabel *model_lbl=new QLabel(avto);
    QLineEdit *model_led=new QLineEdit(avto);

    QLabel *year_lbl=new QLabel(avto);
    QLineEdit *year_led=new QLineEdit(avto);

    QLabel *price_lbl=new QLabel(avto);
    QLineEdit *price_led=new QLineEdit(avto);

    QLabel *dtp_lbl=new QLabel(avto);
    QLineEdit *dtp_led=new QLineEdit(avto);

    QLabel *stan_lbl=new QLabel(avto);
    QLineEdit *stan_led=new QLineEdit(avto);

    QLabel *fuel_lbl=new QLabel(avto);
    QLineEdit *fuel_led=new QLineEdit(avto);

    QLabel *kpp_lbl=new QLabel(avto);
    QLineEdit *kpp_led=new QLineEdit(avto);

    QLabel *drive_lbl=new QLabel(avto);
    QLineEdit *drive_led=new QLineEdit(avto);

    QLabel *fuelcost_lbl=new QLabel(avto);
    QLineEdit *fuelcost_led=new QLineEdit(avto);

    QLabel *capacity_lbl=new QLabel(avto);
    QLineEdit *capacity_led=new QLineEdit(avto);

    QLabel *power_lbl=new QLabel(avto);
    QLineEdit *power_led=new QLineEdit(avto);

    QLabel *run_lbl=new QLabel(avto);
    QLineEdit *run_led=new QLineEdit(avto);

    QLabel *doors_lbl=new QLabel(avto);
    QLineEdit *doors_led=new QLineEdit(avto);

    QLabel *places_lbl=new QLabel(avto);
    QLineEdit *places_led=new QLineEdit(avto);

    QLabel *color_lbl=new QLabel(avto);
    QLineEdit *color_led = new QLineEdit(avto);

    QLabel *pathpicture_lbl = new QLabel(avto);
    QFileDialog *pathpicture_fd = new QFileDialog(avto);

    QPushButton *ok_pb = new QPushButton(avto);
    QPushButton *cancel_pb = new QPushButton(avto);

    quality_lay->addWidget(quality_lbl);
    quality_lay->addWidget(quality_led);

    type_lay->addWidget(type_lbl);
    type_lay->addWidget(type_led);

    country_lay->addWidget(country_lbl);
    country_lay->addWidget(country_led);

    marka_lay->addWidget(marka_lbl);
    marka_lay->addWidget(marka_led);

    model_lay->addWidget(model_lbl);
    model_lay->addWidget(model_led);

    year_lay->addWidget(year_lbl);
    year_lay->addWidget(year_led);

    price_lay->addWidget(price_lbl);
    price_lay->addWidget(price_led);

    dtp_lay->addWidget(dtp_lbl);
    dtp_lay->addWidget(dtp_led);

    stan_lay->addWidget(stan_lbl);
    stan_lay->addWidget(stan_led);

    fuel_lay->addWidget(fuel_lbl);
    fuel_lay->addWidget(fuel_led);

    kpp_lay->addWidget(kpp_lbl);
    kpp_lay->addWidget(kpp_led);

    drive_lay->addWidget(drive_lbl);
    drive_lay->addWidget(drive_led);

    fuelcost_lay->addWidget(fuelcost_lbl);
    fuelcost_lay->addWidget(fuelcost_led);

    capacity_lay->addWidget(capacity_lbl);
    capacity_lay->addWidget(capacity_led);

    power_lay->addWidget(power_lbl);
    power_lay->addWidget(power_led);

    run_lay->addWidget(run_lbl);
    run_lay->addWidget(run_led);

    doors_lay->addWidget(doors_lbl);
    doors_lay->addWidget(doors_led);

    places_lay->addWidget(places_lbl);
    places_lay->addWidget(places_led);

    color_lay->addWidget(color_lbl);
    color_lay->addWidget(color_led);

    button_lay->addWidget(cancel_pb);
    button_lay->addWidget(ok_pb);

    pathpicture_lay->addWidget(pathpicture_lbl);
    pathpicture_lay->addWidget(pathpicture_fd);

    quality_lbl->setText("Введіть якість:");
    type_lbl->setText("Введіть тип кузова:");
    country_lbl->setText("Введіть країну:");
    marka_lbl->setText("Введіть марку:");
    model_lbl->setText("Введіть модель:");
    year_lbl->setText("Введіть рік:");
    price_lbl->setText("Введіть ціну:");
    dtp_lbl->setText("Введіть участь в ДТП:");
    stan_lbl->setText("Введіть стан:");
    fuel_lbl->setText("Введіть тип палива:");
    kpp_lbl->setText("Введіть тип коробки передач:");
    drive_lbl->setText("Введіть тип приводу:");
    fuelcost_lbl->setText("Введіть витрату палива на 100 км:");
    capacity_lbl->setText("Введіть об'єм:");
    power_lbl->setText("Введіть потужність двигуна:");
    run_lbl->setText("Введіть пробіг:");
    doors_lbl->setText("Введіть кількість дверей:");
    places_lbl->setText("Введіть кількість місць:");
    color_lbl->setText("Введіть колір:");
    pathpicture_lbl->setText("Виберіть фотографію:");

    pathpicture_fd->setWindowTitle(tr("Вибрати фотографію:"));
    pathpicture_fd->setDirectory(".");
    pathpicture_fd->setFileMode(QFileDialog::ExistingFiles);
    pathpicture_fd->setViewMode(QFileDialog::Detail);
    ok_pb->setText("OK");
    cancel_pb->setText("Cancel");

    m_lay->addItem(quality_lay);
    m_lay->addItem(type_lay);
    m_lay->addItem(country_lay);
    m_lay->addItem(marka_lay);
    m_lay->addItem(model_lay);
    m_lay->addItem(year_lay);
    m_lay->addItem(price_lay);
    m_lay->addItem(dtp_lay);
    m_lay->addItem(stan_lay);
    m_lay->addItem(fuel_lay);
    m_lay->addItem(kpp_lay);
    m_lay->addItem(drive_lay);
    m_lay->addItem(fuelcost_lay);
    m_lay->addItem(capacity_lay);
    m_lay->addItem(power_lay);
    m_lay->addItem(run_lay);
    m_lay->addItem(doors_lay);
    m_lay->addItem(places_lay);
    m_lay->addItem(color_lay);
    m_lay->addItem(pathpicture_lay);
    m_lay->addItem(button_lay);

    avto->setLayout(m_lay);
    avto->exec();

    connect(cancel_pb, &QPushButton::clicked, avto, &QDialog::close);
    connect(ok_pb,
            &QPushButton::clicked,
            avto,
            [quality_led,
             type_led,
             country_led,
             marka_led,
             model_led,
             year_led,
             price_led,
             dtp_led,
             stan_led,
             fuel_led,
             kpp_led,
             drive_led,
             fuelcost_led,
             capacity_led,
             power_led,
             run_led,
             doors_led,
             places_led,
             color_led,
             temp]() {
                temp->setQuality(quality_led->text());
                temp->setType(type_led->text());
                temp->setCountry(country_led->text());
                temp->setMarka(marka_led->text());
                temp->setModel(model_led->text());
                temp->setYear(year_led->text().toInt());
                temp->setPrice(price_led->text().toInt());
                temp->setDtp(dtp_led->text());
                temp->setStan(stan_led->text());
                temp->setFuel(fuel_led->text());
                temp->setKpp(kpp_led->text());
                temp->setDrive(drive_led->text());
                temp->setFuelcost(fuelcost_led->text().toInt());
                temp->setCapacity(capacity_led->text().toInt());
                temp->setPower(power_led->text().toInt());
                temp->setRun(run_led->text().toInt());
                temp->setDoors(doors_led->text().toInt());
                temp->setPlaces(places_led->text().toInt());
                temp->setColor(color_led->text());
            });
    if (pathpicture_fd->exec()) {
        path = pathpicture_fd->selectedFiles();
    }
}
