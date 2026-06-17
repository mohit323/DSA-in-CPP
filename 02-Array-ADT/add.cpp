#include <iostream>
using namespace std;

struct Array
{
    int *ptr;
    int size;
    int length;
};

void Display(struct Array arr)
{
    cout << "The elements of the array are: " << endl;

    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.ptr[i] << " ";
    }

    cout << endl;
}

void append(struct Array *p, int x)
{
    if (p->length < p->size)
    {
        p->ptr[p->length] = x;
        p->length++;
    }
    else
    {
        cout << "Array is full. Cannot append." << endl;
    }
}

int main()
{
    Array arr;
    int n;

    cout << "Enter the size of the array: ";
    cin >> arr.size;

    arr.ptr = new int[arr.size];

    cout << "Enter the length of the array: ";
    cin >> arr.length;

    for (int i = 0; i < arr.length; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> arr.ptr[i];
    }

    cout << endl;
    Display(arr);

    cout << "Enter the element you want to append: ";
    cin >> n;

    append(&arr, n);

    cout << endl;
    Display(arr);

    delete[] arr.ptr;

    return 0;
}