#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    Distance(int f = 0, int i = 0) : feet(f), inches(i) {}
    friend Distance operator+(const Distance& d1, const Distance& d2);
    void display() const {
        cout << feet << " feet " << inches << " inches" << endl;
    }
};
Distance operator+(const Distance& d1, const Distance& d2) {
    int totalInches = d1.inches + d2.inches;
    int extraFeet = totalInches / 12;
    int inches = totalInches % 12;
    int feet = d1.feet + d2.feet + extraFeet;
    return Distance(feet, inches);
}

int main() {
    Distance d1(5, 9);  
    Distance d2(3, 11); 
    Distance result = d1 + d2;
    cout << "The sum of the distances is: ";
    result.display();
    return 0;
}
