#ifndef PARKING_VEHICLE_H
#define PARKING_VEHICLE_H

#include <string>

class ParkingVehicle
{
public:
    virtual ~ParkingVehicle() = default;
    virtual std::string identify() const = 0;
};

#endif