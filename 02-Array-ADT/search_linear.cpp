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
int Search_Linear(Array arr,int key){
    for (int i = 0 ; i<arr.length; i++){
        if (key == i ){
            swap(arr.A[i-1],arr.A[i-1]);
            return i-i;
        }
        
    }
    return -1;
}
int main(){
    Array arr = create();
    Display(arr);
    Search_Linear(arr,2);
    return 0;
}