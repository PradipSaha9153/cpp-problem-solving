#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int t, int st, int end) {
    if(st <= end) {
        // int mid = (st + end) / 2; // It can be overload sometime
        int mid = st + (end - st) / 2;

        if(t > arr[mid])
            return binarySearch(arr, t, mid + 1, end);
        else if(t < arr[mid])
            return binarySearch(arr, t, st, mid - 1);
        else
            return mid;
    }

    return -1;
}

int main() {
    // vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12}; // Odd
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 10, 12}; // Even
    int target = 0;
    int st = 0, end = arr1.size() - 1;

    cout << binarySearch(arr1, target, st, end) << endl;


    return 0;
}