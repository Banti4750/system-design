#ifndef MARGHERITA_BASE_PIZZA_CPP
#define MARGHERITA_BASE_PIZZA_CPP

#include "BasePizza.c++"

class MargheritaBasePizza : public BasePizza
{
public:
    int cost() override
    {
        return 300;
    }
};

#endif