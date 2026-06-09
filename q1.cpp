/* Define a class named student with the following data members
rollno(int), name(string),year(int),program(string),email(string). Write a class in the program with appropriate member functions that asks a user to enter sample data and then display it.
Modify the above program so that instead of displaying values directly, the getter function returns all the students details at once using a structure*/
#include<iostream>
using namespace std;
class Student{
private:
int rollno;
string name;
int year;
string program;
string email;
public:
void setData(int r, string n, int y, string p, string e)
{
    rollno=r;
    name=n;
    year=y;
    program=p;
    email=e;
}
void getData(){
    cout<<"The roll no is:"<<rollno <<endl;
    cout<<"The name is:"<<name <<endl;
    cout<<"The year is:"<<year <<endl;
    cout<<"The program is:"<<program<<endl;
    cout<<"The email is:"<<email<<endl;
}
};
int main()
{
    Student s1;
    int r,y;
    string n,p,e;
    cout<< "Enter the roll no:";
    cin>>r;

    cout<<"Enter the year:";
    cin>>y;
    cin.ignore(); // clear the newline character from the input buffer

    cout<<"Enter name:";
    getline(cin,n);

    cout<<"Enter Program:";
    getline(cin,p);

    cout<<"Enter Email:";
    getline(cin,e);
    s1.setData(r,n, y,p,e);
    cout<<"\n Student Information :"<< endl;
    s1.getData();
    return 0;
    }