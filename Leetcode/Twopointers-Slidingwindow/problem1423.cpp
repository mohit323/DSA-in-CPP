#include<iostream>
using namespace std;
int main(){
int n;
int k;
int lsum = 0;
int rsum = 0;
int maxsum = 0;
cout<<"enter the size of the array: ";
cin>>n;
int arr[n];
for(int i = 0; i<n;i++){
    cout<<"enter the elements of the array: ";
    cin>>arr[i];
}
cout<<"enter the limit of the cards: ";
cin>>k;
for (int i = 0; i < k; i++){
    lsum += arr[i];
}
maxsum = lsum;
int right_index = n-1;
for(int i = k-1; i>=0 ;i--){
    lsum -= arr[i];
    rsum += arr[right_index];
    right_index--;
    maxsum = max(maxsum,lsum+rsum);
}
cout<<maxsum;
return 0;
}