#include "PriceList.h"
#include "Car.h"
#include <iostream>

PriceList::PriceList() : vip_license_plates{"PZR FR33"} {}

double PriceList::getPayment(const Car &car) const
{
    std::string tested_license_plate = car.getLicensePlate();
    for (const std::string &license_plate : vip_license_plates)
    {
        if (tested_license_plate == license_plate)
        {
            return 0.0;
        }
    }

    std::string class_name = car.getClass();
    if (class_name == "Car")
    {
        return 4.0;
    }
    if (class_name == "Truck")
    {
        return 5.0;
    }
    if (class_name == "Camper")
    {
        return 4.5;
    }

    std::cerr << "Unknown class_name: " << class_name << "\n";
    return -1;
}
