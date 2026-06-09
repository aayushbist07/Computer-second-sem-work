#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int rollNumber;
    static int studentCount;
public:
    Student(string n, int r) {
        name = n;
        rollNumber = r;
        studentCount++;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
    static int getStudentCount() {
        return studentCount;
    }
};