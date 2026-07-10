// Program that demonstrate single level inheritance

#include<iostream>
using namespace std;

class A {
public:
    void a() {
        cout << "Class A function a" << "\n";
    }
};

class B {
public:
    void b() {
        cout << "Class B function b" << "\n";
    }
};

class C : public A, public B {
public:
    void c() {
        cout << "Class C function c" << "\n";
    }
};

int main() {
    C obj;

    obj.a(); // Print class A function a
    obj.b(); // Print class b function b
    obj.c(); // Print class b function b

    return 0;
}