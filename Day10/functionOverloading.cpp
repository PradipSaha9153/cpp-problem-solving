// Function Overloading Program in CPP

#include<iostream>
using namespace std;

class Add {
public:
    int add(int a) {
        return a + 5;
    }
    int add(int a, int b) {
        return a + b;
    }
    int add(int a, int b, int c) {
        return a + b + c;
    }
    float add(float a, float b) {
        return a + b;
    }
};

int main() {
    Add a;

    cout << a.add(7) << "\n";
    cout << a.add(7, 3) << "\n";
    cout << a.add(7, 5, 3) << "\n";
    cout << a.add(7.2f, 7.5f) << "\n";

    return 0;
}