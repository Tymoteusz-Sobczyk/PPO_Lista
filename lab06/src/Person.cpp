#include "Person.h"

Person::Person(std::string name, std::string surname) : name(name), surname(surname) {};
Person::Person() : name(""), surname(" ") {};

std::string Person::identify() const
{
    if (this->name == "" && this->surname == "")
    {
        return "anonymous person";
    }

    return name + " " + surname + " person";
}

std::string Person::getClass() const
{
    return "Person";
};