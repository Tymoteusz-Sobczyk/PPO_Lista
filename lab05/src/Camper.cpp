#include <string>
#include "Camper.h"

Camper::Camper(std::string name, std::string license_plate) : Car(name, license_plate) {};

std::string Camper::getType() const
{
    return "samochód mieszkaniowy";
}

std::string Camper::getClass() const
{
    return "Camper";
}
