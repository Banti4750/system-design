#ifndef MUSHROOM_CPP
#define MUSHROOM_CPP

#include "ToppingDecorator.c++"

class Mushroom : public ToppingDecorator
{
public:
    Mushroom(BasePizza* basePizza) : ToppingDecorator(basePizza) {}

    int cost() override
    {
        return basePizza->cost() + 70;
    }
};

#endif
