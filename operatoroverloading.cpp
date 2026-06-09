#include<iostream>
using namespace std;
class Number{
private: int value;
public:
Number ( int v=0)
{
    value=v;
}
Number operator-(){
    return Number(-value);
}
void display()
{
    cout << "Value:"<< value<< endl;
}
};
int main()
{
    Number num1(10);
    cout << "original number:";
    num1.display();
    Number num2=-num1;
    cout<<"Negated number:";
    num2.display();
    return 0;
}