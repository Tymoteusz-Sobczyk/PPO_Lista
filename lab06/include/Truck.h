#ifndef TRUCK_H
#define TRUCK_H

#include "Car.h"
#include <string>

class Truck : public Car
{
public:
    std::string identify() const override;
};
#endif