#include<iostream>
 using namespace std;
 class Student{
    private:
    string name;
    int roll_no;
    public:
    void setName(string s)
    {
        name=s;
    }
    void setRoll(int r)
    {
        roll_no=r;
    }
void displayDetails()
{
cout << "Name: " <<name<<endl;
cout << "RollNO.: " <<roll_no<<endl;
}
};
int main()
{
Student s1;
s1.setName("Aayush");
s1.setRoll(43);
s1.displayDetails();
}