#include <iostream>
using namespace std;
class Box {
private:
    double width;
    double height;
    double depth;

public:
    Box() : width(0), height(0), depth(0) {}
    Box(double w, double h, double d) : width(w), height(h), depth(d) {}
    double getArea() const {
        return 2 * (width * height + width * depth + height * depth);
    }
    double getVolume() const {
        return width * height * depth;
    }
};

int main() {
    Box myBox(5.0, 4.0, 3.0);  
    double area = myBox.getArea();
    cout<< "Surface Area: " << area <<endl;
    double volume = myBox.getVolume();
    cout << "Volume: " << volume << endl;
    return 0;
}
