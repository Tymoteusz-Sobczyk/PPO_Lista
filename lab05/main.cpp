#include "include/Truck.h"
#include "include/Camper.h"
#include "include/PriceList.h"
#include "include/Car.h"
#include <iostream>
#include <vector>

int main()
{
    PriceList price_list;

    Car passat("Volkswagen Passat", "DBL 6767");
    Truck transporter("Volkswagen Transporter", "DWL 355A");
    Camper camper("Breaking Bad", "PZR FR33");
    Camper camper2("Kamper markowy", "GD 12345");

    std::vector<const Car *>
        vehicles = {&passat, &transporter, &camper, &camper2};

    for (const Car *vehicle : vehicles)
    {
        std::cout << vehicle->getLicensePlate() << " | " << vehicle->getName() << ": " << price_list.getPayment(*vehicle) << " zł\n";
    }
    return 0;
}