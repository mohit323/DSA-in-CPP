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
void sorted_insert(Array &arr,int x){
    int i;
for( i = arr.length - 1; i >= 0 && arr.A[i] > x; i--)
{
    arr.A[i + 1] = arr.A[i];
}
arr.A[i + 1] = x;
arr.length++;
}
int main(){

return 0;
}