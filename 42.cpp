#include <iostream>
#include <cstring>
using namespace std;
class String {
private:
    char* str;

public:
    String(const char* s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
    String(const String& other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }
    ~String() {
        delete[] str;
    }
    friend String operator+(const String& s1, const String& s2);
    void display() const {
        cout << str << endl;
    }
};

String operator+(const String& s1, const String& s2) {
    String temp;
    temp.str = new char[strlen(s1.str) + strlen(s2.str) + 1];
    strcpy(temp.str, s1.str);
    strcat(temp.str, s2.str);
    return temp;
}

int main() {
    String s1("Hello, ");
    String s2("World!");
    String s3 = s1 + s2; 
    cout << "String 1: ";
    s1.display();
    cout << "String 2: ";
    s2.display();
    cout << "Concatenated String: ";
    s3.display();
    return 0;
}
