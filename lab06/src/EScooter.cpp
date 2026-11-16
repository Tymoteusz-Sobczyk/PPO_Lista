#include "../include/EScooter.h"
#include <string>

EScooter::EScooter(std::string license_plate) : license_plate(license_plate) {}

std::string EScooter::identify() const
{
    return "Kukirin [" + this->license_plate + "]";
};

std::string EScooter::getClass() const
{
    return "EScooter";
};