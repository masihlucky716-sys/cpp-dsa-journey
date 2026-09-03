#include <iostream>
using namespace std;
 
class Student {
    string name;
    int marks;
public:
    Student() {
        name = "Unknown";
        marks = 0;
    }
 
    Student(string n, int m) {
        name = n;
        marks = m;
    }
 
    void display() {
        cout << "Name: " << name << ", Marks: " << marks << endl;
    }
};
 
int main() {
    Student s1;
    Student s2("Lucky", 95);
    s1.display();
    s2.display();
    return 0;
}
