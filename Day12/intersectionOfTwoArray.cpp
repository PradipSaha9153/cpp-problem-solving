// WAF to print intersection of 2 array

#include<iostream>
using namespace std;

void intersection(int arr1[], int arr2[], int s1, int s2) {
    for(int i = 0; i < s1; i++) {
        for(int j = 0; j < s2; j++) {
            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
}

int main() {
    int arr1[] = {4, 2, 7, 8, 11, 6};
    int arr2[] = {2, 1, 5, 4, 3, 9, 7};
    int s1 = sizeof(arr1) / sizeof(arr1[0]);
    int s2 = sizeof(arr2) / sizeof(arr2[0]);

    intersection(arr1, arr2, s1, s2);
    cout << endl;

    return 0;
}