#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n1, n2;

    // Read two numbers from the user
    cout << "Enter the first number (n1): ";
    cin >> n1;
    cout << "Enter the second number (n2): ";
    cin >> n2;

    // Ensure n1 is less than n2
    if (n1 > n2) {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }

    cout << "Prime numbers between " << n1 << " and " << n2 << " are:" << endl;

    // Loop through the range and print prime numbers
    for (int i = n1; i <= n2; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
