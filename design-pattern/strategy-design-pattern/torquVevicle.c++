#ifndef TORQE_VEHICLE_CPP
#define TORQE_VEHICLE_CPP

#include "vehicle.c++"

class torqueVehicle : public vehicle
{
public:
    explicit torqueVehicle(const driveStrategy *strategy)
        : vehicle("Normal Vehicle", strategy)
    {
    }
};

#endif // TORQE_VEHICLE_CPP
