#include<iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter how many element you want: ";
    cin >> n;

    if (n < 2) {
        cout << 0;
        return 0;
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    cout << "Eneter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        if (num >= largest) {
            secondLargest = largest;
            largest = num;
        } else if (num > secondLargest) {
            secondLargest = num;
        }
    }

    cout << "Largest sum is: " << (largest + secondLargest) << endl;

    return 0;
}