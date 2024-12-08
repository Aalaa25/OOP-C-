//
//  main.cpp
//  chapter9-7
//
//  Created by Aalaa Seif.
//
#include <iostream>
using namespace std;

class Counter {
protected:
    int count;
public:
    Counter() {
        count = 0;
    }

    void increment() {
        ++count;
    }
    void decrement() {
        --count;
    }
    int getCount() const {
        return count;
    }
};

class AdvancedCounter : public Counter {
public:
    AdvancedCounter() : Counter() {}

    Counter operator++(int) {
        Counter temp = *this;
        count++;
        return temp;
    }
    Counter operator--(int) {
        Counter temp = *this;
        count--;
        return temp;
    }
};

int main() {
    AdvancedCounter c;
    c.increment();
    c++;
    c.decrement();
    

    cout << "Final count: " << c.getCount() << endl;
    return 0;
}

