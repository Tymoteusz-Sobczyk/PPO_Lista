#ifndef TANK_H
#define TANK_H

#include "IEnterable.h"

class Tank : public IEnterable
{
public:
    Tank();
    virtual std::string identify() const override;
    std::string getClass() const override;
};
#endif