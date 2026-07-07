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
bool Check_Duplicate(Array arr){
    int max = arr.A[0];

    for(int i = 1; i < arr.length; i++){
        if(max < arr.A[i]){
            max = arr.A[i];
        }
    }

    int H[max + 1] = {0};

    for(int i = 0; i < arr.length; i++){
        H[arr.A[i]]++;
    }

    for(int i = 0; i < arr.length; i++){
        if(H[arr.A[i]] > 1){
            return false;
        }
    }

    return true;
}
int main(){

return 0;
}