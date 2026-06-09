/*write a program to create a class named Rectangle that has private member variables for length and breadth.
 Provide public member functions to set the dimensions, calculate the area,and calculate the perimeter of the rectangle.Demonstrate  
 functionality by creating an object of the rectangle class and using it to calculate and display the area and perimeter.*/ 
 #include <iostream>
using namespace std;
class Rectangle {
private:
    int length,breadth;
public:
    void setDimensions(int l, int b);
     int getlength();
    int calculateArea();
    int calculatePerimeter();
};
void Rectangle:: setDimensions(int l, int b)
{
    length=l;
breadth=b;}
int Rectangle:: getlength()
{
        return length;}
int Rectangle::calculateArea()
 {
        return length * breadth;
    }
    int Rectangle::calculatePerimeter()
     {
        return 2 * (length + breadth);
    }
int main() {
    Rectangle rect;
    rect.setDimensions(2,4);
    cout<<rect.getlength()<<endl;
    cout<<"Area:"<<rect.calculateArea()<<endl;
    cout<<"Perimeter:"<<rect.calculatePerimeter();
    return 0;
}