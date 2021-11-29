#include "auto.h"

Auto::Auto(){

}

void Auto::setMarka(QString marka){
    this->marka=marka;
}

void Auto::setModel(QString model){
    this->model=model;
}

void Auto::setQuality(QString quality){
    this->quality=quality;
}

void Auto::setCountry(QString country){
    this->country=country;
}

void Auto::setType(QString type){
    this->type=type;
}

void Auto::setDtp(QString dtp){
    this->dtp=dtp;
}

void Auto::setPathPicture(QString pathpicture){
    this->pathpicture=pathpicture;
}

void Auto::setStan(QString stan){
    this->stan=stan;
}

void Auto::setKpp(QString kpp){
    this->kpp=kpp;
}

void Auto::setFuel(QString fuel){
    this->fuel=fuel;
}

void Auto::setDrive(QString drive){
    this->drive=drive;
}

void Auto::setColor(QString color){
    this->color=color;
}

void Auto::setVincode(QString vincode){
    this->vincode=vincode;
}

void Auto::setPrice(int price){
    this->price=price;
}

void Auto::setFuelcost(int fuelcost){
    this->fuelcost=fuelcost;
}

void Auto::setCapacity(int capacity){
    this->capacity=capacity;
}

void Auto::setPower(int power){
    this->power=power;
}

void Auto::setRun(int run){
    this->run=run;
}

void Auto::setDoors(int doors){
    this->doors=doors;
}

void Auto::setPlaces(int places){
    this->places=places;
}



QString Auto::getMarka(){
    return marka;
}

QString Auto::getModel(){
    return model;
}

QString Auto::getQuality(){
return quality;
}

QString Auto::getCountry(){
    return country;
}

QString Auto::getType(){
    return type;
}
QString Auto::getDtp(){
    return dtp;
}
QString Auto::getPathPicture(){
    return pathpicture;
}

QString Auto::getStan(){
    return stan;
}
QString Auto::getKpp(){
    return kpp;
}

QString Auto::getFuel(){
    return fuel;
}

QString Auto::getDrive(){
    return drive;
}

QString Auto::getColor(){
    return color;
}

QString Auto::getVincode(){
    return vincode;
}

int Auto::getPrice(){
    return price;
}

int Auto::getFuelcost(){
    return fuelcost;
}

int Auto::getCapacity(){
    return capacity;
}

int Auto::getPower(){
    return power;
}

int Auto::getRun(){
    return run;
}

int Auto::getDoors(){
  return doors;
}

int Auto::getPlaces(){
    return places;
}


