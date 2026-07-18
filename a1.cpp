/*Q1. Define a virtual base class. Write a program to create a base class i.e. Employee. Derive two classes:
administrative and academic from the base class. Derive another class HOD from these two derived
classes. Create appropriate data members and member functions in each class to show the implementation
of a virtual base class*/
#include <iostream>
using namespace std;

// Base class
class Employee
{
public:
    int id;
};

// Administrative class
class Administrative : virtual public Employee
{
public:
    int adminCode;

    void getAdmin()
    {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Administrative Code: ";
        cin >> adminCode;
    }
};

// Academic class
class Academic : virtual public Employee
{
public:
    int subjectCode;

    void getAcademic()
    {
        cout << "Enter Subject Code: ";
        cin >> subjectCode;
    }
};

// HOD class
class HOD : public Administrative, public Academic
{
public:
    void display()
    {
        cout << "\nEmployee ID : " << id << endl;
        cout << "Administrative Code : " << adminCode << endl;
        cout << "Subject Code : " << subjectCode << endl;
    }
};

int main()
{
    HOD h;

    h.getAdmin();
    h.getAcademic();

    h.display();

    return 0;
}