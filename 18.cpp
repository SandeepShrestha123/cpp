#include <iostream>
using namespace std;
class Distance {
private:
    int meters;
    int centimeters;
    int toCentimeters()  {
        return meters * 100 + centimeters;
    }
public:
    Distance() : meters(0), centimeters(0) {}
    Distance(int m, int cm) : meters(m), centimeters(cm) {
        if (centimeters >= 100) {
            meters += centimeters / 100;
            centimeters %= 100;
        }
    }
    void display()  {
        cout << meters << " meters and " << centimeters << " centimeters" << endl;
    }
    bool compare( Distance& other)  {
        return this->toCentimeters() > other.toCentimeters();
    }
};

int main() {
    Distance d1(5, 150); 
    Distance d2(6, 40);  
    cout<< "Distance 1: ";
    d1.display();
    cout << "Distance 2: ";
    d2.display();
    if (d1.compare(d2)) {
        cout << "Distance 1 is larger than Distance 2." << endl;
    } else {
        cout << "Distance 2 is larger than or equal to Distance 1." << endl;
    }
    return 0;
}
