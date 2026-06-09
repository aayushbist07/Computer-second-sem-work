#include<iostream>
 using namespace std;
 class Mycar{
    public:
    string brand;
    string model;
    int year;
void displayDetails()
{
cout << "Brand: " <<brand<<endl;
cout << "Model: " <<model<<endl;
cout << "Year: " <<year<<endl;
}
};
int main()
{
Mycar c1;
c1.brand="toyota";
c1.model="corolla";
c1.year=2026;
c1.displayDetails();
}