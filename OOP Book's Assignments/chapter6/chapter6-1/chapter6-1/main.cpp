//
//  main.cpp
//  chapter6-1
//
//
#include <iostream>
using namespace std;

class Number {
private:
    int value;
public:
Number() {
 value = 0;
}
Number(int v) {
value = v;
}
void sum(Number n1, Number n2) {
value = n1.value + n2.value;
 }
void show() {
cout << value;
}
};

int main() {
    Number num1(7);
    Number num2(11);
    Number num3;
    num3.sum(num1, num2);
    cout << "\nresult = ";
    num3.show();
    cout << endl;
    return 0;
}
