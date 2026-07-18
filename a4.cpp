/* Write a template function that returns the average of all the elements of an array. The arguments to the
function should be the array name and the size of the array (type int). In main (), demonstrate the concept
of the template with arrays of type int, long, double, and char.*/
#include <iostream>
using namespace std;

// Template function to find average
template <class T>
T average(T arr[], int size)
{
    T sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    return sum / size;
}

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    long b[] = {100, 200, 300, 400, 500};
    double c[] = {1.5, 2.5, 3.5, 4.5, 5.5};
    char d[] = {'A', 'B', 'C', 'D', 'E'};

    cout << "Average of int array = " << average(a, 5) << endl;
    cout << "Average of long array = " << average(b, 5) << endl;
    cout << "Average of double array = " << average(c, 5) << endl;
    cout << "Average of char array = " << average(d, 5) << endl;

    return 0;
}