// Check how internally vector memory is allocated

#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;

    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << endl;

    v.push_back(10);
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << endl;

    v.push_back(20);
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << endl;

    v.push_back(30);
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << endl;

    v.push_back(40);
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << endl;

    v.push_back(10);
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << endl;

    return 0;
}