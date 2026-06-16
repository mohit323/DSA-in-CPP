#include <iostream>
#include <vector>
using namespace std;

// 01-Array.cpp
// Simple examples showing C-style arrays and basic operations.

int main() {
    // 1) Declaration and initialization
    int a[5] = {10, 20, 30, 40, 50};

    // 2) Access elements
    cout << "Elements of C-style array a:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "a[" << i << "] = " << a[i] << "\n";
    }

    // 3) Size in bytes and element count
    cout << "\nSize of a (bytes): " << sizeof(a) << "\n";
    cout << "Number of elements in a: " << (sizeof(a) / sizeof(a[0])) << "\n";

    // 4) Simple modification
    a[2] = 99;
    cout << "\nAfter modification, a[2] = " << a[2] << "\n";

    // 5) When you need a resizable array, prefer std::vector
    vector<int> v = {1, 2, 3};
    cout << "\nVector before push_back: ";
    for (int x: v) cout << x << ' ';
    cout << "\n";

    v.push_back(4);
    cout << "Vector after push_back: ";
    for (int x: v) cout << x << ' ';
    cout << "\nSize: " << v.size() << "\n";

    return 0;
}
