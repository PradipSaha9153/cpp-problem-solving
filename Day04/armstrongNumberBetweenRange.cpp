// Print Armstrong Numbers Between range

#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int digitsCount(int n) {
    if(n == 0) return 1;

    int digits = 0;

    while(n != 0) {
        digits++;
        n /= 10;
    }

    return digits;
}

void armstrongNumbers(int start, int end) {
    vector<int> arr;

    for(int num = start; num <= end; num++) {
        int copy = num;
        int count = digitsCount(num);
        int sum = 0;

        while (copy != 0) {
            int rem = copy % 10;
            sum += (int)pow(rem, count);
            copy /= 10;
        }

        if(sum == num)
            arr.push_back(num);
    }

    cout << "Between " << start << " to " << end << " the armstrong number is: " << endl;
    for(int n : arr)
        cout << n << ", ";
}

int main() {
    int start, end;

    cout << "Enter two number for set a range: ";
    cin >> start >> end;

    armstrongNumbers(start, end);

    return 0;
}