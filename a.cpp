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
int Student::studentCount = 0;
int main() {
    Student s1("Aayush", 1);
    Student s2("Pratish",2);
    Student s3("Harsit",3);
    cout << "Student 1:" << endl;
    s1.display();
    cout << "\nStudent 2:" << endl;
    s2.display();
    cout << "\nStudent 3:" << endl;
    s3.display();
    cout << "\nTotal number of students: "
  << Student::getStudentCount() << endl;
    return 0;
}