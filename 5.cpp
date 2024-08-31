#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i <= num / 2; i++) {  // Check divisibility up to num/2
        if (num % i == 0)
            return false;  // If divisible, not a prime
    }
    return true;  // If no divisors found, it's a prime
}

int main() {
    cout << "Prime numbers between 300 and 500 are:" << endl;

    for (int i = 300; i <= 500; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}