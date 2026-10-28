#include "Car.h"

Car::Car(std::string name, std::string license_plate) : name(name), license_plate(license_plate) {};

std::string Car::getName() const
{
    return std::string(this->getType()) + " " + this->name;
}

std::string Car::getType() const
{
    return "samochód osobowy";
}

std::string Car::getLicensePlate() const
{
    return license_plate;
}

std::string Car::getClass() const
{
    return "Car";
}
