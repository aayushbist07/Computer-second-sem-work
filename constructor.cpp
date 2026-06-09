#include<iostream>
using namespace std;
class Myclass{
    public:
    Myclass();
};
Myclass::Myclass()
{
    cout<<"Hello World:";
}
int main()
{
    Myclass myObj;
    return 0;
}