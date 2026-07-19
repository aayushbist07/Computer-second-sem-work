/*Write a class template named Calculator that performs addition, subtraction,
multiplication, and division of two numbers. Demonstrate the program using integer and
float values.*/
#include <iostream>
using namespace std;

// Class Template
template <class T>
class Calculator
{
    T a, b;

public:
    Calculator(T x, T y)
    {
        a = x;
        b = y;
    }

    void add()
    {
        cout << "Addition = " << a + b << endl;
    }

    void subtract()
    {
        cout << "Subtraction = " << a - b << endl;
    }

    void multiply()
    {
        cout << "Multiplication = " << a * b << endl;
    }

    void divide()
    {
        cout << "Division = " << a / b << endl;
    }
};

int main()
{
    Calculator<int> c1(10, 5);

    cout << "Integer Values" << endl;
    c1.add();
    c1.subtract();
    c1.multiply();
    c1.divide();

    cout << endl;

    Calculator<float> c2(10.5, 2.5);

    cout << "Float Values" << endl;
    c2.add();
    c2.subtract();
    c2.multiply();
    c2.divide();

    return 0;
}