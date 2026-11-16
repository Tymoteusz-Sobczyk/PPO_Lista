#include "../include/Tank.h"
#include <string>

Tank::Tank() {};

std::string Tank::identify() const
{
    return "Big tank";
};

std::string Tank::getClass() const
{
    return "Tank";
};