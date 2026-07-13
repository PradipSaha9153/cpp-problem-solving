// Calculate sum & product off all nummbers in an vector

#include<iostream>
#include<vector>
using namespace std;

void sumAndProduct(vector<int> nums) {
    int sum = 0;
    int product = 1;

    for(int n : nums){
        sum += n;
        product *= n;
    }

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
}

int main() {
    vector<int> nums = {4, 2, 7, 8, 1, 2, 5};

    sumAndProduct(nums);

    return 0;
}