#include "Truck.h"

Truck::Truck(std::string name, std::string license_plate) : Car(name, license_plate) {};

std::string Truck::getType() const
{
    return "samochód dostawczy";
}

std::string Truck::getClass() const
{
    return "Truck";
}
