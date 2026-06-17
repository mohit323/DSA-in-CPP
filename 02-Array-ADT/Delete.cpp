#include<iostream>
using namespace std;
struct  Array {
    int *A;
    int size;
    int length;
};
Array create(){
    Array arr;
    cout<<"enter the size of the array"<<endl;
    cin>>arr.size;
    arr.A=new int [arr.size];
    cout<<"enter the length of the array"<<endl;
    cin>>arr.length;
    for(int i =0;i<arr.length;i++){
        cout<<"enter the element"<<i<<endl;
        cin>>arr.A[i];
    }
    return arr;
}
void insert(Array &arr, int index, int value) {
    if (index >= 0 && index <= arr.length && arr.length < arr.size) {

        for (int i = arr.length; i > index; i--) {
            arr.A[i] = arr.A[i - 1];
        }

        arr.A[index] = value;
        arr.length++;
    }
}
void Display(struct Array arr){
    for(int i = 0; i < arr.length; i++){
        cout << arr.A[i] << " ";
    }
    cout << endl;
}
void remove(Array &ptr,int index){
    for(int i = index;i<ptr.length;i++){
        ptr.A[i]=ptr.A[i+1];
    }
    ptr.length--;
}

int main(){
    Array arr= create();
    insert(arr,2,10);
    Display(arr);
    remove(arr,2);
    Display(arr);

return 0;
}