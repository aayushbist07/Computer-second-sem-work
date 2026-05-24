/*Write a program to create a class named Time that includes private member
variables for hours, minutes, and seconds. It should include a default constructor to
initialize all values to 0, a parameterized constructor to initialize time with fixed
values, and a member function to display time in the format hr:min:sec. The class
should also include a copy constructor that adds two Time objects passed as
arguments and stores the result in a new object. Demonstrate the functionality by
creating multiple Time objects and adding them using the copy constructor, then
display the final result.*/
#include<iostream>
using namespace std;
class Time{
int hours,mins,sec;
public:
Time(){
 hours =0; 
 mins=0;
  sec=0;
}
Time( int h, int m, int s)
{
    hours=h;
    mins=m; 
    sec=s;
}
Time( Time &t1, Time &t2)
{
     sec= t1.sec + t2.sec;
     mins=t1.mins + t2.mins+ sec/60;
     hours = t1.hours +t2.hours +mins/60;
     mins %= 60;
     sec %= 60;
}
void displayTime()
{
    cout<<hours<<":"<<mins<<":"<<sec<<endl;
}    
};
int main ()
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