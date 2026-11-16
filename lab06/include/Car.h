#ifndef CAR_H
#define CAR_H

#include "IEnterable.h"
#include <string>

class Car : public IEnterable
{
protected:
    std::string license_plate;
    std::string brand;
    std::string color;

public:
    Car(std::string license_plate, std::string brand, std::string color);
    Car(std::string license_plate, std::string brand);
    virtual std::string identify() const override;
    virtual std::string getClass() const override;
};

#endif