//define class called rectangle
#include <iostream>
using namespace std;
class Rectangle{
    //length and breadth
    //set size
    double length,breadth;
    public:
    void setSize(double length,double breadth);
    //int getArea()
    void getArea();
    //int getPerimeter()
    void getPerimeter();
};
void Rectangle::getArea(){
    double area = this->breadth * this->length;
    cout<<area<<endl;
}
void Rectangle::getPerimeter(){
    double perimeter = 2*(this->length+this->breadth);
    cout<<perimeter<<endl;
}
void Rectangle::setSize(double length,double breadth)
{
    this->length = length;
    this->breadth = breadth;
}
int main()
{
    Rectangle r1;
    cout<<"Enter the length and breadth of the Rectangle";
    int length,breadth;
    cin>>length>>breadth;
    r1.setSize(length,breadth);
    r1.getArea();
    r1.getPerimeter();
}
