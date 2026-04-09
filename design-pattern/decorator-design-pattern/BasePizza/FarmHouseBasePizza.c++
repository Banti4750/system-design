#ifndef FARM_HOUSE_BASE_PIZZA_CPP
#define FARM_HOUSE_BASE_PIZZA_CPP

#include "BasePizza.c++"

class FarmHouseBasePizza : public BasePizza
{
public:
    int cost() override
    {
        return 100;
    }
};

#endif