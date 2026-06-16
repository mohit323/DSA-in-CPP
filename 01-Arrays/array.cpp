#include<iostream>
using namespace std;
int main(){
int arr[5]={2,4,6,8,10};
int *p = new int[5];
p[0]= 2;
p[1]= 4;
p[2]= 6;
p[3]= 8;
p[4]= 10;

for (int i = 0; i<5;i++){
    cout<<arr[i]<<endl;
}
for (int i = 0; i<5;i++){
    cout<<p[i]<<endl;
}
return 0;
}