//
//  main.cpp
//  chapter9-4
//
//  Created by Aalaa Seif.
//
#include <iostream>
#include <string>
using namespace std;

class Worker {
private:
    string name;
    int id;
public:
    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
    }
    void display() const {
        cout << "Name: " << name << "\nID: " << id;
    }
};

class HourlyWorker : private Worker {
private:
    float hours;
    float rate;
public:
    void input() {
        Worker::input();
        cout << "Enter hours worked: ";
        cin >> hours;
        cout << "Enter hourly rate: ";
        cin >> rate;
    }
    void display() {
        Worker::display();
        cout << "\nHours Worked: " << hours;
        cout << "\nHourly Rate: " << rate;
        cout << "\nTotal Pay: " << hours * rate;
    }
};

class SalariedWorker : private Worker {
private:
    float salary;
public:
    void input() {
        Worker::input();
        cout << "Enter monthly salary: ";
        cin >> salary;
    }
    void display() {
        Worker::display();
        cout << "\nMonthly Salary: " << salary;
    }
};

int main() {
    HourlyWorker hw;
    SalariedWorker sw;

    hw.input();
    sw.input();

    hw.display();
    cout << endl;
    sw.display();
    cout << endl;

    return 0;
}


