#include "TeacherCar.h"

TeacherCar::TeacherCar(std::string name, std::string surname, std::string license_plate, std::string brand, std::string color)
    : Car(license_plate, brand, color), name(name), surname(surname) {};

TeacherCar::TeacherCar(std::string name, std::string surname, std::string license_plate, std::string brand)
    : Car(license_plate, brand), name(name), surname(surname) {};

std::string TeacherCar::identify() const
{
    if (color == "")
    {
        return this->name + " " + this->surname + " ( " + this->brand + " [" + this->license_plate + "] )";
    }
    return this->name + " " + this->surname + " ( " + color + " " + this->brand + " [" + this->license_plate + "] )";
}

std::string TeacherCar::getClass() const
{
    return "TeacherCar";
};