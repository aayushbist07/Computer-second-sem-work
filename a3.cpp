/*Define inheritance. Write a program to create a base class named “circle”. Derive another class
“cylinder” from it. The program should calculate the total surface area of the circle and cylinder using the
concept of inheritance. The circle should have data fields i.e. radius, area and method getRadius ( ) should
take the value of radius from the user. The cylinder should have an additional data field i.e. height and
additional method getHeight( ) to assign the value of height. Similarly, the area( ) function calculates the
area, and the display( ) function prints the final area of the created objects i.e circle and cylinder. (Circle
surface area=pi*r*r and cylinder surface area=2*pi*r*r+2*pi*r*h)*/
#include <iostream>
using namespace std;

// Base class
class Circle
{
public:
    float radius, area;

    // Function to input radius
    void getRadius()
    {
        cout << "Enter radius: ";
        cin >> radius;
    }

    // Function to calculate circle area
    void calculateArea()
    {
        area = 3.14 * radius * radius;
    }

    // Function to display circle area
    void display()
    {
        cout << "Area of Circle = " << area << endl;
    }
};

// Derived class
class Cylinder : public Circle
{
public:
    float height;

    // Function to input height
    void getHeight()
    {
        cout << "Enter height: ";
        cin >> height;
    }

    // Function to calculate cylinder surface area
    void calculateCylinderArea()
    {
        area = (2 * 3.14 * radius * radius) + (2 * 3.14 * radius * height);
    }

    // Function to display cylinder area
    void displayCylinder()
    {
        cout << "Surface Area of Cylinder = " << area << endl;
    }
};

int main()
{
    Circle c;
    Cylinder cy;

    // Circle
    c.getRadius();
    c.calculateArea();
    c.display();

    cout << endl;

    // Cylinder
    cy.getRadius();
    cy.getHeight();
    cy.calculateCylinderArea();
    cy.displayCylinder();

    return 0;
}