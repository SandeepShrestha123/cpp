#include <iostream>
using namespace std;
class USMoney {
private:
    int dollars;
    int cents;
    void normalize() {
        if (cents >= 100) {
            dollars += cents / 100;
            cents = cents % 100;
        } else if (cents < 0) {
            dollars -= (-cents + 99) / 100;
            cents = 100 + (cents % 100);
        }
    }

public:
    USMoney(int dollars = 0, int cents = 0) : dollars(dollars), cents(cents) {
        normalize();
    }
    USMoney plus(USMoney& other){
        int totalDollars = dollars + other.dollars;
        int totalCents = cents + other.cents;
        return USMoney(totalDollars, totalCents);
    }
    void display(){
        cout << "$" << dollars << ".";
        if (cents < 10) {
            cout << "0"; 
        }
        cout << cents << endl;
    }
};
int main() {
    USMoney x(5, 80);
    USMoney y(1, 90);
    USMoney result = x.plus(y);
    result.display(); 
    return 0;
}
