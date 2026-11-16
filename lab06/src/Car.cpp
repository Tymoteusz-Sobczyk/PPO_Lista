#include "../include/Car.h"
#include <string>

Car::Car(std::string license_plate, std::string brand, std::string color)
    : license_plate(license_plate), brand(brand), color(color) {};

Car::Car(std::string license_plate, std::string brand)
    : license_plate(license_plate), brand(brand), color("") {};

std::string Car::identify() const
{
    if (color == "")
    {
        return this->brand + " [" + this->license_plate + "]";
    }

    return color + " " + this->brand + " [" + this->license_plate + "]";
};

std::string Car::getClass() const
{
    return "Car";
};