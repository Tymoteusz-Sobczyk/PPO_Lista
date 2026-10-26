#include "Car.cpp"

class Truck : public Car
{
public:
    Truck(std::string name) : Car(name) {};

    std::string getType() const
    {
        return "samochód dostawczy";
    }

    double getPayment() const override
    {
        return 5.0;
    }
};