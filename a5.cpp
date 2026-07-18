/*Create a class Person and two derived classes Employee and student inherited from class Person. Now
create a class Manager which is derived from two base classes Employee and Student. Show the use of a
virtual base class.*/
#include <iostream>
using namespace std;

// Base class
class Person
{
public:
    int id;

    void getPerson()
    {
        cout << "Enter Person ID: ";
        cin >> id;
    }
};

// Employee class
class Employee : virtual public Person
{
public:
    int salary;

    void getEmployee()
    {
        cout << "Enter Salary: ";
        cin >> salary;
    }
};

// Student class
class Student : virtual public Person
{
public:
    int roll;

    void getStudent()
    {
        cout << "Enter Roll No: ";
        cin >> roll;
    }
};

// Manager class
class Manager : public Employee, public Student
{
public:
    void display()
    {
        cout << "\nPerson ID = " << id << endl;
        cout << "Salary = " << salary << endl;
        cout << "Roll No = " << roll << endl;
    }
};

int main()
{
    Manager m;

    m.getPerson();
    m.getEmployee();
    m.getStudent();

    m.display();

    return 0;
}