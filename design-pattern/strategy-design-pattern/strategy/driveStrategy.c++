#ifndef DRIVE_STRATEGY_CPP
#define DRIVE_STRATEGY_CPP

#include <iostream>

class driveStrategy
{
public:
    virtual ~driveStrategy() = default;
    virtual void drive() const = 0;
};

#endif // DRIVE_STRATEGY_CPP
