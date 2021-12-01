#include "add_postach.h"
#include "ui_add_postach.h"

add_postach::add_postach(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_postach)
{
    ui->setupUi(this);
}

add_postach::~add_postach()
{
    delete ui;
}
