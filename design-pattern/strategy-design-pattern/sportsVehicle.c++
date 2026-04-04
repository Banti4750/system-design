#ifndef SPORTS_VEHICLE_CPP
#define SPORTS_VEHICLE_CPP

#include "vehicle.c++"

class sportsVehicle : public vehicle
{
public:
    explicit sportsVehicle(const driveStrategy *strategy)
        : vehicle("Sports Vehicle", strategy)
    {
    }
};

#endif // SPORTS_VEHICLE_CPP
