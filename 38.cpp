#include <iostream>
using namespace std;
class Complex {
private:
    int real;
    int imaginary;

public:

    Complex(int r = 0, int i = 0) : real(r), imaginary(i) {}
    Complex operator*( Complex& other)  {
        int newReal = real * other.real - imaginary * other.imaginary;
        int newImaginary = real * other.imaginary + imaginary * other.real;
        return Complex(newReal, newImaginary);
    }
    void display()  {
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
    Complex c1(3, 2);  // 3 + 2i
    Complex c2(1, 4);  // 1.5 + 4i
    Complex result = c1 * c2;
    cout << "Result of multiplication: ";
    result.display();
    return 0;
}
