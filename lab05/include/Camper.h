#ifndef CAMPER_H
#define CAMPER_H

#include "Car.h"
#include <string>

class Camper : public Car
{
public:
    Camper(std::string name, std::string license_plate);

    std::string getType() const override;
    std::string getClass() const override;
};

#endif // CAMPER_H