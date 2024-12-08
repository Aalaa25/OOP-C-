//
//  main.cpp
//  chapter6-11
//
//
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

class Fraction {
private:
    long num, den;

public:
    Fraction() {
        num = 0;
        den = 1;
    }

    Fraction(long n, long d) {
        num = n;
        den = d;
        lowterms();
    }

    void lowterms() {
        long tnum = labs(num), tden = labs(den), temp, gcd;
        if (tden == 0) {
            cout << "Illegal fraction: division by 0";
            exit(1);
        } else if (tnum == 0) {
            num = 0;
            den = 1;
            return;
        }
        while (tnum != 0) {
            if (tnum < tden) {
                temp = tnum;
                tnum = tden;
                tden = temp;
            }
            tnum = tnum - tden;
        }
        gcd = tden;
        num /= gcd;
        den /= gcd;
    }

    void input() {
        cout << "Enter numerator and denominator: ";
        cin >> num >> den;
        lowterms();
    }

    void output() {
        cout << num << "/" << den;
    }

    Fraction add( Fraction& f) const {
        long n = num * f.den + den * f.num;
        long d = den * f.den;
        return Fraction(n, d);
    }

    Fraction subtract( Fraction& f) const {
        long n = num * f.den - den * f.num;
        long d = den * f.den;
        return Fraction(n, d);
    }

    Fraction multiply( Fraction& f) const {
        long n = num * f.num;
        long d = den * f.den;
        return Fraction(n, d);
    }

    Fraction divide( Fraction& f) const {
        long n = num * f.den;
        long d = den * f.num;
        return Fraction(n, d);
    }
};

int main() {
    Fraction f1(1, 2), f2(1, 3);
    Fraction sum = f1.add(f2);
    cout << "Sum: ";
    sum.output();
    cout << endl;
    Fraction multiplication = f1.multiply(f2);
    cout << "multiplication: ";
    multiplication.output();
    cout << endl;
    Fraction division = f1.divide(f2);
    cout << "division: ";
    division.output();
    cout << endl;
    return 0;
}
