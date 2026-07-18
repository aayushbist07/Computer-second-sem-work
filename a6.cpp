/*A restaurant offers three different types of Pizza. And the price list is as follows. a) Mushroom Pizza
Rs. 200 b) Ham Pizza Rs. 150 c) Cheese Pizza Rs. 100 Define an abstract class called Pizza that has a
pure virtual function called get_price(). This function, when derived in subclasses, should return the price
of a specific Pizza. Create three classes inheriting from Pizza class to represent three different Pizzas. Use
polymorphism to print the name of each Pizza and its price.*/
#include <iostream>
using namespace std;

// Abstract class
class Pizza
{
public:
    virtual int get_price() = 0;
};

// Mushroom Pizza
class Mushroom : public Pizza
{
public:
    int get_price()
    {
        return 200;
    }
};

// Ham Pizza
class Ham : public Pizza
{
public:
    int get_price()
    {
        return 150;
    }
};

// Cheese Pizza
class Cheese : public Pizza
{
public:
    int get_price()
    {
        return 100;
    }
};

int main()
{
    Pizza *p;

    Mushroom m;
    Ham h;
    Cheese c;

    p = &m;
    cout << "Mushroom Pizza = Rs. " << p->get_price() << endl;

    p = &h;
    cout << "Ham Pizza = Rs. " << p->get_price() << endl;

    p = &c;
    cout << "Cheese Pizza = Rs. " << p->get_price() << endl;

    return 0;
}