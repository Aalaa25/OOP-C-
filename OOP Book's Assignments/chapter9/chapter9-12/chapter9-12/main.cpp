//
//  main.cpp
//  chapter9-12
//
//  Created by Aalaa Seif.
//
#include <iostream>
using namespace std;

class sterling {
protected:
    int pounds, shillings, pence;

public:
    sterling(int p, int s, int pe) {
        pounds = p;
        shillings = s;
        pence = pe;
    }

    void display() {
        cout << "£" << pounds << "." << shillings << "." << pence << endl;
    }

    sterling operator+(const sterling& s2) {
        int totalPence = (pounds * 240 + shillings * 20 + pence) +
                         (s2.pounds * 240 + s2.shillings * 20 + s2.pence);
        int newPounds = totalPence / 240;
        totalPence %= 240;
        int newShillings = totalPence / 20;
        int newPence = totalPence % 20;

        return sterling(newPounds, newShillings, newPence);
    }

    sterling operator-(const sterling& s2) {
        int totalPence1 = pounds * 240 + shillings * 20 + pence;
        int totalPence2 = s2.pounds * 240 + s2.shillings * 20 + s2.pence;

        if (totalPence1 < totalPence2) {
            cout << "Error: Cannot subtract larger value from smaller one.\n";
            return sterling(0, 0, 0);
        }

        int totalPence = totalPence1 - totalPence2;
        int newPounds = totalPence / 240;
        totalPence %= 240;
        int newShillings = totalPence / 20;
        int newPence = totalPence % 20;

        return sterling(newPounds, newShillings, newPence);
    }

    sterling operator*(int multiplier) {
        int totalPence = (pounds * 240 + shillings * 20 + pence) * multiplier;
        int newPounds = totalPence / 240;
        totalPence %= 240;
        int newShillings = totalPence / 20;
        int newPence = totalPence % 20;

        return sterling(newPounds, newShillings, newPence);
    }

    sterling operator/(int divisor) {
        if (divisor == 0) {
            cout << "Error: Division by zero.\n";
            return sterling(0, 0, 0);
        }

        int totalPence = (pounds * 240 + shillings * 20 + pence) / divisor;
        int newPounds = totalPence / 240;
        totalPence %= 240;
        int newShillings = totalPence / 20;
        int newPence = totalPence % 20;

        return sterling(newPounds, newShillings, newPence);
    }
};

int main() {
    sterling s1(10, 15, 18);
    sterling s2(5, 6, 7);

    sterling sum = s1 + s2;
    sterling diff = s1 - s2;
    sterling multi = s1 * 3;
    sterling div = s1 / 2;

    cout << "s1: ";
    s1.display();
    cout << "s2: ";
    s2.display();

    cout << "sum: ";
    sum.display();

    cout << "diff: ";
    diff.display();

    cout << "multi: ";
    multi.display();

    cout << "div: ";
    div.display();

    return 0;
}
