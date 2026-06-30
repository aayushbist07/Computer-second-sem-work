// Write a function template to find the larger of two numbers. Demonstrate the function using int, float, and char data types.
#include <iostream>
using namespace std;

// Function template
template <class T>
T larger(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int x = 10, y = 20;
    float c = 12.5,d = 9.8;
    char e = 'A', f = 'Z';

    cout << "Larger integer: " << larger(x, y) << endl;
    cout << "Larger float: " << larger(c, d) << endl;
    cout << "Larger character: " << larger(e, f) << endl;

    return 0;
}