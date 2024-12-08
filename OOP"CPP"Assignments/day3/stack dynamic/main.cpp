#include <iostream>
using namespace std;

class Stack {
    int* arr;
    int size;
    int tos;

public:
    Stack() {
        tos = -1;
        size = 5;
        arr = new int[size];
    }

    Stack(int _size) {
        tos = -1;
        size = _size;
        arr = new int[size];
    }

    Stack(const Stack& s) {
        tos = s.tos;
        size = s.size;
        arr = new int[size];
        for (int i = 0; i <= tos; i++) {
            arr[i] = s.arr[i];
        }
    }

    ~Stack() {
        cout << "\nDestructor called";
        delete[] arr;
    }

    void push(int d) {
        if (tos < size - 1) {
            tos++;
            arr[tos] = d;
        } else {
            cout << "\nStack is full";
        }
    }

    int pop(int& d) {
        if (tos != -1) {
            d = arr[tos];
            tos--;
            return 1;
        } else {
            cout << "\nStack is empty";
            return 0;
        }
    }
};

void stackFunction(Stack s) {
    int x;
    s.pop(x);
    cout << endl << x;
    s.pop(x);
    cout << endl << x;
    s.push(90);
    s.push(100);
}

int main() {
    Stack s1, s2(10);
    s1.push(90);
    s1.push(60);
    s1.push(30);

    int x = 0;
    if (s1.pop(x) == 1)
        cout << endl << x;
    if (s1.pop(x) == 1)
        cout << endl << x;

    s1.push(80);
    if (s1.pop(x) == 1)
        cout << endl << x;

    cout << endl;

    s2.push(10);
    s2.push(20);
    s2.push(30);
    s2.push(40);
    s2.push(50);

    if (s2.pop(x) == 1)
        cout << endl << x;
    if (s2.pop(x) == 1)
        cout << endl << x;
    if (s2.pop(x) == 1)
        cout << endl << x;

    s2.push(50);
    if (s2.pop(x) == 1)
        cout << endl << x;

    return 0;
}
