// Program that demonstrate pass by reference
// Here array name is implicitly as a pointer that store memory address. SO if any changes in a function of an array its directly change into a main function.

#include<iostream>
using namespace std;

void doubleNums(int nums[], int size) {
    for(int i = 0; i < size; i++)
        nums[i] *= 2;
}

int main() {
    int nums[] = {1, 2, 3};
    int size = 3;

    doubleNums(nums, size);
    
    for(int i = 0; i < size; i++) 
        cout << nums[i] << endl;

    return 0;
}