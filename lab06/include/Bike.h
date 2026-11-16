#ifndef BIKE_H
#define BIKE_H

#include "IEnterable.h"
#include <string>

class Bike : public IEnterable
{
public:
    std::string identify() const override;
    std::string getClass() const override;
};

#endif