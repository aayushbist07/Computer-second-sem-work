/*Create a base class named Vehicle with protected data members brand and speed. Define a virtual
function named display() in the base class. Derive two classes named Car and Bike from the Vehicle class.
Use constructors to initialize the data members of each derived class. Override the display() function in
both derived classes to display the details of the respective vehicle. In the main() function, create objects
of both derived classes and use a base class pointer to call the overridden function, thereby demonstrating
runtime polymorphism.*/
#include <iostream>
using namespace std;

// Base class
class Vehicle
{
protected:
    string brand;
    int speed;

public:
    virtual void display()
    {
    }
};

// Car class
class Car : public Vehicle
{
public:
    Car(string b, int s)
    {
        brand = b;
        speed = s;
    }

    void display()
    {
        cout << "Car Brand: " << brand << endl;
        cout << "Speed: " << speed << " km/hr" << endl;
    }
};

// Bike class
class Bike : public Vehicle
{
public:
    Bike(string b, int s)
    {
        brand = b;
        speed = s;
    }

    void display()
    {
        cout << "Bike Brand: " << brand << endl;
        cout << "Speed: " << speed << " km/hr" << endl;
    }
};

int main()
{
    Vehicle *v;

    Car c("Toyota", 180);
    Bike b("Yamaha", 120);

    v = &c;
    v->display();

    cout << endl;

    v = &b;
    v->display();

    return 0;
}