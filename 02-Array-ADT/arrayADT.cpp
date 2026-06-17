#include<iostream>
using namespace std;
struct Array{
    int *A;
    int size;
    int length;
};
void Display(struct Array arr){
    cout<<"The elements of the array are : "<<endl;
        for (int j =0 ; j<arr.length;j++){
        cout<<arr.A[j]<<endl;
    }

}
int main(){
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
    Display(arr);
return 0;
}