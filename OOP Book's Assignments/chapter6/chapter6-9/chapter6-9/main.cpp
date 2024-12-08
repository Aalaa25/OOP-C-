//
//  main.cpp
//  chapter6-9
//
//
#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator, denominator;
public:
    void inputFraction() {
        char slash;
        cin >> numerator >> slash >> denominator;
    }
    void displayFraction() {
        cout << numerator << "/" << denominator;
    }
    void addFractions(Fraction f1, Fraction f2) {
        numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
        denominator = f1.denominator * f2.denominator;
    }
};

int main() {
    Fraction f1, f2, result;
    char choice;
    do {
        f1.inputFraction();
        f2.inputFraction();
        result.addFractions(f1, f2);
        result.displayFraction();
        cout << "\ndo you want to continue? (y/n): ";
        cin >> choice;
    }
    while (choice == 'y');
    return 0;
}


