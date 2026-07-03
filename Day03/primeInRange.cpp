// Find Prime Numbers Between Given Interval

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

void prime(int start, int end) {
    vector<int> p;

    for(int num = start; num <= end; num++) {
        if(num < 2)
            continue;

        bool flag = true;
        for(int i = 2; i < sqrt(num); i++) {
            if(num % i == 0) {
                flag = false;
                break;
            }
        }
        if(flag)
            p.push_back(num);
    }
    
    cout << "Prime numbers between " << start << " and " << end << " - " << endl;
    for(int n : p)
        cout << n << ", ";
}

int main() {
    int start, end;

    cout << "Enter two number for set a range: ";
    cin >> start >> end;

    prime(start, end);

    return 0;
}