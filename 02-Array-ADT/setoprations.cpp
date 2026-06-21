#include <iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

Array create()
{
    Array arr;

    cout << "Enter size of array: ";
    cin >> arr.size;

    cout << "Enter length of array: ";
    cin >> arr.length;

    arr.A = new int[arr.size];

    cout << "Enter elements (sorted):" << endl;
    for (int i = 0; i < arr.length; i++)
    {
        cin >> arr.A[i];
    }

    return arr;
}

void Display(Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

Array Union(Array arr1, Array arr2)
{
    Array arr3;

    arr3.size = arr1.length + arr2.length;
    arr3.A = new int[arr3.size];

    int i = 0, j = 0, k = 0;

    while (i < arr1.length && j < arr2.length)
    {
        if (arr1.A[i] < arr2.A[j])
        {
            arr3.A[k++] = arr1.A[i++];
        }
        else if (arr1.A[i] > arr2.A[j])
        {
            arr3.A[k++] = arr2.A[j++];
        }
        else
        {
            arr3.A[k++] = arr1.A[i];
            i++;
            j++;
        }
    }

    while (i < arr1.length)
    {
        arr3.A[k++] = arr1.A[i++];
    }

    while (j < arr2.length)
    {
        arr3.A[k++] = arr2.A[j++];
    }

    arr3.length = k;

    return arr3;
}

Array Intersection(Array arr1, Array arr2)
{
    Array arr3;

    arr3.size = (arr1.length < arr2.length)
                    ? arr1.length
                    : arr2.length;

    arr3.A = new int[arr3.size];

    int i = 0, j = 0, k = 0;

    while (i < arr1.length && j < arr2.length)
    {
        if (arr1.A[i] < arr2.A[j])
        {
            i++;
        }
        else if (arr1.A[i] > arr2.A[j])
        {
            j++;
        }
        else
        {
            arr3.A[k++] = arr1.A[i];
            i++;
            j++;
        }
    }

    arr3.length = k;

    return arr3;
}

int main()
{
    cout << "Array 1" << endl;
    Array arr1 = create();

    cout << "\nArray 2" << endl;
    Array arr2 = create();

    Array uni = Union(arr1, arr2);
    Array inter = Intersection(arr1, arr2);

    cout << "\nUnion: ";
    Display(uni);

    cout << "Intersection: ";
    Display(inter);

    delete[] arr1.A;
    delete[] arr2.A;
    delete[] uni.A;
    delete[] inter.A;

    return 0;
}