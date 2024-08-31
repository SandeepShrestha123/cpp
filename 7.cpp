#include <iostream>
using namespace std;

// Function to calculate simple interest with default arguments for rate and time
double calculateSimpleInterest(double principal, double rate = 5.0, double time = 1.0) {
    return (principal * rate * time) / 100;
}

int main() {
    double principal, rate, time;

    // Read the principal amount from the user
    cout << "Enter the principal amount: ";
    cin >> principal;

    // Optionally, read the rate of interest and time from the user
    cout << "Enter the rate of interest (or press enter to use default 5%): ";
    cin >> rate;

    cout << "Enter the time in years (or press enter to use default 1 year): ";
    cin >> time;

    // Calculate simple interest using the function
    double interest = calculateSimpleInterest(principal, rate, time);

    // Display the result
    cout << "Simple Interest: " << interest << endl;

    return 0;
}
