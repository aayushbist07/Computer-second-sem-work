#include<iostream>
using namespace std;
class Number{
    public:
    int a,b;
    Number()
    {
        a=10;
        b=20;
    }
    Number (int x, int y)
    {
        a=x;
        b=y;
    }
    void display(){
        cout<<"a:"<<a<<"b:"<<b<<endl;
    }
};
int main()
{
    Number n1;
    cout<< "Using default constructor:"<<endl;
    n1.display();
    Number n2(30,40);
    cout<< "Using parameterized constructor:"<< endl;
    n2.display();
    return 0;
}