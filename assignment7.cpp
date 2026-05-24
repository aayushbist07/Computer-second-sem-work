/*Do you remember a graph paper; plotting x-axis, y-axis and origin (0,0). A Point
consists of two values; one is x-axis value and other one is y-axis value.
Considering only a first quadrant and two such points, write a program that finds
the distance between each other. Use class and objects.*/
#include<iostream>
#include<cmath>
using namespace std;
class Point{
private:
double x,y;
public:
void setPoints(double x1, double y1)
{
    x=x1;
    y=y1;
}
// using another object as paramater
void distance(Point P){
    double d= sqrt((x-P.x)*(x-P.x)+(y-P.y)*(y-P.y));
cout<<"Distance between two points:"<<d<<endl;
}
};
int main()
{
    Point p1,p2;
    double x1,
}
