#include<iostream>
using namespace std;
struct Array{
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
void Display(Array arr){
    for (int i = 0; i < arr.length; i++){
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}
int Search_Linear(Array &arr, int key){
    for (int i = 0; i < arr.length; i++){
        if (key == arr.A[i]){
            if(i > 0)
                swap(arr.A[i-1], arr.A[i]); // Transposition
            return i;
        }
    }
    return -1;
}
int Search_binary(Array arr, int key)
{
    int low = 0;
    int high = arr.length - 1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(key == arr.A[mid])
            return mid;

        else if(key < arr.A[mid])
            high = mid - 1;

        else
            low = mid + 1;
    }

    return -1;
}

int main(){
    Array arr = create();
    Display(arr);
    int result =Search_Linear(arr,2);
    Display(arr);
    cout<<result;
    return 0;
}