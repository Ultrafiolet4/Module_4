#include "addnew.h"
#include "ui_addnew.h"

AddNew::AddNew(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddNew)
{
    ui->setupUi(this);
    db=SqliteDBManager::getInstance();
    ui->password_led->setEchoMode(QLineEdit::Password);
    ui->secondpassword_led->setEchoMode(QLineEdit::Password);
    log=new Log();
}

AddNew::~AddNew()
{
    delete ui;
}

void AddNew::on_ok_pb_clicked()
{
    log->setLogin(ui->login_led->text());
    log->setPassword(ui->password_led->text());

    if(ui->password_led->text()==ui->secondpassword_led->text())
    {
        db->addAdmin(log);
    }
    this->close();
}


void AddNew::on_cancel_pb_clicked()
{
    ui->login_led->setText("");
    ui->password_led->setText("");
    ui->secondpassword_led->setText("");
    this->close();
}

