#include <iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

void Display(struct Array arr)
{
    cout << "The elements of the array are:" << endl;

    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }

    cout << endl;
}

void extendSizeArray(struct Array *p, int newSize)
{
    int *q = new int[newSize];

    for (int i = 0; i < p->length; i++)
    {
        q[i] = p->A[i];
    }

    delete[] p->A;

    p->A = q;
    p->size = newSize;
}

void insert(struct Array *p, int index, int x)
{
    if (index < 0 || index > p->length)
    {
        cout << "Invalid index!" << endl;
        return;
    }

    if (p->length == p->size)
    {
        cout << "Array is full!" << endl;

        char ch;
        cout << "Do you want to extend this array? (y/n): ";
        cin >> ch;

        if (ch == 'y' || ch == 'Y')
        {
            int newSize;

            cout << "Enter new size: ";
            cin >> newSize;

            if (newSize > p->size)
            {
                extendSizeArray(p, newSize);
            }
            else
            {
                cout << "New size must be greater than current size." << endl;
                return;
            }
        }
        else
        {
            return;
        }
    }

    for (int i = p->length; i > index; i--)
    {
        p->A[i] = p->A[i - 1];
    }

    p->A[index] = x;
    p->length++;
}

int main()
{
    Array arr;

    cout << "Enter the size of the array: ";
    cin >> arr.size;

    arr.A = new int[arr.size];

    cout << "Enter the length of the array: ";
    cin >> arr.length;

    if (arr.length > arr.size)
    {
        cout << "Length cannot be greater than size!" << endl;
        return 0;
    }

    for (int i = 0; i < arr.length; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> arr.A[i];
    }

    Display(arr);

    int element, index;

    cout << "Enter the element you want to insert: ";
    cin >> element;

    cout << "Enter the index where you want to insert: ";
    cin >> index;

    insert(&arr, index, element);

    cout << "\nAfter insertion:" << endl;
    Display(arr);

    delete[] arr.A;

    return 0;
}