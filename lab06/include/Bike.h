#ifndef BIKE_H
#define BIKE_H

#include "ParkingVehicle.h"
#include <string>

class Bike : public ParkingVehicle
{
public:
    std::string identify() const override;
};

#endif