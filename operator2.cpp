#include<iostream>
class Number{
public: 
int value;
Number (int v=0)
{
    value=v;
}
friend Number operator+ (Number& n1, Number& n2);
void display()
{
    cout<<"value:"<< value<< endl;
}
};
Number operator+(Number& n1, Number& n2)
{
    return Number(n1.value+ n2.value);
}
int main()
{
    Number num1(5);
Number num2(10);
Number result = num1+num2;
cout<<"num1:";
num1.display();
cout<<"num2:";
num2.display();
cout << "Result of num1+num2 :";
result.display();
return 0;
}
