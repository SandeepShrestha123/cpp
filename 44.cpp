#include <iostream>
using namespace std;
class Complex {
private:
    float real;
    float imag;
public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}
    friend Complex operator+( Complex &c1,  Complex &c2);
    void display()  {
        cout << real << " + " << imag << "i" << endl;
    }
};
Complex operator+( Complex &c1,  Complex &c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}
int main() {
    Complex c1(3.4, 5.7);  
    Complex c2(2.1, 3.3);  
    Complex c3 = c1 + c2;
    cout << "Sum of the complex numbers: ";
    c3.display();
    return 0;
}

