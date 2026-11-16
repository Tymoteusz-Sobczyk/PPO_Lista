#include "Car.h"
#include <string>

class Ambulance : public Car
{
public:
    Ambulance(std::string license_plate);
    std::string identify() const override;
    std::string getClass() const override;
};