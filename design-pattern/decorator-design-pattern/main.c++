#include <iostream>
#include "BasePizza/MargheritaBasePizza.c++"
#include "BasePizza/VegeDelightBasePizza.c++"
#include "BasePizza/FarmHouseBasePizza.c++"
#include "ToppingDecorator/ExtraChese.c++"
#include "ToppingDecorator/Mushrrom.c++"

using namespace std;

int main()
{
    // Margherita + Extra Cheese
    BasePizza *pizza1 = new ExtraCheese(new MargheritaBasePizza());
    cout << "Margherita + Extra Cheese = Rs." << pizza1->cost() << endl;

    // FarmHouse + Mushroom + Extra Cheese
    BasePizza *pizza2 = new ExtraCheese(new Mushroom(new FarmHouseBasePizza()));
    cout << "FarmHouse + Mushroom + Extra Cheese = Rs." << pizza2->cost() << endl;

    BasePizza *pizza3 = new ExtraCheese(new VegeDelightBasePizza());
    cout << pizza3->cost();

    delete pizza1;
    delete pizza2;

    return 0;
}
