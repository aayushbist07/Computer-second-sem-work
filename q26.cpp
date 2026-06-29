/*Create a base class called Shape. Use this class to store two double type values that could be used to compute the area of figures, Derive two specific classes called Triangle and Rectangle from the base Shape. Add to the base class, a member function set_data() to initialize base class data members and another member function display_data() to compute and display the area of figures. Make display_area() as a virtual function and redefine this function in the derived classes to suit their requirements. Using these three classes,design a program that will accept dimensions of a triangle or a rectangle interactively, and display the area. */
#include<iostream>
using namespace std;

class Shape
{
protected:
    double side_one, side_two;

public:

    void set_data(double a, double b)
    {
        side_one = a;
        side_two = b;
    }

    virtual void display_area()
{
}
};

class Rectangle : public Shape
{
public:

    void display_area()
    {
        double area;

        area = side_one * side_two;

        cout<<"Area of Rectangle = "<<area<<endl;
    }
};

class Triangle : public Shape
{
public:

    void display_area()
    {
        double area;

        area = 0.5 * side_one * side_two;

        cout<<"Area of Triangle = "<<area<<endl;
    }
};

int main()
{
    Rectangle r;
Triangle t;

double l,b;

cout<<"Enter length and breadth of rectangle: ";
cin>>l>>b;
r.set_data(l,b);
r.display_area();

cout<<"\nEnter base and height of triangle: ";
cin>>l>>b;
t.set_data(l,b);
t.display_area();
return 0;
}