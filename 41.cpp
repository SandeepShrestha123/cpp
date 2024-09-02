#include <iostream>
using namespace std;
class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}
    void displayTime()  {
        cout << hours << "h:" << minutes << "m:" << seconds << "s" << endl;
    }
    Time operator+( Time& t)  {
        Time temp;
        temp.seconds = seconds + t.seconds;
        temp.minutes = minutes + t.minutes + temp.seconds / 60;
        temp.seconds %= 60;
        temp.hours = hours + t.hours + temp.minutes / 60;
        temp.minutes %= 60;
        return temp;
    }
};

int main() {
    Time t1(2, 45, 50);
    Time t2(1, 20, 40);
    Time t3 = t1 + t2; 
    cout << "Time 1: ";
    t1.displayTime();
    cout << "Time 2: ";
    t2.displayTime();
    cout << "Sum of Time 1 and Time 2: ";
    t3.displayTime();
    return 0;
}
