/*Write a program to find the element at a given index in an array. If the user enters an
invalid index, throw an exception and display an appropriate error message*/
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int index;

    cout << "Enter index: ";
    cin >> index;

    try
    {
        if(index < 0 || index >= 5)
            throw index;

        cout << "Element = " << arr[index] << endl;
    }
    catch(int)
    {
        cout << "Error! Invalid index.";
    }

    return 0;
}