
#ifndef TOPPING_DECORATOR_CPP
#define TOPPING_DECORATOR_CPP

#include "../BasePizza/BasePizza.c++"

class ToppingDecorator : public BasePizza
{
protected:
    BasePizza* basePizza;

public:
    ToppingDecorator(BasePizza* basePizza)
    {
        this->basePizza = basePizza;
    }

    virtual int cost() = 0;
};

#endif
