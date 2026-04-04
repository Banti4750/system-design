#ifndef VEHICLE_CPP
#define VEHICLE_CPP

#include <iostream>
#include <string>
#include "strategy/driveStrategy.c++"

class vehicle
{
private:
    std::string name;
    const driveStrategy *strategy;

public:
    vehicle(const std::string &name, const driveStrategy *strategy)
        : name(name), strategy(strategy)
    {
    }

    virtual ~vehicle() = default;

    void setStrategy(const driveStrategy *newStrategy)
    {
        strategy = newStrategy;
    }

    void drive() const
    {
        std::cout << name << ": ";
        if (strategy)
        {
            strategy->drive();
        }
        else
        {
            std::cout << "No drive strategy selected." << std::endl;
        }
    }
};

#endif // VEHICLE_CPP
