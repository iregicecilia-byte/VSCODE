#include <iostream>
#include <string>

using namespace std;

class student {
public:
    string name;
    int age;

    // Constructor
    student(string n, int a) {
        name = n;
        age = a;
    }

    // Display student details
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    student s1("John", 20);
    s1.display();

    return 0;
}