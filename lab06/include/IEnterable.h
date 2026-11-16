#ifndef I_ENTERABLE_H
#define I_ENTERABLE_H

#include <string>

class IEnterable
{
public:
    virtual ~IEnterable() = default;
    virtual std::string identify() const = 0;
    virtual std::string getClass() const = 0;
};

#endif