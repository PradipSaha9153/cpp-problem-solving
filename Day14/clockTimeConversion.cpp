// Given two number than conver 12 hour time format

#include<iostream>
using namespace std;

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    int t = x * y;

    // Method 1
    // int time = t % 12;
    // if(time == 0)
    //     time = 12;

    // Mthod 2
    int time = (t - 1) % 12 + 1;

    cout << time << endl;

    return 0;
}