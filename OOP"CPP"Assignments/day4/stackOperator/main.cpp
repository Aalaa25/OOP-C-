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
        size = _size;
        tos = -1;
        arr = new int[size];
    }

    void push(int d) {
        if (tos < size - 1) {
            tos++;
            arr[tos] = d;
        } else {
            cout << "\n stack is full";
        }
    }

    int pop(int &d) {
        if (tos != -1) {
            d = arr[tos];
            tos--;
            return 1;
        } else {
            cout << "\n stack is empty";
            return 0;
        }
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
        cout << "\n destructor";
        delete[] arr;
    }

    Stack& operator=(const Stack& s) {
            delete[] arr;
            tos = s.tos;
            size = s.size;
            arr = new int[size];
            for (int i = 0; i <= tos; i++) {
                arr[i] = s.arr[i];
            }

        return *this;
    }

    Stack operator+(const Stack& s) {
        Stack sum(this->size + s.size);
        for (int i = 0; i <= this->tos; i++) {
            sum.push(this->arr[i]);
        }
        for (int i = 0; i <= s.tos; i++) {
            sum.push(s.arr[i]);
        }
        return sum;
    }

    friend void viewContent(const Stack& s2);
};

void viewContent(const Stack& s2) {
    for (int i = 0; i <= s2.tos; i++)
        cout << s2.arr[i] << ",";
}

int main() {
    Stack stack1(10), stack2(10);

    stack1.push(10);
    stack1.push(20);
    stack1.push(30);
    stack1.push(40);

    stack2.push(50);
    stack2.push(60);
    stack2.push(70);
    stack2.push(90);

    Stack stack3 = stack1 + stack2;
    viewContent(stack3);

    return 0;
}
