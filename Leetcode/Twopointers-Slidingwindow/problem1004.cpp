#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Enter the elements of the array: ";
        cin >> arr[i];
    }

    int i = 0;
    int j = 0;
    int max_len = 0;
    int count = 0;
    int k;
    cout<<"enter the no of flips: ";
    cin>>k;
    while(j< n){
        if(arr[j] == 0){
            count ++;
        }
        while(count > k){
            if(arr[i] == 0){
                count--;
            }
            i++;
        }
        max_len = max(max_len , j-i+1);
        j++;
    }
    cout<<max_len;

return 0;
}