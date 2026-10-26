#include "Truck.cpp"
#include <iostream>
#include <vector>
// 78 118

std::vector<Car> vehicles = {Car("Volkswagen Passat"), Truck("Volkswagen Transporter")};
int main()
{
    for (Car vehicle : vehicles)
    {
        std::cout << std::string(vehicle.getName()) << ": " << vehicle.getPayment() << " zł\n";
    }
    return 0;
}