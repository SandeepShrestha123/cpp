//program to find the difference between two Distances using binary operator'-' using friend function
#include <iostream>
using namespace std;
class Distance {
private:
    int feet;
    int inches;
public:
    Distance(int f = 0, int i = 0) : feet(f), inches(i) {}
    friend Distance operator-( Distance &d1,  Distance &d2);
    void display()  {
        cout << "Feet: " << feet << ", Inches: " << inches << endl;
    }
};

Distance operator-( Distance &d1,  Distance &d2) {
    int totalInches1 = d1.feet * 12 + d1.inches;
    int totalInches2 = d2.feet * 12 + d2.inches;
    int diffInches = totalInches1 - totalInches2;
    int feet = diffInches / 12;
    int inches = diffInches % 12;
    // Handle negative inches
    if (inches < 0) {
        inches += 12;
        feet -= 1;
    }
    return Distance(feet, inches);
}

int main() {
    Distance d1(5, 8);  
    Distance d2(3, 10); 
    Distance d3 = d1 - d2;
    cout << "Distance after subtraction: ";
    d3.display();
    return 0;
}
