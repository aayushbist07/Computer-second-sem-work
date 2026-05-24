/*Write a program to create a class named LibraryBook that includes private
member variables for the book title and book ID. It should also include member
functions to set and display book details, along with a static data member to keep
track of the total number of books added to the system. Additionally, include a
static member function to retrieve and display the total count of books.
Demonstrate the functionality by creating multiple objects of the LibraryBook
class and using its member functions to show how static data is shared among all
objects.*/
#include<iostream>
using namespace std;
class LibraryBook{
private:
string title;
int bookID;
static int totalBooks; // static member to keep track of books
public:
void setDetails( string bTitle, int id) // defining setter
{
    title = bTitle;
    bookID=id;
    totalBooks ++;
} 
void displayDetails() // defining getter
{
cout<<"Book Title:"<<title<<endl;
cout<<"Book ID:"<< bookID<<endl;
}
static void Totalbooks()
{
    cout<<"Total Books:"<<totalBooks<<endl;
}
};
int LibraryBook :: totalBooks=0; // setting default value for static data member
int main()
{
    LibraryBook b1,b2,b3;
    b1.setDetails("C++",1);
    cout<<"Book1 Details:"<<endl;
    b1.displayDetails();
    LibraryBook :: Totalbooks(); // calling static member function
    b2.setDetails("Maths",2);
    cout<<"Book2 Details:"<<endl;
    b2.displayDetails();
    LibraryBook :: Totalbooks();
    b3.setDetails("Physics",3);
    cout<<"Book 3 Details:"<<endl;
    b3.displayDetails();
    LibraryBook :: Totalbooks();
    return 0;
}
