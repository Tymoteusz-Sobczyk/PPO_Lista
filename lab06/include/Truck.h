#ifndef TRUCK_H
#define TRUCK_H

#include "Car.h"
#include <string>

class Truck : public Car
{
public:
    Truck(std::string license_plate, std::string brand, std::string color);
    Truck(std::string license_plate, std::string brand);
    std::string identify() const override;
    std::string getClass() const override;
};
#endif