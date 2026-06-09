/* Create a class Time that consists of integer members for hours, minutes, and seconds.
The constructor should initialize the data to 0.A different parameterized constructor should initialize it to fixed values.
Write a member function displayTime() that should display time in format hr:min:sec.
Also write a copy constructor that should add two objects of Time passed as arguments.
Write a program to add two Time objects using the copy constructor and display their values.*/
#include<iostream>
using namespace std;
class Time{
int hours, mins,sec;
public:
Time()
{
    hours,mins,sec=0;
}
Time(int h, int m, int s){
    hours=h;
    mins=m;
    sec=s;
}
Time(Time &t1, Time &t2)
{
    sec= t1.sec + t2.sec;
    mins= t1.mins + t2.mins+ sec/60 ;
    hours= t1.hours + t2.hours + mins/60 ;
mins %= 60;
sec %=60;
}
void displayTime()
{
    cout<< hours<<":"<< mins<<":"<< sec<<endl;
}
};
int main()
{
    Time t1(1,30,40);
    Time t2(2,35,50);
    Time t3(t1,t2);
    cout<<"Time 1:-";
    t1.displayTime();
    cout<<"Time 2:-";
    t2.displayTime();
    cout<<"Time 3:-";
    t3.displayTime();
    return 0;
}
