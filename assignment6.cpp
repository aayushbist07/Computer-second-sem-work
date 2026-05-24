/*Write a C++ program using a function (pass by reference) that calculates the
values of x and y from the two linear equations.
a) ax + by = m
b) cx + dy = n
The solutions are given as
c) x = (md - bn)/(ad - cb)
d) y = (na - mc)/(ad - cb)
The function should take eight arguments and return nothing.*/
#include<iostream>
using namespace std;
class Linear{
int a,b,c,d,m,n;
public:
Linear(int &a1,int &b1,int &c1,int &d1,int &m1,int &n1)
{
a=a1;
b=b1;
c=c1;
d=d1;
m=m1;
n=n1;
}
void solve(int &x, int &y)
{
    int de=(a*d-c*b);
    x=(m*d - b*n)/de;
    y=(n*a-m*c)/de;
}
};
int main ()
{
    int a,b,c,d,m,n;
    int x=0,y=0;
    cout<<"Enter values for a,b,c,d,m,n:";
    cin>>a>>b>>c>>d>>m>>n;
    Linear eq (a,b,c,d,m,n);
    eq.solve(x,y);
    cout<<"The solution is:x="<<x<<"y="<<y<<endl;
}