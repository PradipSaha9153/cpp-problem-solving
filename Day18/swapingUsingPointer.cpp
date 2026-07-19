#include<iostream>
using namespace std;

void swapPointer(int *p1, int *p2) { // Using pointers
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void swapAlias(int &c, int &d) { // Using alias
    int temp = c;
    c = d;
    d = temp;
}

int main() {
    // Using Pointers
    int a = 10;
    int b = 20;

    swapPointer(&a, &b);

    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
    
    // Using Alias
    int x = 10;
    int y = 20;
    
    swapAlias(x, y);
    
    cout << "X = " << x << endl;
    cout << "Y = " << y << endl;

    return 0;
}