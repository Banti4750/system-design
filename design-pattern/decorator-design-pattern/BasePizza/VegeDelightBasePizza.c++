#ifndef VAGE_DELIGHT_BASE_PIZZA_CPP
#define VAGE_DELIGHT_BASE_PIZZA_CPP

#include "BasePizza.c++"

class VegeDelightBasePizza : public BasePizza
{
public:
    int cost() override
    {
        return 200;
    }
};

#endif