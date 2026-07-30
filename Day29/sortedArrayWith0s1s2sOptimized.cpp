#include<iostream>
#include<vector>
using namespace std;

void sortedArray(vector<int> &arr, int n) {
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == 0)
            count0++;
        else if(arr[i] == 1)
            count1++;
        else
            count2++;
    }

    int idx = 0;
    for(int i = 0; i < count0; i++) {
        arr[idx++] = 0;
    }

    for(int i = 0; i < count1; i++) {
        arr[idx++] = 1;
    }

    for(int i = 0; i < count2; i++) {
        arr[idx++] = 2;
    }
}

void display(vector<int> arr, int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter how many element you want: ";
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i< n; i++) {
        cout << "nums[" << i <<"]: ";
        cin >> nums[i];
    }

    sortedArray(nums, n);

    cout << endl << "After sorting:" << endl;
    display(nums, n);

    return 0;
}