// Calculate sum & product off all nummbers in an array

#include<iostream>
using namespace std;

void sumAndProduct(int arr[], int s) {
    int sum = 0;
    long long product = 1;
    for(int i = 0; i < s; i++) {
        sum += arr[i];
        product *= arr[i];
    }
    cout << "Sum of array elements is: " << sum << endl;
    cout << "Product of array elements is: " << product << endl;
}

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int s = 7;

    sumAndProduct(arr, s);

    return 0;
}