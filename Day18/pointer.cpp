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
    /*
    int* ptr = NULL;
    int* ptr1 = nullptr;

    cout << ptr << endl;
    cout << ptr1 << endl;

    // cout << *ptr << endl; // Error (Segmentation fault (core dumped))
    */


    // Array Pointer
    /*
    int arr[] = {1, 2, 3, 4, 5};

    cout << arr << endl;
    cout << *arr << endl;
    */


    // Pointer Arithmatic
    /*
    int a = 15;
    int *p = &a;

    cout << p << endl;
    p++;
    cout << p << endl;
    */

    // Using Array
    /*
    int arr[] = {1, 2, 3, 4, 5};

    for(int i = 0; i < 5; i++)
        cout << *(arr + i) << endl;

    cout << *arr << endl;
    */

    // Using Stirng
    char str[] = "Hello";

    char *ptr = str;

    while(*ptr != '\0') {
        cout << *ptr;
        ptr++;
    }

    cout << endl;


    return 0;
}