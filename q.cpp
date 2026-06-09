/* A class "master" derives information from "account" and "admin" classes which in turn are derived from the class "Person"
Define all the four classes and write a program to create,update and display the information contained in master objects using concept of virtual 
base class
Person has data members: name and code
account has data member: pay
admin has data member: experience
master has derived data members: name,code,experience and pay*/
#include<iostream>
using namespace std;
class Person{
    string name;
    int code;
   
    class virtual account{
        float pay;
    }

    class virtual admin{
        string experience;
    }
    class master{
        string name;
        int code;
        string experience;
        float pay;
    }
};