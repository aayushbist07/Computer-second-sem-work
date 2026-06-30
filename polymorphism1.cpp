#include<iostream>
using namespace std;
class Pizza
{
protected:
string name;
double price;
public:
virtual void displayPrice()=0;
virtual ~Pizza()
{
}
};
class Margherita : public Pizza
{
    public:
    Margherita (string n, double p)
    {
        name=n;
        price=p;
    }
    void displayPrice()
    {
        cout<<"Price of:"<<name<<"is:"<< price<<endl;
    }
};
    class Pepperoni : public Pizza
    {
        public:
        Pepperoni(string n, double p)
        {
            name=n;
            price=p;
        }
void displayPrice()
{
    cout<<"Price of:"<<name<<"is:"<< price<<endl;
}    
};
class Veggie : public Pizza 
{
    public:
    Veggie(string n, double p)
        {
            name=n;
            price=p;
        }
void displayPrice()
{
    cout<<"Price of:"<<name<<"is:"<< price<<endl;
}    
};
int main()
{
    Margherita margherita ("Margherita",450.5);
    Pepperoni pepperoni("Pepperoni",350.5);
    Veggie veggie("Veggie",250.5);
    Pizza* pizza;
    pizza= &margherita;
    pizza->displayPrice();
    pizza= &pepperoni;
    pizza->displayPrice();
    pizza= &veggie;
    pizza->displayPrice();
 return 0;
}