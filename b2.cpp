/*Write a function template to find the larger of two numbers. Demonstrate the function
using int, float, and char data types.*/
#include <iostream>
using namespace std;

// Template function
template <class T>
T larger(T a, T b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    cout << "Larger int = " << larger(10, 20) << endl;
    cout << "Larger float = " << larger(4.5f, 2.3f) << endl;
    cout << "Larger char = " << larger('A', 'C') << endl;

    return 0;
}