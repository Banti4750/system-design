#ifndef XYZ_DRIVE_STRATEGY_CPP
#define XYZ_DRIVE_STRATEGY_CPP

#include <iostream>
#include "driveStrategy.c++"

class xyzDriveStrategy : public driveStrategy
{
public:
    xyzDriveStrategy() = default;
    ~xyzDriveStrategy() override = default;

    void drive() const override
    {
        std::cout << "Driving with a custom XYZ strategy for special behavior." << std::endl;
    }
};

#endif // XYZ_DRIVE_STRATEGY_CPP
