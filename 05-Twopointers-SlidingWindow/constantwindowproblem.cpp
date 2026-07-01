#include<iostream>
using namespace std;
int main(){
int n;
int i = 0;
int j = 0;
int sum = 0;
int maximum_sum = 0;
cout<<"enter the size of the array: ";
cin>>n;
int arr[n];
// for(int k = 0;k<n;k++){
//     cout<<"enter the elements of the array: ";
//     cin>>arr[k];
// }
// for(int i = 0;i<=n-3;i++){
//     sum = 0;
//     for(int j = i;j<i+3;j++){
//         sum += arr[j];
//     }
//     maximum_sum = max(maximum_sum,sum);
//     cout<<endl;
// }
while (j < n) {

        // Expand the window
        sum += arr[j];

        // Window size is less than k
        if (j - i + 1 < 3) {
            j++;
        }

        // Window size becomes exactly k
        else if (j - i + 1 == 3) {

            // Process the current window
            maximum_sum = max(maximum_sum, sum);

            // Slide the window
            sum -= arr[i];
            i++;
            j++;
        }
    }
return 0;
}