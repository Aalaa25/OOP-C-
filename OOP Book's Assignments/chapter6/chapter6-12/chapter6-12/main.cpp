//
//  main.cpp
//  chapter6-12
//
//
#include <iostream>
using namespace std;

class Fraction {
private:
    int num, den;

public:
    Fraction() {
        num = 0;
        den = 1;
    }

    Fraction(int n, int d) {
        num = n;
        den = d;
    }


    void input() {
        cin >> num >> den;
    }

    void output() const {
        cout << num << "/" << den;
    }

    Fraction multiply(const Fraction& f) const {
        int n = num * f.num;
        int d = den * f.den;
        return Fraction(n, d);
    }
};

int main() {
    int denominator;
    cout << "Enter a denominator: ";
    cin >> denominator;

    Fraction fractions[denominator];
    for (int i = 1; i <= denominator; i++) {
        fractions[i - 1] = Fraction(i, denominator);
        fractions[i - 1].output();
        cout << " ";
    }
    cout << endl;

    for (int i = 0; i < denominator; i++) {
        for (int j = 0; j < denominator; j++) {
            Fraction product = fractions[i].multiply(fractions[j]);
            product.output();
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
