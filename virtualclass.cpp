#include<iostream>
#include<string>
using namespace std;
class Person
{
protected:
    string name;
    int code;
public:
    void getPerson()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Code: ";
        cin >> code;
    }
    void displayPerson()
    {
        cout << "Name : " << name << endl;
        cout << "Code : " << code << endl;
    }
};
class Account : virtual public Person
{
protected:
    float pay;

public:
    void getPay()
    {
        cout << "Enter Pay: ";
        cin >> pay;
    }

    void displayPay()
    {
        cout << "Pay        : " << pay << endl;
    }
};
class Admin : virtual public Person
{
protected:
    int experience;
public:
    void getExperience()
    {
        cout << "Enter Experience (years): ";
        cin >> experience;
    }
    void displayExperience()
    {
        cout << "Experience : " << experience << " years" << endl;
    }
};

class Master : public Account, public Admin
{
public:
    void create()
    {
        getPerson();
        getPay();
        getExperience();
    }

    void update()
    {
        cout << "\nUpdate Information\n";
        getPerson();
        getPay();
        getExperience();
    }

    void display()
    {
        cout << "\n----- Master Information -----\n";
        displayPerson();
        displayPay();
        displayExperience();
    }
};
int main()
{
    Master m;
    cout << "Enter Master Details:\n";
    m.create();
    m.display();
    char ch;
    cout << "\nDo you want to update information? (y/n): ";
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
    {
        m.update();
        m.display();
    } 
    return 0;
}