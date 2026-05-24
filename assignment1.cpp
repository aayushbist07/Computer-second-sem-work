/*A student wants to create a smart calculator in C++ using class and object
concepts. Write a C++ program by creating a class named Calculator that uses
function overloading to perform different operations such as adding two integers,
adding two floating-point numbers, and multiplying three integers using the same
function name. Also create an inline member function to calculate the square of a
number. Create an object of the class in main() and display all results with suitable
output statements.*/
#include<iostream>
using namespace std;
class Calculator{
public: 
int cal(int a, int b){
    return (a+b);
}
float cal( float a, float b){
    return (a+b);
}
int cal( int a, int b, int c){
    return (a*b*c);
}
inline int getSquare(int num){
    return (num*num);
}
};
int main(){
Calculator C1;
int a,b,num;
float p,q,r,s,t;
cout<<"Enter two integers"<<endl;
cin>>a>>b;
cout<<"Enter two floating numbers:"<<endl;
cin>>p>>q;
cout<<"Enter three numbers for multiplying"<<endl;
cin>>r>>s>>t;
cout<<"Enter any number for squaring"<<endl;
cin>>num;
cout<<"Sum of two numbers are:"<<C1.cal(a,b)<<endl;
cout<<"Sum of floating numbers are:"<<C1.cal(p,q)<<endl;
cout<<"Product of three numbers are:"<<C1.cal(r,s,t)<<endl;
cout<<"Square of a number:"<<C1.getSquare(num)<<endl;
return 0;
}