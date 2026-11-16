#include "ParkingLot.h"
#include <ctime>
#include <iostream>

void ParkingLot::letIn(IEnterable &vehicle)
{
    std::string className = vehicle.getClass();
    std::string vehicleName = vehicle.identify();
    std::string date_time = curr_date_time();
    if (className == "Ambulance" || className == "Person")
    {
        goto succesful_entry;
    }
    if (className == "Bike")
    {
        if (occupiedBikeStances >= MAX_BIKE_AVAILABLE_SPACES)
        {
            goto failed_entry;
        }
        occupiedBikeStances++;
        goto succesful_entry;
    }
    if (className == "Car" || className == "Truck")
    {
        std::string licensePlate = extractLicensePlate(vehicleName);
        for (std::string element : black_list)
        {
            if (element == licensePlate)
            {
                goto refused_entry;
            }
        }
        if (occupiedCarStances >= MAX_CAR_AVAILABLE_SPACES)
        {
            goto failed_entry;
        }
        occupiedCarStances++;
        goto succesful_entry;
    }
    if (className == "EScooter")
    {
        std::string licensePlate = extractLicensePlate(vehicleName);
        for (std::string element : black_list)
        {
            if (element == licensePlate)
            {
                goto refused_entry;
            }
        }
        if (occupiedCarStances >= MAX_BIKE_AVAILABLE_SPACES)
        {
            goto failed_entry;
        }
        occupiedBikeStances++;
        goto succesful_entry;
    }
    if (className == "TeacherCar")
    {
        if (occupiedCarStances >= MAX_CAR_AVAILABLE_SPACES)
        {
            goto failed_entry;
        }
        occupiedCarStances++;
        goto succesful_entry;
    }
    if (className == "Tank")
    {
        std::cout << vehicleName << " is approaching, run for your life!!!";
        exit(10);
    }
refused_entry:
    std::cout << vehicleName << " is black listed and refused entry at " << date_time << "\n";
    return;
failed_entry:
    std::cout << vehicleName << " is returned at " << date_time << "\n";
    return;
succesful_entry:
    std::cout << vehicleName << " is entering at " << date_time << "\n";
    return;
}

std::string curr_date_time()
{
    std::time_t now = std::time(nullptr);
    std::tm local_time;
    localtime_s(&local_time, &now);
    int year = local_time.tm_year + 1900;
    int month = local_time.tm_mon + 1;
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

std::string extractLicensePlate(const std::string &input)
{
    std::string license_plate;

    size_t start = input.find('[');
    size_t end = input.find(']', start);

    if (start != std::string::npos && end != std::string::npos && end > start)
    {
        license_plate = input.substr(start + 1, end - start - 1);
    }

    return license_plate;
};