//
//  main.cpp
//  chapter6-8
//
//
#include <iostream>
using namespace std;

class Counter {
private:
    static int count;
    int number;
public:
    Counter() {
        number = ++count;
    }
void showSerial(){
cout << "object " << number << endl;
}
};

int Counter::count = 0;

int main() {
    Counter c1, c2, c3;
    c1.showSerial();
    c2.showSerial();
    c3.showSerial();
    return 0;
}


