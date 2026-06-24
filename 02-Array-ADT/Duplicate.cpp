// #include<iostream>
// using namespace std;
// struct Array{
//     int *A;
//     int size;
//     int length;
// };
// Array create(){
//     Array arr;
//     cout<<"enter the size of the array: ";
//     cin>>arr.size;
//     cout<<"enter the length of the array: ";
//     cin>>arr.length;
//     arr.A= new int [arr.size];
//     for(int i = 0; i<arr.length;i++){
//         cout<<"enter the element of the array: "<<endl;
//         cin>>arr.A[i];
//     }
//     return arr;
    
// }
// void Check_Duplicate(Array arr){
//     for(int i = 0 ;i<arr.length;i++){
//         int count = 1;
//         if(arr.A[i] != -1){
//             for(int j = i+1;j<arr.length;j++){
//                 if(arr.A[i]==arr.A[j]){
//                     count++;
//                     arr.A[j]=-1;
//                 }
//             }
//             if(count>1){
//                 cout<<arr.A[i]<<" "<<"appears "<<count<<" times"<<endl;
//             }
//         }
//     }
// }
// int main(){
// Array arr= create();
// Check_Duplicate(arr);
// return 0;
// }

//sorted duplicate
// #include<iostream>
// using namespace std;
// struct Array{
//     int *A;
//     int size;
//     int length;
// };
// Array create(){
//     Array arr;
//     cout<<"enter the size of the array: ";
//     cin>>arr.size;
//     cout<<"enter the length of the array: ";
//     cin>>arr.length;
//     arr.A= new int [arr.size];
//     for(int i = 0; i<arr.length;i++){
//         cout<<"enter the element of the array: "<<endl;
//         cin>>arr.A[i];
//     }
//     return arr;
    
// }
// void Check_Duplicate_sorted(Array arr){
//     for(int i = 0 ;i<arr.length;i++){
//         int count = 1;
//         if(arr.A[i] != -1){
//             for(int j = i+1;j<arr.length;j++){
//                 if(arr.A[i]==arr.A[j]){
//                     count++;
//                     arr.A[j]=-1;
//                 }
//                 else
//                     break;
//             }
//             if(count>1){
//                 cout<<arr.A[i]<<" "<<"appears "<<count<<" times"<<endl;
//             }
//         }
//     }
// }
// int main(){
// Array arr= create();
// Check_Duplicate_sorted(arr);
// return 0;
// }

//HASHTABLE DUPLICATE


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

    for(int i = 0; i < arr.length; i++){
        cout<<"enter the element of the array: ";
        cin>>arr.A[i];
    }

    return arr;
}

int maxElement(Array arr){
    int maximum = arr.A[0];

    for(int i = 1; i < arr.length; i++){
        if(arr.A[i] > maximum){
            maximum = arr.A[i];
        }
    }

    return maximum;
}

void Check_Duplicate_hash(Array arr){

    int maximum = maxElement(arr);

    int *H = new int[maximum + 1];

    for(int i = 0; i <= maximum; i++){
        H[i] = 0;
    }

    for(int i = 0; i < arr.length; i++){
        H[arr.A[i]]++;
    }

    for(int i = 0; i <= maximum; i++){
        if(H[i] > 1){
            cout << i << " appears "
                 << H[i] << " times" << endl;
        }
    }

    delete[] H;
}

int main(){

    Array arr = create();

    Check_Duplicate_hash(arr);

    delete[] arr.A;

    return 0;
}