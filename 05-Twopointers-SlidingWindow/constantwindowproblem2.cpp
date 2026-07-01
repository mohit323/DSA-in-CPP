#include<iostream>
using namespace std;
int main(){
int n;
int lsum = 0;
int rsum = 0;
int msum = 0;
int k;

cout<<"enter the size of the array: ";
cin>>n;
int arr[n];
for (int i = 0; i<n;i++){
    cout<<"enter the elemets of the array: ";
    cin>>arr[i];
}
cout<<"enter the limit of the window: ";
cin>>k;
for(int i = 0;i<k;i++){
    lsum += arr[i];
}
int right_index = n-1;
msum = lsum;
for(int i = k-1;i>=0;i--){
    rsum += arr[right_index];
    lsum -= arr[i];
    right_index--;
    msum = max(msum,lsum+rsum);
}
cout<<msum;

return 0;
}