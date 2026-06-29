/*Create a class called time that has separate int member data for hours, minutes and seconds.
One constructor should initialize this data to 0, and another should initialize it to fixed values.
Another member function should display it, in HH:MM:SS format. The final member
function should add two objects of type time using operator overloading ( Overload '+'
operator). Write a main() function to test your program.*/
#include <iostream>
using namespace std;
class Time
{
private:
    int hours, mins, sec;

public:
    Time()
    {
        hours = 0;
        mins = 0;
        sec = 0;
    }
    Time(int h, int m, int s)
    {
        hours = h;
        mins = m;
        sec = s;
    }
    Time operator+(Time t)
    {
        Time temp;
        temp.sec = sec + t.sec;
        temp.mins = mins + t.mins + temp.sec / 60;
        temp.hours = hours + t.hours + temp.mins / 60;
        temp.sec = temp.sec % 60;
        temp.mins = temp.mins % 60;
        return temp;
    }
    void displayTime()
    {
        cout << hours << ":" << mins << ":" << sec << endl;
    }
};
int main()
{
    Time t1(2, 45, 50);
    Time t2(3, 20, 30);
    Time t3;
    t3 = t1 + t2;
    cout << "Time 1=";
    t1.displayTime();
    cout << "Time 2=";
    t2.displayTime();
    cout << "Time 3=";
    t3.displayTime();
    return 0;
}
