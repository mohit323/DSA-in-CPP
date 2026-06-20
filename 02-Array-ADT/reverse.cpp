#include<iostream>
using namespace std;
struct Array {
    int *A;
    int size;
    int length;
};
Array create(){
    Array arr;
    cout<<"enter the size of the array : ";
    cin>>arr.size;
    cout<<"enter the length of the array : ";
    cin>>arr.length;
    arr.A = new int [arr.size];
    for (int i = 0; i<arr.length;i++){
        cout<<"enter the elemets of the array: ";
        cin>>arr.A[i];
    }
    return arr;
}
void reverse(Array &arr){
    int i = 0;
    int j = arr.length - 1;

    while(i < j){
        int temp = arr.A[i];
        arr.A[i] = arr.A[j];
        arr.A[j] = temp;

        i++;
        j--;
    }
}
void reverse1(Array &arr)
{
    int *B = new int[arr.size];

    for(int i = 0, j = arr.length - 1; i < arr.length; i++, j--)
    {
        B[i] = arr.A[j];
    }

    delete [] arr.A;
    arr.A = B;
}
void Display(Array arr){
    for (int i = 0; i < arr.length; i++){
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}
int main(){
    Array arr= create();
    reverse(arr);
    Display(arr);
    reverse1(arr);
    Display(arr);
return 0;
}