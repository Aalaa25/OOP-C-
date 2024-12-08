//
//  main.cpp
//  chapter9-11
//
//  Created by Aalaa Seif.
//
#include <iostream>
using namespace std;

struct Pair {
    int x;
    int y;
};

class Stack {
protected:
    static const int MAX = 10;
    Pair arr[MAX];
    int top;
public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == MAX - 1;
    }

    void push(Pair p) {
        if (isFull()) {
            cout << "Stack is full\n";
        } else {
            arr[++top] = p;
        }
    }

    Pair pop() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return {0, 0};
        } else {
            return arr[top--];
        }
    }
};

class PairStack : public Stack {
public:
    void push(Pair p) {
        Stack::push(p);
    }

    Pair pop() {
        return Stack::pop();
    }
};

int main() {
    PairStack stack;
    Pair p1 = {1, 2};
    Pair p2 = {3, 4};
    stack.push(p1);
    stack.push(p2);

    Pair p = stack.pop();
    cout << "Popped pair: (" << p.x << ", " << p.y << ")\n";

    p = stack.pop();
    cout << "Popped pair: (" << p.x << ", " << p.y << ")\n";

    return 0;
}
