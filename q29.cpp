/*Implement a Time class. Each object of this class will represent a specific time of day
specifying hour, minute and second. Include a default and a parameterized constructor. Also
overload the following operators for the same class.
a) + operator to add two Time objects. (e.g. T3 = T1 + T2;)
b) >> operator to read hour, minute and second from a user. (e.g. cin >> T4;)
c) << operator to print our Time object in 00:00:00 format. (e.g. cour << T5;)
Write a driven program (main program) to test those operators.*/
#include <iostream>
#include <iomanip>
using namespace std;

class Time
{
private:
    int hour, minute, second;

public:
    // Default constructor
    Time()
    {
        hour = 0;
        minute = 0;
        second = 0;
    }

    // Parameterized constructor
    Time(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }

    // Overload + operator
    Time operator+(Time t)
    {
        Time temp;

        temp.second = second + t.second;
        temp.minute = minute + t.minute + temp.second / 60;
        temp.hour = hour + t.hour + temp.minute / 60;

        temp.second = temp.second % 60;
        temp.minute = temp.minute % 60;

        return temp;
    }

    // Friend functions
    friend istream &operator>>(istream &in, Time &t);
    friend ostream &operator<<(ostream &out, Time &t);
};

// Overload >> operator
istream &operator>>(istream &in, Time &t)
{
    cout << "Enter hour: ";
    in >> t.hour;

    cout << "Enter minute: ";
    in >> t.minute;

    cout << "Enter second: ";
    in >> t.second;

    return in;
}

// Overload << operator
ostream &operator<<(ostream &out, Time &t)
{
    out << setfill('0') << setw(2) << t.hour << ":"
        << setw(2) << t.minute << ":"
        << setw(2) << t.second;

    return out;
}

int main()
{
    Time T1, T2, T3;

    cout << "Enter first time:" << endl;
    cin >> T1;

    cout << "\nEnter second time:" << endl;
    cin >> T2;

    T3 = T1 + T2;

    cout << "\nFirst Time  : " << T1 << endl;
    cout << "Second Time : " << T2 << endl;
    cout << "Sum of Time : " << T3 << endl;

    return 0;
}