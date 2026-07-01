#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the size of the array: ";
cin>>n;
int arr[n];
for(int i =0;i<n;i++){
    cout<<"enter the elemets of the array: ";
    cin>>arr[i];
}
int i = 0;
int j = 0;
int k = 4;
int sum = 0;
int max_sum = 0;
while (j < n) {
    // 1. Include the new element
    sum += arr[j];

    // 2. Grow the window until it reaches size k
    if (j - i + 1 < k) {
        j++;
    }

    // 3. Window size is exactly k
    else if (j - i + 1 == k) {
        // Process the current window
        // (e.g., update maximum, minimum, count, etc.)

        // 4. Remove the leftmost element
        sum -= arr[i];

        // 5. Slide the window forward
        i++;
        j++;
    }
}
return 0;
}

