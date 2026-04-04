#ifndef SPORTS_DRIVE_STRATEGY_CPP
#define SPORTS_DRIVE_STRATEGY_CPP

#include <iostream>
#include "driveStrategy.c++"

class sportsDriveStrategy : public driveStrategy
{
public:
    sportsDriveStrategy() = default;
    ~sportsDriveStrategy() override = default;

    void drive() const override
    {
        std::cout << "Driving fast with sharp handling and high performance." << std::endl;
    }
};

#endif // SPORTS_DRIVE_STRATEGY_CPP
