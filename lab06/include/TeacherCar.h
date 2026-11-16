#include "Car.h"

class TeacherCar : public Car
{
private:
    std::string name;
    std::string surname;

public:
    TeacherCar(std::string name, std::string surname, std::string license_plate, std::string brand, std::string color);
    TeacherCar(std::string name, std::string surname, std::string license_plate, std::string brand);

    std::string identify() const override;
    std::string getClass() const override;
};