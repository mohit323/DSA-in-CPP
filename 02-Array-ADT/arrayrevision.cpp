#include<iostream>
using namespace std;
struct Array {
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
    arr.A = new int [arr.size];
    for(int i = 0; i<arr.length;i++){
        cout<<"enter the elements of the array: ";
        cin>>arr.A[i];
    }
    return arr;
}
void Display(Array arr){
    for(int i = 0 ;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
}
void insert(Array &arr , int key , int index){
    for(int i = arr.length ;i>=index;i--){
        arr.A[i]= arr.A[i-1];
    }
    arr.A[index] = key;
    arr.length++;
}
void remove(Array &arr , int index){
    for(int i = index ;i<arr.length-1;i++){
        arr.A[i]= arr.A[i+1];
    }
    arr.length--;
}
int get(Array arr,int index){
    return arr.A[index];
}
void set(Array &arr,int index,int key){
    arr.A[index] = key;
}
void Linear_search(Array arr,int key){
    for(int i = 0 ; i<arr.length;i++){
        if(key == arr.A[i]){
            cout<<"the location of the element is "<<i;
            return;
        }
    }
    cout<<"the element is not in the given arrya";
}
void Binary_search(Array arr, int key){
    int l = 0;
    int h = arr.length - 1;

    while(l <= h){
        int mid = (l + h) / 2;

        if(arr.A[mid] == key){
            cout << "The location of the element is " << mid;
            return;
        }
        else if(arr.A[mid] > key){
            h = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }

    cout << "Element not found";
}
int max(Array arr){
    int max = arr.A[0];
    for(int i = 0 ;i <arr.length;i++){
        if(max<arr.A[i]){
            max = arr.A[i];
        }
    }
    return max;
}
int min(Array arr){
    int min = arr.A[0];
    for(int i = 0 ;i <arr.length;i++){
        if(min>arr.A[i]){
            min = arr.A[i];
        }
    }
    return min;
}
int sum(Array arr){
    int sum = 0;
    for(int i = 0 ;i <arr.length;i++){
        sum += arr.A[i];
    }
    return sum;
}
float average(Array arr){
    return (float)sum(arr) / arr.length;
}
int* Reverse_auxiliary_array(Array &arr){
    int *c = new int[arr.length];

    for(int i = 0, j = arr.length - 1; i < arr.length; i++, j--){
        c[i] = arr.A[j];
    }

    return c;
}
void Reverse_Array(Array &arr){
    int i = 0;
    int j = arr.length -1 ;
    while(i<j){
        int temp = arr.A[i];
         arr.A[i] = arr.A[j];
         arr.A[j] = temp; 
         i++;
         j--;
    }
}
bool check_sorted(Array arr){
    for(int i = 0;i<arr.length;i++){
        if(arr.A[i]>arr.A[i+1]){
            return false;
        }
    }
    return true;
}
void SortedInsert(Array &arr, int key)
{
    if (arr.length == arr.size)
    {
        cout << "Array is full";
        return;
    }

    int i = arr.length - 1;

    while (i >= 0 && arr.A[i] > key)
    {
        arr.A[i + 1] = arr.A[i];
        i--;
    }

    arr.A[i + 1] = key;
    arr.length++;
}
Array Merge(Array arr1, Array arr2)
{
    Array arr3;
    arr3.size = arr1.length + arr2.length;
    arr3.length = 0;
    arr3.A = new int[arr3.size];

    int i = 0, j = 0, k = 0;

    while(i < arr1.length && j < arr2.length)
    {
        if(arr1.A[i] < arr2.A[j])
            arr3.A[k++] = arr1.A[i++];
        else if(arr1.A[i] > arr2.A[j])
            arr3.A[k++] = arr2.A[j++];
        else
        {
            arr3.A[k++] = arr1.A[i++];
            arr3.A[k++] = arr2.A[j++];
        }
    }

    while(i < arr1.length)
        arr3.A[k++] = arr1.A[i++];

    while(j < arr2.length)
        arr3.A[k++] = arr2.A[j++];

    arr3.length = k;

    return arr3;
}
int *intersection(Array arr, Array arr1)
{
    int *c = new int[arr.length + arr1.length];
    int k = 0;
    for (int i = 0; i < arr.length; i++)
    {
        for (int j = 0; j < arr1.length; j++)
        {
            if (arr1.A[j] == arr.A[i])
            {
                c[k++] = arr.A[i];
            }
        }
    }
    return c;
}
int main(){
Array arr = create();
// Display(arr);
// insert(arr,10,2);
// remove(arr,2);
// cout<<endl;
Display(arr);
return 0;
}