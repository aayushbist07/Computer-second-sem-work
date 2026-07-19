/*Write a program to perform the division of two numbers. If the denominator is zero,
throw an exception and display an appropriate error message.*/
#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    try
    {
        if(b == 0)
            throw b;

        cout << "Division = " << a / b << endl;
    }
    catch(int)
    {
        cout << " Division by zero is not possible.";
    }

    return 0;
}