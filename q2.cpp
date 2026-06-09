#include<iostream>
#include<string>
using namespace std;
struct BookInfo{
string title;
string author;
float price;
};
class Book{
public:
string title;
string author;
float price;
void setData(string t, string a, float p)
{
    title=t;
    author=a;
    price=p;
}
BookInfo getBookdetails()
{
    return {title,author,price};
}
};
int main()
{
    string title,author;
    float price;
    Book b1;
    b1.setData("Physics","GKC",122);
    BookInfo stbook=b1.getBookdetails();
   cout<<"Title :"<<stbook.title<<endl;
   cout<<"Author :"<<stbook.author<<endl;
   cout<<"Price :"<<stbook.price<<endl;
return 0;
}