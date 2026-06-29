/*Write a program in C++ to overload
arithmetic assignment operator (+=) in order to add distance values of two objects obj1 and
obj2 of class my_Distance. While considering the distance value of each object it must be in
terms of meter and centimeter, i.e. int meter and float centimeter. Use two member functions
get_Dist() and show_Dist() for accepting user inputs and displaying the result,respectively. */
#include<iostream>
using namespace std;

class my_Distance
{
private:
    int meter;
    float centimeter;

public:
    // Function to input distance
    void get_Dist()
    {
        cout << "Enter meter: ";
        cin >> meter;

        cout << "Enter centimeter: ";
        cin >> centimeter;
    }

    // Function to display distance
    void show_Dist()
    {
        cout << "Distance = " << meter << " meter " << centimeter << " centimeter";
    }

    // Overload += operator
    void operator +=(my_Distance d)
    {
        meter = meter + d.meter;
        centimeter = centimeter + d.centimeter;

        meter = meter + (int)(centimeter / 100);
        centimeter = (int)centimeter % 100;
    }
};

int main()
{
    my_Distance obj1, obj2;

    cout << "Enter first distance:" << endl;
    obj1.get_Dist();

    cout << "\nEnter second distance:" << endl;
    obj2.get_Dist();

    obj1 += obj2;

    cout << "\nTotal Distance:" << endl;
    obj1.show_Dist();

    return 0;
}