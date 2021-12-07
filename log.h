#ifndef LOG_H
#define LOG_H

#include <QWidget>

class Log
{
    QString login,password;
public:
    Log();
    void setLogin(QString login);
    void setPassword(QString password);
    QString getLogin();
    QString getPassword();
};

#endif // LOG_H
