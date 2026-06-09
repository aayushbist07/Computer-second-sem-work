#include<iostream>
using namespace std;
class Student{
    private:
    string Name;
    int roll_no;
    static int count;
    public:
    void setData(string st,int roll)
    {
        Name=st;
        roll_no=roll;
        count ++;
    } 
    void display()
    {
        cout<<"Name:"<<Name<<endl;
        cout<<"ROll Number:"<< roll_no<<endl;
    }
    static int getCount()
{
return count;
}
};
int Student::count=0;
int main()
{
Student s1,s2;
s1.setData("Aayush",43);
s2.setData("Pratish",49);
s1.display();
s2.display();
cout<<"No of students entered:"<<Student::getCount();
}