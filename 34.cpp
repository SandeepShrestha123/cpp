#include <iostream>
using namespace std;
class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    // Method to display the complex number
    void display() const {
        cout << real;
        if (imaginary >= 0) {
            cout << " + " << imaginary << "i";
        } else {
            cout << " - " << -imaginary << "i";
        }
        cout << endl;
    }
};

int main() {
    Complex c1(3.0, 2.0);  // 3 + 2i
    Complex c2(1.5, -4.0); // 1.5 - 4i
    Complex result = c1 + c2;
    cout << "Result of addition: ";
    result.display();
    return 0;
}
