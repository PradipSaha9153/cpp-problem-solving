// Find Greatest Common Divisor of Array

#include<iostream>
#include<vector>
using namespace std;

int GCD(int n1, int n2) {
    int g = 1;

    for(int i = 1; i <= n1 && i <= n2; i++)
        if(n1 % i == 0 && n2 % i == 0)
            g = i;

    return g;
}

pair<int, int> min_max(vector<int>& arr) {
    int smallest = arr[0];
    int largest = arr[0];

    for(int num : arr) {
        if(num < smallest) smallest = num;
        if(num > largest) largest = num;
    }

    return {smallest, largest};
}

int main() {
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter " << size << " numbers separated by spaces or enters:\n";
    for(int i = 0; i < size; i++) {
        cin >> arr[i]; 
    }

    pair<int, int> result = min_max(arr);

    cout << "GCD of N number: " << GCD(result.first, result.second);
}