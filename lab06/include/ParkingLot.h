#ifndef PARKING_LOT_H
#define PARKIN_LOT_H

#define MAX_CAR_AVAILABLE_SPACES 20
#define MAX_BIKE_AVAILABLE_SPACES 10

#include "IEnterable.h"
#include <string>
#include <vector>

// Returns current date + time in format "Y-m-d H:M:S"
std::string curr_date_time();

// Function made for extracting licensePlate out of indetify() method
// Too deep into this project to redo all classes to return their licensePlate with a separate method
std::string extractLicensePlate(const std::string &input);

class ParkingLot
{
protected:
    int occupiedCarStances = 0;
    int occupiedBikeStances = 0;
    // List of black listed license plates
    std::vector<std::string> black_list = {"CAR B4N", "B4D C4R", "BAN CAR", "BAD CAR"};

public:
    void letIn(IEnterable &vehicle);
};

#endif