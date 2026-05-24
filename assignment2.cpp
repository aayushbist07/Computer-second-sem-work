/*Write a program to create a class named Circle that has a private member
variable for radius. Provide public member functions to set the radius, calculate the
area, and calculate the circumference of the circle. Demonstrate the functionality
by creating an object of the Circle class and using it to calculate and display the
area and circumference.*/
#include<iostream>
using namespace std;
class Circle
{
private: 
float radius;
public:
// setting positive radius
void setRadius(float r){
    radius =r;
}
// calculating area
float getArea(){
    return 3.14*radius*radius;
}
// calculating circumference
float getCircumference()
{
    return 2*3.14*radius;
}
};
int main()
{
Circle c1;
float r;
cout<<"Enter the radius"<<endl;
cin>>r;
c1.setRadius(r);
cout<<"Area of circle is:"<<c1.getArea()<<endl;
cout<<"Circumference of circle is:"<<c1.getCircumference()<<endl;
return 0;
}