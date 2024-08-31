#include<iostream>
using namespace std;
class DB; 
class DM {
private:
    int meters;
    int centimeters;

public:
    DM(int m = 0, int cm = 0) : meters(m), centimeters(cm) {}
    int getMeters(){ return meters; }
    int getCentimeters()  { return centimeters; }
    friend DM addDM( DM& d1,  DM& d2);
    friend DB addDMToDB( DM& d1,  DM& d2);
};
class DB {
private:
    int feet;
    int inches;
public:
    DB(int ft = 0, int in = 0) : feet(ft), inches(in) {}
    int getFeet()  { return feet; }
    int getInches()  { return inches; }
    friend DB addDMToDB( DM& d1,  DM& d2);
};
DM addDM( DM& d1,  DM& d2) {
    int totalCentimeters = (d1.meters + d2.meters) * 100 + d1.centimeters + d2.centimeters;
    int meters = totalCentimeters / 100;
    int centimeters = totalCentimeters % 100;
    return DM(meters, centimeters);
}
DB addDMToDB( DM& d1,  DM& d2) {
    int totalCentimeters = (d1.meters + d2.meters) * 100 + d1.centimeters + d2.centimeters;
    int totalInches = (int)(totalCentimeters * 0.393701);
    int feet = totalInches / 12;
    int inches = totalInches % 12;
    return DB(feet, inches);
}

int main() {
    DM dm1(2, 75);
    DM dm2(1, 50); 
    DM resultDM = addDM(dm1, dm2); 
    cout << "Result in meters and centimeters: " << resultDM.getMeters() << " meters, " << resultDM.getCentimeters() << " centimeters.\n";

    DB resultDB = addDMToDB(dm1, dm2); 
    cout << "Result in feet and inches: " << resultDB.getFeet() << " feet, " << resultDB.getInches() << " inches.\n";

    return 0;
}
