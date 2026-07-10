// Find missing number in an array

#include<iostream>
using namespace std;

int findMissingNum(int arr[], int n) {
    int expected_sum = n * (n + 1) / 2;
    int actual_sum = 0;

    for(int i = 0; i < n - 1; i++)
        actual_sum += arr[i];

    return expected_sum - actual_sum;
}

int main() {
    int arr[] = {4, 5, 6, 2, 1};
    int length = 6;

    cout << "Missing number is: " << findMissingNum(arr, length) << endl;

    return 0;
}