/*Create an abstract class shape. Derive three specific classes called triangle, rectangle, and circle. Using
these four classes, design a program that will accept dimensions of a triangle, rectangle, or circle
interactively, and display the area.( and algorithm and flowchart according to the code, simple code no high tech)*/
#include <iostream>
using namespace std;

// Abstract class
class Shape
{
public:
    virtual void area() = 0;
};

// Triangle class
class Triangle : public Shape
{
public:
    float base, height;

    void area()
    {
        cout << "Enter base and height: ";
        cin >> base >> height;

        cout << "Area of Triangle = " << 0.5 * base * height << endl;
    }
};

// Rectangle class
class Rectangle : public Shape
{
public:
    float length, breadth;

    void area()
    {
        cout << "Enter length and breadth: ";
        cin >> length >> breadth;

        cout << "Area of Rectangle = " << length * breadth << endl;
    }
};

// Circle class
class Circle : public Shape
{
public:
    float radius;

    void area()
    {
        cout << "Enter radius: ";
        cin >> radius;

        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }
};

int main()
{
    Triangle t;
    Rectangle r;
    Circle c;

    t.area();
    r.area();
    c.area();

    return 0;
}