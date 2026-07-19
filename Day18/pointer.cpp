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
    /*
    int x = 10;
    int* ptr = &x;

    *ptr = 50;

    cout << x << endl;
    */

    // Pointer to Pointer
    /*
    int x = 10;
    int* ptr = &x;
    int** ptrPtr = &ptr;

    cout << &ptr << endl;     // 0x7ffd82afd2a8
    cout << ptrPtr << endl;   // 0x7ffd82afd2a8
    cout << ptr << endl;      // 0x7ffd82afd2a4
    cout << *ptrPtr << endl;  // 0x7ffd82afd2a4
    cout << **ptrPtr << endl; // 10
    */

    // Null Pointer
    int* ptr = NULL;
    int* ptr1 = nullptr;

    cout << ptr << endl;
    cout << ptr1 << endl;

    // cout << *ptr << endl; // Error (Segmentation fault (core dumped))
}