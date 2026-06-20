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
int get(Array arr,int index){
    if (index<0 || index>arr.length-1){
        return -1;
    }
    else
        return arr.A[index];
    
}
void set(Array *arr,int index,int x){
    if (index<0 || index>arr->length-1){
        cout<<"invalid index";
        return;
    }
    arr->A[index]=x;
}
void Display(struct Array arr){
    for(int i = 0; i < arr.length; i++){
        cout << arr.A[i] << " ";
    }
    cout << endl;
}
float average(Array arr){
    int sum =0;
    int average;
    for(int i = 0; i<arr.length;i++){
        sum += arr.A[i];
    }
    average = sum/arr.length;
    return average;
}
int max(Array arr){
    int max = arr.A[0];
    for(int i = 0; i<arr.length;i++){
        if(max<arr.A[i]){
            max= arr.A[i];
        }
    }
    return max;
}
int main(){
    Array arr= create();
    cout<<get(arr,-1)<<endl;
    set(&arr,2,10);
    Display(arr);
    cout<<"the average of this array is : "<<average(arr);
    cout<<"the maximum value of the array is : "<<max(arr);
return 0;
}