#include "../include/Ambulance.h"
#include <string>

Ambulance::Ambulance(std::string license_plate) : Car(license_plate, "") {}

std::string Ambulance::identify() const
{
    return "Ambulance [" + this->license_plate + "]";
};

std::string Ambulance::getClass() const
{
    return "Ambulance";
};