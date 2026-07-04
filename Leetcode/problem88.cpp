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
    arr.A = new int[arr.size];
    for(int i  = 0 ; i<arr.length; i++){
        cout<<"enter the elements of the array: ";
        cin>>arr.A[i];
    }
    return arr;
}
Array Merge_sorted(Array arr1,Array arr2){
    int i = 0;
    int j = 0;
    int k = 0;
    int *c = new int[arr1.length + arr2.length];
    while(i <arr1.length && j<arr2.length){
        if(arr1.A[i]>arr2.A[j]){
            c[k++]=arr2.A[j++];
        }
        else if(arr1.A[i]<arr2.A[j]){
            c[k++]=arr1.A[i++];
        }
        else if(arr1.A[i]==arr2.A[j]){
            c[k++]=arr1.A[i++];
            c[k++]=arr2.A[j++];
        }
    }
    while(i<arr1.length){
        c[k++]=arr1.A[i++];
    }
    while(j<arr2.length){
        c[k++]=arr2.A[j++];
    }
    Array result;
    result.A = c;
    result.length = arr1.length + arr2.length;
    result.size = arr1.length + arr2.length;
    return result;
}
int main(){

return 0;
}