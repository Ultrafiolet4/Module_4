#include "all_2.h"
#include "ui_all_2.h"

all_2::all_2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::all_2)
{
    ui->setupUi(this);

}

all_2::~all_2()
{
    delete ui;
}
