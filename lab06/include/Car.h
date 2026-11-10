#ifndef CAR_H
#define CAR_H

#include "ParkingVehicle.h"
#include <string>

class Car : public ParkingVehicle
{
public:
    virtual std::string identify() const override;
};

#endif