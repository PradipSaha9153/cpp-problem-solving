// Program that demonstrate hybrid inheritance

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

class C : public A {
public:
    void c() {
        cout << "Class C function c" << "\n";
    }
};

class D : public A, public B {
public:
    void d() {
        cout << "Class D function d" << "\n";
    }
};

int main() {
    D obj;

    obj.a();
    obj.b();
    obj.d();

    return 0;
}