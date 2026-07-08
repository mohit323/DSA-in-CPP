#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Enter the elements of the array: ";
        cin >> arr[i];
    }

    int window_size;
    cout << "Enter the window size: ";
    cin >> window_size;

    int i = 0;
    int j = 0;
    int sum = 0;
    int max_sum = INT_MIN;

    while(j < n)
    {
        // Add current element
        sum += arr[j];

        if(j - i + 1 < window_size)
        {
            j++;
        }
        else if(j - i + 1 == window_size)
        {
            max_sum = max(max_sum, sum);

            // Slide the window
            sum -= arr[i];
            i++;
            j++;
        }
    }

    cout << "Maximum Sum = " << max_sum;

    return 0;
}