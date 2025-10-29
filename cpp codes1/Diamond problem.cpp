#include <iostream>
using namespace std;

// Base class
class Person {
public:
    void showPerson() {
        cout << "I am a Person." << endl;
    }
};

// Derived class 1 (virtual inheritance)
class Student : virtual public Person {
public:
    void showStudent() {
        cout << "I am a Student." << endl;
    }
};

// Derived class 2 (virtual inheritance)
class Employee : virtual public Person {
public:
    void showEmployee() {
        cout << "I am an Employee." << endl;
    }
};

// Derived class from both Student and Employee
class WorkingStudent : public Student, public Employee {
public:
    void showWorkingStudent() {
        cout << "I am a Working Student." << endl;
    }
};

int main() {
    WorkingStudent ws;

    ws.showPerson();        // No ambiguity due to virtual base class
    ws.showStudent();
    ws.showEmployee();
    ws.showWorkingStudent();

    return 0;
}

