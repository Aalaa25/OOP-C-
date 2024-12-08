#include <iostream>

using namespace std;

class fraction {
    int num;
    int den;

public:
    fraction() {
        num = 0;
        den = 1;
    }

    fraction(int _num) {
        num = _num;
        den = 1;
    }

    fraction(int _num, int _den) {
        num = _num;
        den = _den != 0 ? _den : 1;
    }

    void setnum(int _num) {
        num = _num;
    }

    void setden(int _den) {
        den = _den != 0 ? _den : 1;
    }

    int getnum() const {
        return num;
    }

    int getden() const {
        return den;
    }

    fraction operator+(const fraction& f) {
        fraction sum;
        sum.den = den * f.den;
        sum.num = (num * f.den) + (f.num * den);
        return sum;
    }

    fraction operator-(const fraction& f) {
        fraction sub;
        sub.den = den * f.den;
        sub.num = (num * f.den) - (f.num * den);
        return sub;
    }

    fraction operator*(const fraction& f) {
        fraction mul;
        mul.den = den * f.den;
        mul.num = num * f.num;
        return mul;
    }

    fraction operator/(const fraction& f) {
        fraction div;
        div.den = den * f.num;
        div.num = num * f.den;
        return div;
    }

    fraction operator++() {
        num += den;
        return *this;
    }

    fraction operator--() {
        num -= den;
        return *this;
    }

    explicit operator float() const {
        return static_cast<float>(num) / den;
    }
};

int main() {
    fraction f1(3, 5);
    fraction f2(2, 9);

    cout << static_cast<float>(f1) << endl;
    cout << static_cast<float>(f2) << endl;

    fraction f3 = f1 + f2;
    cout << f3.getnum() << "/" << f3.getden() << endl;

    fraction f4 = f1 - f2;
    cout << f4.getnum() << "/" << f4.getden() << endl;

    fraction f5 = f1 * f2;
    cout << f5.getnum() << "/" << f5.getden() << endl;

    fraction f6 = f1 / f2;
    cout << f6.getnum() << "/" << f6.getden() << endl;

    return 0;
}
