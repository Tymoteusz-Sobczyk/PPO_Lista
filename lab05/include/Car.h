#ifndef CAR_H
#define CAR_H

#include <string>

class Car
{
protected:
    std::string name;
    std::string license_plate;

public:
    Car(std::string name, std::string license_plate);

    virtual std::string getName() const;
    virtual std::string getType() const;
    std::string getLicensePlate() const;
    virtual std::string getClass() const;
};

#endif // CAR_H