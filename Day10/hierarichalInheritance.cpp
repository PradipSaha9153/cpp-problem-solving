// Program that demonstrate hierarichal inheritance inheritance

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

class C : public A {
public:
    void c() {
        cout << "Class C function c" << "\n";
    }
};

int main() {
    B objB;
    C objC;

    objB.a();
    objB.b();
    objC.a();
    objC.c();

    return 0;
}