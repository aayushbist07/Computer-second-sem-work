/* You nedd to create a base class called Shape that stores two doubles type values (say dim1,dim2).These values will be used to compute the area of different figures.
Derive two specific classes, Triangle and Rectangle, from the base class Shape. Implement a member function setData() in the base class to initialize its data members and 
another member function displayArea() to compute and display the area of the figures. Make displayArea() a virtual function and redefine this function in the derived
classes to suit their specific requirements. Finally, design a program that will accept dimensions of a triangle or a rectangle interactively and display the area.*/
#include <iostream>
using namespace std;
class Shape
{
public:
    double dim1, dim2;
    void setData(double d1, double d2)
    {
        dim1 = d1;
        dim2 = d2;
    }
    virtual void displayArea() = 0;
};
class Triangle : public Shape
{
public:
   void displayArea()
    {
        double area = 0.5 * dim1 * dim2;
        cout << "Area of Triangle = " << area << endl;
    }
};
class Rectangle : public Shape
{
public:
     void displayArea() 
    {
        double area = dim1 * dim2;
        cout << "Area of Rectangle = " << area << endl;
    }
};
int main()
{
    Triangle t1;
    Rectangle r1;
    t1.setData(2,4);
    t1.displayArea();
    r1.setData(4,6);
    r1.displayArea();
    return 0;
}