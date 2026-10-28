#ifndef TRUCK_H
#define TRUCK_H

#include "Car.h"
#include <string>

class Truck : public Car
{
public:
    Truck(std::string name, std::string license_plate);

    std::string getType() const override;
    std::string getClass() const override;
};

#endif // TRUCK_H