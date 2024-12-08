//
//  main.cpp
//  chapter9-6
//
//  Created by Aalaa Seif .
//
#include <iostream>
using namespace std;

class Array {
protected:
    int size;
    int* arr;
public:
    Array(int s) : size(s) {
        arr = new int[size];
    }
    ~Array() {
        delete[] arr;
    }
    void input() {
        for (int i = 0; i < size; i++) {
            cout << "Enter value for element " << i + 1 << ": ";
            cin >> arr[i];
        }
    }
    void display() const {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

class BoundedArray : public Array {
private:
    int lowerBound;
    int upperBound;
public:
    BoundedArray(int lower, int upper)
        : Array(upper - lower + 1), lowerBound(lower), upperBound(upper) {}

    void displayBounds() const {
        cout << "Lower Bound: " << lowerBound << "\nUpper Bound: " << upperBound << endl;
    }
};

int main() {
    int lower, upper;
    cout << "Enter lower bound: ";
    cin >> lower;
    cout << "Enter upper bound: ";
    cin >> upper;

    BoundedArray bArr(lower, upper);
    bArr.input();
    bArr.displayBounds();
    bArr.display();

    return 0;
}
