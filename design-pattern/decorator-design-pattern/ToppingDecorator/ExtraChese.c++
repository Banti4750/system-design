#ifndef EXTRA_CHEESE_CPP
#define EXTRA_CHEESE_CPP

#include "ToppingDecorator.c++"

class ExtraCheese : public ToppingDecorator
{
public:
    ExtraCheese(BasePizza* basePizza) : ToppingDecorator(basePizza) {}

    int cost() override
    {
        return basePizza->cost() + 50;
    }
};

#endif
