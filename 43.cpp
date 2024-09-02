#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor to initialize complex numbers
    Complex(float r = 0.0, float i = 0.0) : real(r), imag(i) {}

    // Friend function to overload - operator
    friend Complex operator-(const Complex& c1, const Complex& c2);

    // Function to display the complex number
    void display() const {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

// Overloading the - operator using a friend function
Complex operator-(const Complex& c1, const Complex& c2) {
    return Complex(c1.real - c2.real, c1.imag - c2.imag);
}

int main() {
    Complex c1(4.3, 5.8);  // First complex number
    Complex c2(2.1, 3.4);  // Second complex number

    Complex c3 = c1 - c2;  // Finding the difference

    cout << "First complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    cout << "Difference of the two complex numbers: ";
    c3.display();

    return 0;
}
