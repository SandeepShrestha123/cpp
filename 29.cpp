#include <iostream>
using namespace std;
class Box {
protected:
    double length;
    double breadth;
    double height;

public:
    Box() : length(0), breadth(0), height(0) {}
    Box(double l, double b, double h) : length(l), breadth(b), height(h) {}
    double getVolume()  {
        return length * breadth * height;
    }
};

class BoxWeight : public Box {
protected:
    double weight;

public:
    BoxWeight() : Box(), weight(0) {}
    BoxWeight(double l, double b, double h, double w) : Box(l, b, h), weight(w) {}
    double getWeight()  {
        return weight;
    }
};

class Shipment : public BoxWeight {
private:
    double costPerWeightUnit;

public:
    Shipment() : BoxWeight(), costPerWeightUnit(0) {}
    Shipment(double l, double b, double h, double w, double c) : BoxWeight(l, b, h, w), costPerWeightUnit(c) {}
    double getCost()  {
        return getWeight() * costPerWeightUnit;
    }
};

int main() {
    Shipment myShipment(5.0, 4.0, 3.0, 10.0, 2.5);  
    double volume = myShipment.getVolume();
    cout << "Volume: " << volume << endl;
    double weight = myShipment.getWeight();
     cout << "Weight: " << weight << endl;
    double cost = myShipment.getCost();
    cout << "Cost of Shipping: " << cost << endl;
    return 0;
}
