#include <iostream>
using namespace std;

struct Array {
    int* A;
    int size;
    int length;
};

Array create() {
    Array arr;
    char ch1;

    cout << "Enter the size of the array: ";
    cin >> arr.size;

    cout << "Enter the length of the array: ";
    cin >> arr.length;

    arr.A = new int[arr.size];

    cout << "Do you want to enter the values right now (Y/N): ";
    cin >> ch1;

    if (ch1 == 'Y' || ch1 == 'y') {
        for (int i = 0; i < arr.length; i++) {
            cout << "Enter element " << i + 1 << ": ";
            cin >> arr.A[i];
        }
    }

    return arr;
}

Array insert_Linearprobing(Array arr, Array key) {

    // Initialize hash table with 0
    for (int i = 0; i < arr.size; i++) {
        arr.A[i] = 0;
    }

    for (int i = 0; i < key.length; i++) {

        int hashfunc = key.A[i] % arr.size;
        int modifiedhash = hashfunc;

        while (arr.A[modifiedhash] != 0) {
            modifiedhash = (modifiedhash + 1) % arr.size;
        }

        arr.A[modifiedhash] = key.A[i];
    }

    arr.length = key.length;

    return arr;
}

void Display(Array arr) {
    cout << "\nHash Table:\n";

    for (int i = 0; i < arr.size; i++) {
        cout << arr.A[i] << " ";
    }

    cout << endl;
}

int main() {

    cout << "Create Key Array\n";
    Array key = create();

    cout << "\nCreate Hash Table\n";
    Array Hashtable = create();

    Hashtable = insert_Linearprobing(Hashtable, key);

    Display(Hashtable);

    return 0;
}