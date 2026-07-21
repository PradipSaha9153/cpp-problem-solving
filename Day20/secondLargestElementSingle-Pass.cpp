// Find second largest element in an array using Single-Pass Approach Method

#include <iostream>
#include <climits>
using namespace std;

int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        cout << "Array should have at least 2 elements" << endl;
        return -1;
    }
    
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } 
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    
    return secondLargest;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << findSecondLargest(arr, n) << endl;

    return 0;
}