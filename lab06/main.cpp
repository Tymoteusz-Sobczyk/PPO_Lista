#include "Bike.h"
#include "Ambulance.h"
#include "Escooter.h"
#include "Person.h"
#include "Car.h"
#include "Truck.h"
#include "Tank.h"
#include "TeacherCar.h"
#include "ParkingLot.h"
#include "IEnterable.h"
#include <string>
#include <random>
#include <vector>

std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<int> int_dist(1, 10000);

std::string colors[] = {
    "red",
    "yellow",
    "blue",
    "silver",
    "black",
    "green"};

std::string license_plates[] = {
    "CAR B4N",
    "DBL 1234",
    "DL G00DC",
    "B1G R1D3",
    "B4D C4R",
    "G00D L1F",
    "DBL 3212",
    "BAN CAR",
    "R1D3 W377",
    "SUP3R C4R",
    "BAD CAR"};

std::string brands[] = {
    "Volvo",
    "Ford",
    "Ram",
    "Toyota",
    "Mitsubishi",
    "Mercedes",
    "BógMnieWybrał"};

int random_color()
{
    return int_dist(gen) % (sizeof(colors) / sizeof(colors[0]));
}

int random_plate()
{
    return int_dist(gen) % (sizeof(license_plates) / sizeof(license_plates[0]));
}

int random_brand()
{
    return int_dist(gen) % (sizeof(brands) / sizeof(brands[0]));
}
int main()
{
    int amount_of_vehicles = 30;
    std::vector<IEnterable *> vehicles;
    for (int i = 0; i < amount_of_vehicles; i++)
    {
        int random = int_dist(gen) % 11;
        switch (random)
        {
        case 0:
            vehicles.push_back(new Ambulance(license_plates[random_plate()]));
            break;
        case 1:
            vehicles.push_back(new Bike());
            break;
        case 2:
            vehicles.push_back(new Car(license_plates[random_plate()], brands[random_brand()], colors[random_color()]));
            break;
        case 3:
            vehicles.push_back(new Car(license_plates[random_plate()], brands[random_brand()]));
            break;
        case 4:
            vehicles.push_back(new EScooter(license_plates[random_plate()]));
            break;
        case 5:
            // I'm too tired to randomize names for pedestrians
            vehicles.push_back(new Person("John", "Doe"));
            break;
        case 6:
            vehicles.push_back(new Tank());
            break;
        case 7:
            vehicles.push_back(new TeacherCar("Teacher", "Doe", license_plates[random_plate()], brands[random_brand()], colors[random_color()]));
            break;
        case 8:
            vehicles.push_back(new TeacherCar("Teacher", "Doe", license_plates[random_plate()], brands[random_brand()]));
            break;
        case 9:
            vehicles.push_back(new Truck(license_plates[random_plate()], brands[random_brand()], colors[random_color()]));
            break;
        case 10:
            vehicles.push_back(new Truck(license_plates[random_plate()], brands[random_brand()]));
            break;
        }
    };
    ParkingLot *parkingLot = new ParkingLot();
    for (int i = 0; i < vehicles.size(); i++)
    {
        parkingLot->letIn(*vehicles[i]);
    }
    return 0;
}