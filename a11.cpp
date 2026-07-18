/*Create a base class named BankAccount with protected data members accountHolder and balance.
Define a virtual function named showDetails() in the base class. Derive two classes named
SavingAccount and CurrentAccount from the BankAccount class. Use constructors to initialize the
account details in each derived class. Override the showDetails() function in both derived classes to
display the account holder's name and balance. In the main() function, create objects of both derived
classes and use a base class pointer to invoke the overridden function and demonstrate runtime
polymorphism.*/
#include <iostream>
using namespace std;

// Base class
class BankAccount
{
protected:
    string accountHolder;
    float balance;

public:
    virtual void showDetails()
    {
    }
};

// SavingAccount class
class SavingAccount : public BankAccount
{
public:
    SavingAccount(string n, float b)
    {
        accountHolder = n;
        balance = b;
    }

    void showDetails()
    {
        cout << "Saving Account" << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: Rs. " << balance << endl;
    }
};

// CurrentAccount class
class CurrentAccount : public BankAccount
{
public:
    CurrentAccount(string n, float b)
    {
        accountHolder = n;
        balance = b;
    }

    void showDetails()
    {
        cout << "Current Account" << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: Rs. " << balance << endl;
    }
};

int main()
{
    BankAccount *b;

    SavingAccount s("Ram", 5000);
    CurrentAccount c("Hari", 8000);

    b = &s;
    b->showDetails();

    cout << endl;

    b = &c;
    b->showDetails();

    return 0;
}