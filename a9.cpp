/*Create a base class named Employee with protected data members name and salary. Define a virtual
function named displaySalary() in the base class. Derive two classes named Manager and Developer from
the Employee class. Use constructors to initialize the data members of each derived class. Override the
displaySalary() function in both derived classes to display the employee's name and salary. In the main()
function, create objects of both derived classes and use a base class pointer to demonstrate runtime
polymorphism by calling the overridden function.*/
#include <iostream>
using namespace std;

// Base class
class Employee
{
protected:
    string name;
    int salary;

public:
    virtual void displaySalary()
    {
    }
};

// Manager class
class Manager : public Employee
{
public:
    Manager(string n, int s)
    {
        name = n;
        salary = s;
    }

    void displaySalary()
    {
        cout << "Manager Name: " << name << endl;
        cout << "Salary: Rs. " << salary << endl;
    }
};

// Developer class
class Developer : public Employee
{
public:
    Developer(string n, int s)
    {
        name = n;
        salary = s;
    }

    void displaySalary()
    {
        cout << "Developer Name: " << name << endl;
        cout << "Salary: Rs. " << salary << endl;
    }
};

int main()
{
    Employee *e;

    Manager m("Ram", 50000);
    Developer d("Shyam", 40000);

    e = &m;
    e->displaySalary();

    cout << endl;

    e = &d;
    e->displaySalary();

    return 0;
}