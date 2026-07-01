// Print Multiplication Table of a Number

#include<iostream>
using namespace std;

void PrintTable(int n) {
    if(n == 0) return;
    for(int i = 1; i <= 10; i++) 
        cout << "5 X " << i << " = " << 5*i << endl;
}

int main() {
    int num;

    cout << "Enter the number for print a table: ";
    cin >> num;

    PrintTable(num);

    return 0;
}