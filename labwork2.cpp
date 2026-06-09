/* Write a C++ program that reads ten positive numbers from the user and finally prints the largest of all.(use for loop, if condition and function).*/
#include <iostream>
using namespace std;
class LargestNumber
{
private:
    int numbers[10];
public:
    void readNumbers()
    {
        cout << "Enter 10 positive numbers:\n";
        for (int i = 0; i < 10; i++)
        {
            cin >> numbers[i];
        }
    }
    int findLargest()
    {
        int largest = numbers[0];
        for (int i = 1; i < 10; i++)
        {
            if (numbers[i] > largest)
            {
                largest = numbers[i];
            }
        }
        return largest;
    }
    void displayLargest()
    {
        cout << "Largest number is: " << findLargest() << endl;
    }
};
int main()
{
    LargestNumber obj;
    obj.readNumbers();
    obj.displayLargest();
    return 0;
}