

#ifndef TORQUE_DRIVE_STRATEGY_CPP
#define TORQUE_DRIVE_STRATEGY_CPP

#include <iostream>
#include "driveStrategy.c++"

class torqueDriveStrategy : public driveStrategy
{
public:
    torqueDriveStrategy() = default;
    ~torqueDriveStrategy() override = default;

    void drive() const override
    {
        std::cout << "Driving with torque power and smooth control." << std::endl;
    }
};

#endif // TORQUE_DRIVE_STRATEGY_CPP
