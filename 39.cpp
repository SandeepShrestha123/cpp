#include <iostream>
using namespace std;
class Distance {
private:
    int feet;
    int inches;

public:
    Distance(int f = 0, int i = 0) : feet(f), inches(i) {}
    void normalize() {
        if (inches >= 12) {
            feet += inches / 12;
            inches = inches % 12;
        }
    }
    Distance operator+( Distance& d)  {
        int totalFeet = feet + d.feet;
        int totalInches = inches + d.inches;
        Distance temp(totalFeet, totalInches);
        temp.normalize();
        return temp;
    }
    void display()
    {
     	cout<<feet<<"Feet, "<<inches<<"inch"<<endl;	
	}
};

int main() {
    Distance d1(5, 10); 
    Distance d2(3, 8);  
	Distance d3 = d1+d2;
	d3.display();
    return 0;
}
