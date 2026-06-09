/*Assume a bank maintains two kinds of account for customers, one is saving account and the other is current account.The saving account provides interest and withdrawal
features. The current account provides only withdrawal. Create a class Account that stores customer names, account number and type of account. From this class, derive Current_account
and Saving_account class to make them more specific to their requirements.Include necessary constructor, destructor and member functions to achieve following tasks:
i) Accept deposit from customer and update the balance.
ii) Display the balance.
iii) Compute and deposit interest*/
#include <iostream>
#include <string>
using namespace std;
class Account
{
public:
    string customerName;
    int accountNumber;
    string accountType;
    double balance;
    Account(string name, int accNo, string type, double bal)
    {
        customerName = name;
        accountNumber = accNo;
        accountType = type;
        balance = bal;
    }
    virtual ~Account()
    {
        cout << "Account Destructor Called" << endl;
    }
    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposited Amount: " << amount << endl;
    }
    void displayBalance()
    {
        cout << "Customer Name : " << customerName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type  : " << accountType << endl;
        cout << "Balance       : " << balance << endl;
    }
    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn Amount: " << amount << endl;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }
};
class Saving_account : public Account
{
private:
    double interestRate;

public:
    Saving_account(string name, int accNo, double bal, double rate)
        : Account(name, accNo, "Saving", bal)
    {
        interestRate = rate;
    }

    ~Saving_account()
    {
        cout << "Saving Account Destructor Called" << endl;
    }
    void computeInterest()
    {
        double interest = balance * interestRate / 100;
        balance += interest;
        cout << "Interest Deposited: " << interest << endl;
        cout << "Updated Balance: " << balance << endl;
    }
};
class Current_account : public Account
{
public:
    Current_account(string name, int accNo, double bal){
        : Account(name, accNo, "Current", bal)
    }
    ~Current_account()
    {
        cout << "Current Account Destructor Called" << endl;
    }
};

int main()
{
    Saving_account s("Aayush", 1001, 10000, 5);
    Current_account c("Pratish", 2001, 15000);
    cout << "\n Saving Account:\n";
    s.deposit(2000);
    s.displayBalance();
    s.computeInterest();
    s.withdraw(3000);
    s.displayBalance();
    cout << "\n Current Account:\n";
    c.deposit(5000);
    c.withdraw(4000);
    c.displayBalance();
    return 0;
}