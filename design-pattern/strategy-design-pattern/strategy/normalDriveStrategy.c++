#ifndef NORMAL_DRIVE_STRATEGY_CPP
#define NORMAL_DRIVE_STRATEGY_CPP

#include <iostream>
#include "driveStrategy.c++"

class normalDriveStrategy : public driveStrategy
{
public:
    normalDriveStrategy() = default;
    ~normalDriveStrategy() override = default;

    void drive() const override
    {
        std::cout << "Driving at normal speed with comfortable control." << std::endl;
    }
};

#endif // NORMAL_DRIVE_STRATEGY_CPP
