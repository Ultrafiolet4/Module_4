#include "all.h"
#include "ui_all.h"

All::All(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::All)
{
    ui->setupUi(this);
    db=SqliteDBManager::getInstance();
    db->connectToDataBase();

    model = new QSqlTableModel(this, db->getDB());
    model->setTable("avto");
    ui->all_vw->setModel(model);
    model->select();

    ui->all_vw->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->all_vw->setColumnHidden(0,true);
    ui->all_vw->setColumnHidden(8,true);

}

All::~All()
{
    delete ui;
}

void All::on_all_vw_clicked(const QModelIndex &index)
{
    row=index.row();
}


void All::on_check_pb_clicked()
{
    QDialog *avto=new QDialog;
    QFont newFont("Times New Roman", 12, QFont::Bold, true);
    avto->setFixedSize(700,500);


    QVBoxLayout *m_lay=new QVBoxLayout(avto);
    QVBoxLayout *up_lay=new QVBoxLayout(avto);
    QVBoxLayout *down_lay=new QVBoxLayout(avto);
    QHBoxLayout *picture_lay=new QHBoxLayout(avto);

    QLabel *quality_lbl=new QLabel(avto);
    QLabel *type_lbl=new QLabel(avto);
    QLabel *country_lbl=new QLabel(avto);
    QLabel *marka_lbl=new QLabel(avto);
    QLabel *model_lbl=new QLabel(avto);
    QLabel *year_lbl=new QLabel(avto);
    QLabel *price_lbl=new QLabel(avto);
    QLabel *dtp_lbl=new QLabel(avto);
    QLabel *stan_lbl=new QLabel(avto);
    QLabel *fuel_lbl=new QLabel(avto);
    QLabel *kpp_lbl=new QLabel(avto);
    QLabel *drive_lbl=new QLabel(avto);
    QLabel *fuelcost_lbl=new QLabel(avto);
    QLabel *capacity_lbl=new QLabel(avto);
    QLabel *power_lbl=new QLabel(avto);
    QLabel *run_lbl=new QLabel(avto);
    QLabel *doors_lbl=new QLabel(avto);
    QLabel *places_lbl=new QLabel(avto);
    QLabel *color_lbl=new QLabel(avto);
    QLabel *picture_lbl=new QLabel(avto);
    QLabel *vincode_lbl=new QLabel(avto);

    up_lay->addWidget(quality_lbl);
    up_lay->addWidget(type_lbl);
    up_lay->addWidget(country_lbl);
    up_lay->addWidget(marka_lbl);
    up_lay->addWidget(model_lbl);
    up_lay->addWidget(year_lbl);
    up_lay->addWidget(price_lbl);
    up_lay->addWidget(dtp_lbl);
    up_lay->addWidget(stan_lbl);
    up_lay->addWidget(kpp_lbl);
    up_lay->addWidget(fuel_lbl);
    picture_lay->addWidget(picture_lbl);
    down_lay->addWidget(kpp_lbl);
    down_lay->addWidget(drive_lbl);
    down_lay->addWidget(fuelcost_lbl);
    down_lay->addWidget(capacity_lbl);
    down_lay->addWidget(power_lbl);
    down_lay->addWidget(run_lbl);
    down_lay->addWidget(doors_lbl);
    down_lay->addWidget(places_lbl);
    down_lay->addWidget(color_lbl);
    down_lay->addWidget(vincode_lbl);

    picture_lay->addLayout(up_lay);
    m_lay->addLayout(picture_lay);
    m_lay->addLayout(down_lay);

    marka_lbl->setText("Марка:"+model->index(row,1).data().toString());
    model_lbl->setText("Модель:"+model->index(row,2).data().toString());
    quality_lbl->setText("Якість:"+model->index(row,3).data().toString());
    country_lbl->setText("Країна:"+model->index(row,4).data().toString());
    type_lbl->setText("Тип кузова:"+model->index(row,5).data().toString());
    price_lbl->setText("Ціна:"+model->index(row,6).data().toString());
    dtp_lbl->setText("Участь в ДТП:"+model->index(row,7).data().toString());
    stan_lbl->setText("Стан:"+model->index(row,9).data().toString());
    kpp_lbl->setText("Тип коробки передач:"+model->index(row,10).data().toString());
    fuel_lbl->setText("Тип палива:"+model->index(row,11).data().toString());
    drive_lbl->setText("Тип приводу:"+model->index(row,12).data().toString());
    fuelcost_lbl->setText("Витрата палива на 100 км:"+model->index(row,13).data().toString());
    capacity_lbl->setText("Об'єм двигуна:"+model->index(row,14).data().toString());
    power_lbl->setText("Потужність двигуна:"+model->index(row,15).data().toString());
    run_lbl->setText("Пробіг:"+model->index(row,16).data().toString());
    doors_lbl->setText("Кількість дверей:"+model->index(row,17).data().toString());
    places_lbl->setText("Кількість місць:"+model->index(row,18).data().toString());
    color_lbl->setText("Колір:"+model->index(row,19).data().toString());
    vincode_lbl->setText("Вінкод:"+model->index(row,20).data().toString());


    QPixmap pix(model->index(row,8).data().toString());
    picture_lbl->setPixmap(pix.scaled(300,300,Qt::KeepAspectRatio));

    avto->setFont(newFont);

    avto->setLayout(m_lay);
    avto->exec();

}

