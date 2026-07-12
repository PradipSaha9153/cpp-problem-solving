// WAF that Find unique elements in an array

#include<iostream>
using namespace std;

void uniqueElements(int arr[], int s) {
    for(int i = 0; i < s; i++) {
        bool flag = false;
        for(int j = 0; j < s; j++) {
            if(i != j) {
                if(arr[i] == arr[j]) {
                    flag = true;
                    break;
                }
            }
        }
        if(flag == false)
            cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {9, 5, 3, 9, 1, 2, 5};
    int s = sizeof(arr) / sizeof(arr[0]);

    cout << "Unique elemnts are: " << endl;
    uniqueElements(arr, s);
    cout << endl;

    return 0;
}