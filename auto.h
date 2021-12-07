#ifndef AUTO_H
#define AUTO_H

#include <QWidget>
class Auto
{
    QString marka,model,quality,country,type,dtp,pathpicture,stan,kpp,fuel,drive,color,vincode;
    int year, price, power, run, doors, places;
    float fuelcost, capacity;

public:
    Auto();
    QString getMarka();
    QString getModel();
    QString getQuality();
    QString getCountry();
    QString getType();
    QString getDtp();
    QString getPathPicture();
    QString getStan();
    QString getKpp();
    QString getFuel();
    QString getDrive();
    QString getColor();
    QString getVincode();
    int getYear();
    int getPrice();
    float getFuelcost();
    float getCapacity();
    int getPower();
    int getRun();
    int getDoors();
    int getPlaces();

    void setMarka(QString marka);
    void setModel(QString model);
    void setQuality(QString quality);
    void setCountry(QString country);
    void setType(QString type);
    void setDtp(QString dtp);
    void setPathPicture(QString pathpicture);
    void setStan(QString stan);
    void setKpp(QString kpp);
    void setFuel(QString fuel);
    void setDrive(QString frive);
    void setColor(QString color);
    void setVincode(QString vincode);
    void setYear(int year);
    void setPrice(int price);
    void setFuelcost(float fuelcost);
    void setCapacity(float capacity);
    void setPower(int power);
    void setRun(int run);
    void setDoors(int doors);
    void setPlaces(int places);
};

#endif // AUTO_H
