/*Write a C++ program that reads ten positive numbers from the user and finally
prints the largest of all. (use for loop, if condition and function.)*/
#include<iostream>
using namespace std;
class large {
private:
int large;
public:
// defining the setter
void setValue(int L)
{
large=L;
}
// defining a getter
int getValue(){
    return large;
}
};
int main(){
    int a[10],i,L;
    cout<<"Enter 10 numbers:"<<endl;
    for (i=0;i<10;i++)
    {
        cin>>a[i];
    }
    L=a[0];
for (i=0;i<10;i++)
{
    if (a[i]>L){
        L=a[i];
    }
}
large l1;
l1.setValue(L);
int large=l1.getValue();
cout<<"The largest number is:"<<large<<endl;
}