#ifndef PARKING_LOT_H
#define PARKIN_LOT_H

#define MAX_AVAILABE_SPACES 3

#include "ParkingVehicle.h"
#include <string>
#include <ctime>
#include <iostream>

// Returns current date + time in format "Y-m-d H:M:S"
std::string curr_date_time();

class ParkingLot
{
protected:
    int occupiedStances = 0;

public:
    void letIn(ParkingVehicle &vehicle)
    {
        std::string name = vehicle.identify();
        std::string date_time = curr_date_time();

        if (this->occupiedStances >= MAX_AVAILABE_SPACES)
        {
            std::cout << name << " is returned at: " << date_time << "\n";
            return;
        }

        std::cout << name << " is entering at: " << date_time << "\n";
        occupiedStances++;
    }
};

std::string curr_date_time()
{
    std::time_t now = std::time(nullptr);
    std::tm local_time;
    localtime_s(&local_time, &now);
    int year = local_time.tm_year + 1900;
    int month = local_time.tm_mon;
    int day = local_time.tm_mday;
    int hour = local_time.tm_hour;
    int minute = local_time.tm_min;
    int second = local_time.tm_sec;

    std::string return_value = std::to_string(year) +
                               "-" + std::to_string(month) + "-" + std::to_string(day) +
                               " " + std::to_string(hour) + ":" + std::to_string(minute) +
                               ":" + std::to_string(second);
    return return_value;
}
#endif