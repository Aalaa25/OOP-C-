#include <iostream>
using namespace std;

class Booth {
private:
    unsigned int cars;
    double cash;
public:
    Booth() {
        cars = 0;
        cash = 0.0;
    }
    void paidCar() {
        cars++;
        cash += 0.5;
    }
    void freeCar() {
        cars++;
    }
    void show() {
        cout << "\nCars = " << cars << ", Cash = " << cash << endl;
    }
};

int main() {
    Booth b;
    char ch;
    cout << "\nPress 1 for paid, 0 for free, Esc to stop.\n";
    do {
        ch = cin.get(); 
        if (ch == '1') b.paidCar();
        if (ch == '0') b.freeCar();
    } while (ch != 27);
    b.show();
    return 0;
}
