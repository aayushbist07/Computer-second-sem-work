/*Write a C++ program to demonstrate exception handling by throwing and catching
different types of exceptions (int, float, char, and a catch-all handler).*/
#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 10;
    }
    catch(int)
    {
        cout << "Integer exception caught." << endl;
    }

    try
    {
        throw 5.5f;
    }
    catch(float)
    {
        cout << "Float exception caught." << endl;
    }

    try
    {
        throw 'A';
    }
    catch(char)
    {
        cout << "Character exception caught." << endl;
    }

    try
    {
        throw "Error";
    }
    catch(...)
    {
        cout << "Catch-all exception caught." << endl;
    }

    return 0;
}