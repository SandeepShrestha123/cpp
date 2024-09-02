#include <iostream>
using namespace std;
class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    friend Complex operator*(const Complex& c1, const Complex& c2);
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

Complex operator*(const Complex& c1, const Complex& c2) {
    // (a + bi) * (c + di) = (ac - bd) + (ad + bc)i
    double realPart = c1.real * c2.real - c1.imag * c2.imag;
    double imagPart = c1.real * c2.imag + c1.imag * c2.real;
    return Complex(realPart, imagPart);
}

int main() {
    Complex c1(3, 2);  
    Complex c2(1, 7);  
    Complex result = c1 * c2;  
    cout << "The product of the complex numbers is: ";
    result.display();
    return 0;
}
