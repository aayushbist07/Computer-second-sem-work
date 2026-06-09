/* Write a C++ program to input the values of a,b and c of a quadratic equation ax^2+bx+c=0.Find whether the  roots are real or imaginary using 
the condition b^2-4ac>=0. Also calculate and display the roots of the equation. x=(-b +- (sqrt(b^2-4ac)))/2a
d= (b*b)-(4*a*c);
root1=(-b+sqrt(d))/(2*a);
root2=(-b-sqrt(d))/(2*a);*/
#include <iostream>
#include <cmath>
using namespace std;
class Quadratic
{
private:
    double a, b, c;
public:
    void input()
    {
        cout << "Enter values of a, b and c: ";
        cin >> a >> b >> c;
    }
    void findRoots()
    {
        double d = (b * b) - (4 * a * c);
        if (d >= 0)
        {
            double root1 = (-b + sqrt(d)) / (2 * a);
            double root2 = (-b - sqrt(d)) / (2 * a);
            cout << "Roots are Real" << endl;
            cout << "Root 1 = " << root1 << endl;
            cout << "Root 2 = " << root2 << endl;
        }
        else
        {
            cout << "Roots are Imaginary" << endl;
        }
    }
};
int main()
{
    Quadratic q;
    q.input();
    q.findRoots();
    return 0;
}