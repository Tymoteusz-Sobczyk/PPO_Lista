#include "../include/Truck.h"
#include <string>

Truck::Truck(std::string license_plate, std::string brand, std::string color)
    : Car(license_plate, brand, color) {};

Truck::Truck(std::string license_plate, std::string brand)
    : Car(license_plate, brand) {};

std::string Truck::identify() const
{
    if (color == "")
    {
        return this->brand + " [" + this->license_plate + "]";
    }

    return color + " " + this->brand + " [" + this->license_plate + "]";
};

std::string Truck::getClass() const
{
    return "Truck";
};
