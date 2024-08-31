#include <iostream>
using namespace std;
class Time {
private:
    int hours;
    int minutes;
    int seconds;
    void normalize() {
        if (seconds >= 60) {
            minutes += seconds / 60;
            seconds %= 60;
        }
        if (minutes >= 60) {
            hours += minutes / 60;
            minutes %= 60;
        }
    }

public:
    
    Time() : hours(0), minutes(0), seconds(0) {}
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {
        normalize();
    }
    Time add(const Time& other) const {
        int totalHours = hours + other.hours;
        int totalMinutes = minutes + other.minutes;
        int totalSeconds = seconds + other.seconds;
        Time result(totalHours, totalMinutes, totalSeconds);
        result.normalize();
        return result;
    }
    void display() const {
        cout << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" <<endl;
    }
};

int main() {
    
    Time t1(1, 40, 50); 
    Time t2(2, 40, 50); 
    Time t3(0, 0, 0);    
    t3 = t1.add(t2);
    cout << "Time t3 after adding t1 and t2: ";
    t3.display();
    return 0;
}
