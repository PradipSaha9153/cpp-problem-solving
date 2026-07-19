#include<iostream>
using namespace std;

int main() {
    // Initialization
    /*
    int x = 10;
    int* ptr = &x;
    
    cout << &x << endl;
    cout << ptr << endl;
    */

    // Dereference Operator(*)
    /*
    int x = 10;
    int* ptr = &x;
    
    cout << *ptr << endl;
    */

    // Changing value using pointer
    int x = 10;
    int* ptr = &x;

    *ptr = 50;

    cout << x << endl;
}