#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int t) {
    int st = 0, end = arr.size() - 1;

    while(st <= end) {
        int mid = (st + end) / 2;

        if(t > arr[mid]) {
            st = mid + 1;
        } else if(t < arr[mid]) {
            end = mid - 1;
        } else {
            return mid;
        }
    }

    return -1;
}

int main() {
    // vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12}; // Odd
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 10, 12}; // Even
    int target = 0;

    cout << binarySearch(arr1, target) << endl;


    return 0;
}