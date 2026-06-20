#include<iostream>
using namespace std;
struct Array {
    int *A;
    int size;
    int length;
};
Array create(){
    Array arr;
    cout<<"enter the size of the array: ";
    cin>>arr.size;
    cout<<"enter the length of the array: ";
    cin>>arr.length;
    arr.A= new int [arr.size];
    for (int i = 0;i<arr.length;i++){
        cout<<"enter the elemente of the array: "<<endl;
        cin>>arr.A[i];
    }
    return arr;
}
int is_sorted(Array &arr){
    for(int i =0;i<arr.length-2;i++){
        if(arr.A[i]>arr.A[i+1]){
            return -1;
        }
    }return 1;
    
}
int* merge(Array &arr1, Array &arr2)
{
    int *c = new int[arr1.length + arr2.length];

    int i = 0;
    int j = 0;
    int k = 0;

    // Compare elements from both arrays
    while (i < arr1.length && j < arr2.length)
    {
        if (arr1.A[i] < arr2.A[j])
        {
            c[k++] = arr1.A[i++];
        }
        else
        {
            c[k++] = arr2.A[j++];
        }
    }

    // Copy remaining elements of arr1
    while (i < arr1.length)
    {
        c[k++] = arr1.A[i++];
    }

    // Copy remaining elements of arr2
    while (j < arr2.length)
    {
        c[k++] = arr2.A[j++];
    }

    return c;
}
int main(){
    Array arr1= create();
    Array arr2= create();
    int result1 = is_sorted(arr1);
    int result2 = is_sorted(arr2);
    cout<<result1<<endl;
    cout<<result2<<endl;
    int *ptr = merge(arr1,arr2);
    
return 0;
}