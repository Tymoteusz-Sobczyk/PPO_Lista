#ifndef PRICE_LIST_H
#define PRICE_LIST_H

#include <vector>
#include <string>
#include <iostream>

class Car;

class PriceList
{
    std::vector<std::string> vip_license_plates;

public:
    PriceList();
    double getPayment(const Car &car) const;
};
#endif // PRICE_LIST_H