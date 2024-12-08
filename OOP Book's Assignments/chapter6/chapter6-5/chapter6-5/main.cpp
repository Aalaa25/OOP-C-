//
//  main.cpp
//  chapter6-5
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
cin >> month >> ch >> day >> ch >> year;
}
    void showDate() {
        cout << month << "/" << day << "/" << year <<"\n";
    }
};

int main() {
    MyDate date;
    date.inputDate();
    date.showDate();
    return 0;
}



