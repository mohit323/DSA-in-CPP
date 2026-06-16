// #include<iostream>
// using namespace std;
// int main(){
// int arr[3][4];
// for (int i = 0; i<3;i++){
//     for(int j= 0;j<4;j++){
//         cout<<"Enter the value of element : "<<i<<","<<j<<endl;
//         cin>>arr[i][j];
//     }
// }
// for (int i = 0; i<3;i++){
//     for(int j= 0;j<4;j++){
//         cout<<" "<<arr[i][j] ;
//     }
//     cout<<endl;
// }
// return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
// int *arr[3];
// arr[0]= new int[4];
// arr[1]= new int[4];
// arr[2]= new int[4];

// for (int i = 0; i<3;i++){
//     for(int j= 0;j<4;j++){
//         cout<<"Enter the value of element : "<<i<<","<<j<<endl;
//         cin>>arr[i][j];
//     }
// }
// for (int i = 0; i<3;i++){
//     for(int j= 0;j<4;j++){
//         cout<<" "<<arr[i][j] ;
//     }
//     cout<<endl;
// }
// return 0;
// }

#include<iostream>
using namespace std;
int main(){
int **arr;
arr = new int*[3];
arr[0]= new int[4];
arr[1]= new int[4];
arr[2]= new int[4];

for (int i = 0; i<3;i++){
    for(int j= 0;j<4;j++){
        cout<<"Enter the value of element : "<<i<<","<<j<<endl;
        cin>>arr[i][j];
    }
}
for (int i = 0; i<3;i++){
    for(int j= 0;j<4;j++){
        cout<<" "<<arr[i][j] ;
    }
    cout<<endl;
}

return 0;
}