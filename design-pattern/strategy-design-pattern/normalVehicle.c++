#ifndef NORMAL_VEHICLE_CPP
#define NORMAL_VEHICLE_CPP

#include "vehicle.c++"

class normalVehicle : public vehicle
{
public:
    explicit normalVehicle(const driveStrategy *strategy)
        : vehicle("Normal Vehicle", strategy)
    {
    }
};

#endif // NORMAL_VEHICLE_CPP
