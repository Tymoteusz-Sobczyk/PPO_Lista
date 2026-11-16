#ifndef ESCOOTER_H
#define ESCOOTER_H

#include "IEnterable.h"

class EScooter : public IEnterable
{
protected:
    std::string license_plate;

public:
    EScooter(std::string license_plate);
    virtual std::string identify() const override;
    std::string getClass() const override;
};

#endif