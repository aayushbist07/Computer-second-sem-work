/*Define a class called Complex.
● Define member functions that overload the following operators:
❏ Minus unary operator. Returns void
❏ Scalar multiplication. (you may use friend function) and returns Complex
❏ Plus binary operator (+). => Returns Complex
❏ Minus binary operator. => Returns Complex
❏ += Shorthand operator. => Returns void
❏ == Equals to operator. => Returns TRUE or FALSE
❏ Greater than operator. => Returns TRUE or FALSE
❏ ! = Not equal to operator. => Returns TRUE or FALSE
❏ Pre Increment operator. => Returns Complex
❏ Post Increment operator. => Returns Complex
❏ << Stream Insertion operator. (use friend function. Why?????) => Returns
ostream&
Write a main( ) function to implement the above overloaded operators. */
#include <iostream>
using namespace std;

class Complex
{
private:
    int x, y;

public:
    // Constructors
    Complex()
    {
        x = 0;
        y = 0;
    }

    Complex(int a, int b)
    {
        x = a;
        y = b;
    }

    // Unary minus
    void operator-()
    {
        x = -x;
        y = -y;
    }

    // Binary +
    Complex operator+(Complex c)
    {
        return Complex(x + c.x, y + c.y);
    }

    // Binary -
    Complex operator-(Complex c)
    {
        return Complex(x - c.x, y - c.y);
    }

    // += operator
    void operator+=(Complex c)
    {
        x = x + c.x;
        y = y + c.y;
    }

    // == operator
    bool operator==(Complex c)
    {
        return (x == c.x && y == c.y);
    }

    // != operator
    bool operator!=(Complex c)
    {
        return (x != c.x || y != c.y);
    }

    // > operator
    bool operator>(Complex c)
    {
        return (x > c.x && y > c.y);
    }

    // Pre-increment
    Complex operator++()
    {
        ++x;
        ++y;
        return *this;
    }

    // Post-increment
    Complex operator++(int)
    {
        Complex temp = *this;
        x++;
        y++;
        return temp;
    }

    // Scalar multiplication
    friend Complex operator*(Complex c, int k);

    // Stream insertion
    friend ostream &operator<<(ostream &out, Complex c);
};

// Friend function for scalar multiplication
Complex operator*(Complex c, int k)
{
    return Complex(c.x * k, c.y * k);
}

// Friend function for output
ostream &operator<<(ostream &out, Complex c)
{
    out << c.x << " + " << c.y << "i";
    return out;
}

int main()
{
    Complex c1(2, 3), c2(4, 5), c3;

    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;

    c3 = c1 + c2;
    cout << "c1 + c2 = " << c3 << endl;

    c3 = c1 - c2;
    cout << "c1 - c2 = " << c3 << endl;

    c3 = c1 * 2;
    cout << "c1 * 2 = " << c3 << endl;

    -c1;
    cout << "After unary - : " << c1 << endl;

    c1 += c2;
    cout << "After += : " << c1 << endl;

    if (c1 == c2)
        cout << "c1 and c2 are Equal" << endl;
    else
        cout << "c1 and c2 are Not Equal" << endl;

    if (c1 != c2)
        cout << "c1 and c2 are Different" << endl;

    if (c1 > c2)
        cout << "c1 is Greater than c2" << endl;
    else
        cout << "c1 is Not Greater than c2" << endl;

    cout << "Pre Increment : " << ++c1 << endl;
    cout << "Post Increment : " << c1++ << endl;
    cout << "After Post Increment : " << c1 << endl;

    return 0;
}