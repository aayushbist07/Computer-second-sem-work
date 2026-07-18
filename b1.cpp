/*Create a class called publication that stores the title (a string) and price (type float) of
a publication. From this class derive two classes: book, which adds a page count (type
int); and tape, which adds a playing time in minutes (type float). Each of the three
classes should have a getdata() function to get its data from the user, and a putdata()
function to display the data.
a. Implement a runtime polymorphism in the program. (make necessary
assumptions)
b. Write a main( ) program that creates an array of pointers to publication. In a loop,
ask the user for data about a particular book or tape, and use new to create an
object of type book or tape to hold the data. Put the pointer to the object in the
array. When the user has finished entering the data for all books and tapes,
display the resulting data for all the books and tapes entered, using a for loop
and a single statement such as pubarr[j]->putdata(); to display the data from
each object in the array.*/
#include <iostream>
using namespace std;

// Base class
class Publication
{
protected:
    string title;
    float price;

public:
    virtual void getdata()
    {
        cout << "Enter Title: ";
        cin >> title;
        cout << "Enter Price: ";
        cin >> price;
    }

    virtual void putdata()
    {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

// Book class
class Book : public Publication
{
    int pages;

public:
    void getdata()
    {
        Publication::getdata();
        cout << "Enter Pages: ";
        cin >> pages;
    }

    void putdata()
    {
        Publication::putdata();
        cout << "Pages: " << pages << endl;
    }
};

// Tape class
class Tape : public Publication
{
    float time;

public:
    void getdata()
    {
        Publication::getdata();
        cout << "Enter Playing Time: ";
        cin >> time;
    }

    void putdata()
    {
        Publication::putdata();
        cout << "Playing Time: " << time << " minutes" << endl;
    }
};

int main()
{
    Publication *pub[10];

    int n, choice;

    cout << "Enter number of publications: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "\n1. Book\n2. Tape\n";
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1)
            pub[i] = new Book;
        else
            pub[i] = new Tape;

        pub[i]->getdata();
    }

    cout << "\nPublication Details\n";

    for(int i = 0; i < n; i++)
    {
        cout << endl;
        pub[i]->putdata();
    }

    return 0;
}