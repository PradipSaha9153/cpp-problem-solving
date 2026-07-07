// Program to check if two Arrays are Equal or not

#include<iostream>
#include<algorithm>
using namespace std;

bool arrayEqualOrNot(int arr1[], int arr2[], int a, int b) {
    if(a != b)
        return false;

    sort(arr1, arr1 + a);
    sort(arr2, arr2 + b);

    for(int i = 0; i < a; i++)
        if(arr1[i] != arr2[i])
            return false;

    return true;
}

int main() {
    int arr1[] = {1, 5, 2, 4, 3};
    int arr2[] = {4, 3, 5, 1, 2};

    int a = sizeof(arr1) / sizeof(arr1[0]);
    int b = sizeof(arr2) / sizeof(arr2[0]);

    if(arrayEqualOrNot(arr1, arr2, a, b))
        cout<< "Equal" << endl;
    else
        cout<< "Not equal" << endl;

    return 0;
}