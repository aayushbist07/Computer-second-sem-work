/*4. Write a C++ program to input the values of a, b, and c of a quadratic equation
ax2 + bx + c = 0. Find whether the roots are real or imaginary using the condition
b2 - 4ac ≥ 0. Also calculate and display the roots of the equation.
x = (-b ± √(b2 − 4ac)) / 2a
d = (b * b) - (4 * a * c);
root1 = (-b + sqrt(d)) / (2 * a);
root2 = (-b - sqrt(d)) / (2 * a);*/
#include<iostream>
#include<math.h>
using namespace std;
class Equation{
private:
double a,b,c,d; 
float root1, root2;
public:
// defining a setter
void setConstants(){
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    cout<<"Enter c:";
    cin>>c;
}
// checking real or imaginary roots
bool check(){
    d = (b * b) - (4 * a * c);
    if (d>=0){
        cout<<"Real roots \n";
        return true;
    }
    else 
    {
        cout<<"Imaginary roots \n";
        return false;
    }
}
// printing the roots
void roots(){
    if(d>=0){
        root1 = (-b + sqrt(d)) / (2 * a);
root2 = (-b - sqrt(d)) / (2 * a);
cout << "Root one="<<root1<<endl;
cout << "Root two="<<root2<<endl;    
}
else {
    cout<<"No real roots to display";
}
}
};
int main(){
    Equation e1;
    e1.setConstants();
    bool isReal=e1.check();
    if (isReal)
    {
        e1.roots();
    }
    return 0;
}
