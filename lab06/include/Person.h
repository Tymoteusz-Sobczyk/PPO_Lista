#ifndef PERSON_H
#define PERSON_H

#include "IEnterable.h"
#include <string>

class Person : public IEnterable
{
private:
    std::string name;
    std::string surname;

public:
    Person(std::string name, std::string surname);
    Person();

    std::string identify() const override;
    std::string getClass() const override;
};

#endif