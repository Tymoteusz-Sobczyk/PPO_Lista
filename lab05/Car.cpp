#include <string>

class Car
{
protected:
    std::string name;

public:
    Car(std::string name) : name(name) {};

    virtual std::string getName() const
    {
        return std::string(this->getType()) + " " + this->name;
    }

    virtual std::string getType() const
    {
        return "samochód osobowy";
    }

    virtual double getPayment() const
    {
        return 4.0;
    }
};