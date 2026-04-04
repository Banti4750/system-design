#ifndef GOOD_VEHICLE_CPP
#define GOOD_VEHICLE_CPP

#include "vehicle.c++"

class goodVehicle : public vehicle
{
public:
    explicit goodVehicle(const driveStrategy *strategy)
        : vehicle("Good Vehicle", strategy)
    {
    }
};

#endif // GOOD_VEHICLE_CPP
