// Program that print maximum subarray sum

#include<iostream>
using namespace std;

int main() {
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    int n = 7;

    int max_sum = arr[0];

    for(int st = 0; st < n; st++) {
        int cs = 0;
        for(int end = st; end < n; end++) {
            cs += arr[end];
            max_sum = max(cs, max_sum);
        }
    }
    
    cout << max_sum << endl;

    return 0;
}