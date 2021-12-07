#include "log.h"

Log::Log():login("\0"),password("\0")
{

}

void Log::setLogin(QString login)
{
    this->login=login;
}

void Log::setPassword(QString password)
{
    this->password=password;
}


QString Log::getLogin()
{
    return login;
}

QString Log::getPassword()
{
    return password;
}
