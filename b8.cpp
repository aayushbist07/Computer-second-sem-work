/*Write a program to calculate the square root of a number. If the user enters a negative
number, throw an exception and display an error message.*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float num;

    cout << "Enter a number: ";
    cin >> num;

    try
    {
        if(num < 0)
            throw num;

        cout << "Square Root = " << sqrt(num) << endl;
    }
    catch(float)
    {
        cout << "Error! Square root of a negative number is not possible.";
    }

    return 0;
}