#include<iostream>
using namespace std;

// class template
 template <class T>
 class Number{
    private:
    //Vairable of type T
    T num;
    public:
    Number (T n) // constructor
    {
        num=n;
    }
    T getNum()
    {
        return num;
    }
 };
 int main()
 {

// create object with int type
Number<int> numberInt(7);
 
// create object with double type
Number<double>numberDouble(7.7);

cout<< "int number="<< numberInt.getNum()<< endl;
cout<< "double number="<< numberDouble.getNum()<< endl;
return 0;
 }