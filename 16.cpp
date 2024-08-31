#include <iostream>
using namespace std;

void zeroSmaller(int &a, int &b) {
    if (a < b) {
        a = 0;
    } else {
        b = 0;
    }
}

int main() {
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Before: num1 = " << num1 << ", num2 = " << num2 << endl;
    zeroSmaller(num1, num2);
    cout << "After:  num1 = " << num1 << ", num2 = " << num2 << endl;
    return 0;
}
