// Find LCM of Two Numbers

#include<iostream>
using namespace std;

int LCM(int n1, int n2) {
    int max = n1 > n2 ? n1 : n2;
    while(1) {
        if(max % n1 == 0 && max % n2 == 0)
            return max;
        ++max;
    }
}

int main() {
    int n1, n2;
    cout << "Enter two number: ";
    cin >> n1 >> n2;

    cout << "LCM of " << n1 << " & " << n2 << " is: " << LCM(n1, n2);

    return 0;
}