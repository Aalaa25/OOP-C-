#include <iostream>

using namespace std;

class Complex {
 int real;
 int img;
 public:
     Complex() {
         real = img = 0;
     }
     Complex(int _real, int _img) {
         real = _real;
         img = _img;
     }
     void setReal(int _real) {
         real = _real;
     }
     void setImg(int _img) {
         img = _img;
     }
     int getReal() {
         return real;
     }
     int getImg() {
         return img;
     }
     void print() {
         if(img > 0)
             cout << real << "+" << img << "i";
         else if(img < 0)
             cout << real << img << "i";
     }
     void setComplex(int _real, int _img) {
         real = _real;
         img = _img;
     }
     Complex operator+ (Complex c) {
         Complex res;
         res.img = c.img + img;
         res.real = c.real + real;
         return res;
     }
     Complex operator+ (int n) {
         Complex res;
         res.img = img + n;
         res.real = real + n;
         return res;
     }
     int operator == (Complex c) {
         return real == c.real && img == c.img;
     }
     int operator != (Complex c) {
         return !(*this == c);
     }
     Complex operator += (Complex c) {
         real = real + c.real;
         img = img + c.img;
         return *this;
     }
     Complex operator += (int n) {
         real = real + n;
         return *this;
     }
     Complex operator ++ () {
         real = real + 1;
         return *this;
     }
     Complex operator ++ (int) {
         Complex temp = *this;
         real += 1;
         return temp;
     }
     explicit operator int() {
         return real;
     }
     Complex Add(Complex c) {
         Complex res;
         res.real = c.real + real;
         res.img = c.img + img;
         return res;
     }
};

int main() {
    Complex c1, c2;
    c1.setComplex(10, 20);
    c2.setComplex(5, 7);
    Complex c = c1.Add(c2);
    c.print();
    cout << endl;

    Complex c3;
    c3 = c1 + c2;
    c3.print();
    cout << endl;

    c3 = c1 + 3;
    c3.print();
    cout << endl;

    c1 += c2;
    c1.print();
    cout << endl;

    c1 += 5;
    c1.print();
    cout << endl;

    ++c1;
    c1.print();
    cout << endl;

    c1++;
    c1.print();
    cout << endl;

    int casting = (int)c1;

    return 0;
}
