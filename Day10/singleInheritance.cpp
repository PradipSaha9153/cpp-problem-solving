// Program that demonstrate single level inheritance

#include<iostream>
using namespace std;

class A {
public:
    void a() {
        cout << "Class A function a" << "\n";
    }
};

class B : public A {
public:
    void b() {
        cout << "Class B function b" << "\n";
    }
};

int main() {
    B obj;

    obj.a(); // Print class A function a
    obj.b(); // Print class b function b

    return 0;
}