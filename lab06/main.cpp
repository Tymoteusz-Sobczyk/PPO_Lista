#include "Bike.h"
#include "Car.h"
#include "Truck.h"
#include "ParkingLot.h"
#include "ParkingVehicle.h"

int main()
{
    ParkingVehicle *car = new Car();
    ParkingVehicle *bike = new Bike();
    ParkingVehicle *truck = new Truck();
    ParkingVehicle *car2 = new Car();
    ParkingVehicle *vehicles[] = {bike, car, truck, car2};

    ParkingLot *parkingLot = new ParkingLot();

    for (int i = 0; i < sizeof(vehicles) / sizeof(vehicles[0]); i++)
    {
        parkingLot->letIn(*vehicles[i]);
    }
    delete car;
    delete bike;
    return 0;
}