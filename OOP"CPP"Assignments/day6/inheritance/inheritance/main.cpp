#include <iostream>
using namespace std;

class Person {
protected:
    char name[30];
    int age;

public:
    Person(const char* _name, int _age) {
        strcpy(name, _name);
    }
    void print() {
        cout << "(" << name << ", " << age << ")" << endl;
    }
};

class Student : public Person {
private:
    int id;

public:
    Student(const char* _name, int _age, int _id) : Person(_name, _age) {
        
    }
    void print() {
        cout << "(" << name << ", " << age << ", " << id << ")" << endl;
    }
};

int main() {
    Person p("alaa", 22);
    Student s("ahmed", 24, 467);

    p.print();
    s.print();

    return 0;
}
