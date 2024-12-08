//
//  main.cpp
//  chapter6-4
//
//
#include <iostream>
using namespace std;

class Worker {
private:
    int id;
    float salary;
public:
void setDetails() {
 cin >> id >> salary;
}
void showDetails(){
 cout << "ID: " << id << ", Salary: " << salary << endl;
}
};

int main() {
    Worker w1, w2, w3;
    w1.setDetails();
    w2.setDetails();
    w3.setDetails();
    w1.showDetails();
    w2.showDetails();
    w3.showDetails();
    return 0;
}
