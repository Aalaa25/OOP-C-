//
//  main.cpp
//  chapter6-6
//
//
#include <iostream>
using namespace std;

class MyDate {
private:
    int month, day, year;
public:
void inputDate() {
char ch;
    cout << "Enter the date";
cin >> month >> ch >> day >> ch >> year;
 }
void showDate() const {
 cout << month << "/" << day << "/" << year;
 }
};
class Employee {
private:
    int id;
    float salary;
    MyDate hireDate;
public:
    void inputEmployee() {
        cout << "Enter the id and salay";
        cin >> id >> salary;
        hireDate.inputDate();
    }
    void displayEmployee() {
        cout << "ID: " << id << ", Salary: " << salary << ", Hired: ";
        hireDate.showDate();
        cout << endl;
    }
};
int main() {
    Employee e1, e2, e3;
    e1.inputEmployee();
    e2.inputEmployee();
    e3.inputEmployee();
    e1.displayEmployee();
    e2.displayEmployee();
    e3.displayEmployee();
    return 0;
}
