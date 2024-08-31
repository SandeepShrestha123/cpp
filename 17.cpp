#include <iostream>
using namespace std;
double power(double m, int n = 2) {
    double result = 1.0;
    for (int i = 0; i < n; ++i) {
        result *= m;
    }
    return result;
}
int main() {
    double m;
    int n;
    cout << "Enter the base number (m): ";
    cin >> m;
    double result = power(m, 2);
    cout << m << " raised to the power of 2 " << " is " << result <<endl;
    return 0;
}
