#include<iostream>
using namespace std;
class Length
private:  
{
int feet;
int inches;
public:
Length (int f=0, int i=0)
{
    feet = f+i/12;
inches =i %12;
}
Length operator+(Length &l)
{
return Length(feet+ l.feet, inches + l.inches);
}
};
