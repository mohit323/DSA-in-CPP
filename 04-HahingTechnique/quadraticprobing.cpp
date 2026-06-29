#include<iostream>
using namespace std;
struct Array {
    int *A;
    int size;
    int length;
};
Array create() {
    Array arr;
    char ch1;

    cout << "Enter the size of the array: ";
    cin >> arr.size;

    cout << "Enter the length of the array: ";
    cin >> arr.length;

    arr.A = new int[arr.size];

    cout << "Do you want to enter the values right now (Y/N): ";
    cin >> ch1;

    if (ch1 == 'Y' || ch1 == 'y') {
        for (int i = 0; i < arr.length; i++) {
            cout << "Enter element " << i + 1 << ": ";
            cin >> arr.A[i];
        }
    }

    return arr;
}

void Display(Array arr){
    for(int i = 0 ; i<arr.size;i++){
        cout<<arr.A[i]<<" ";
    }
}
void insert_hash(Array &hash,Array key){
for(int i = 0; i < key.length; i++)
{
    int hashfunc = key.A[i] % hash.size;
    int f = 0;
    int quadraticprobe = hashfunc;

    if(hash.A[hashfunc] == 0)
    {
        hash.A[hashfunc] = key.A[i];
    }
    else
    {
        while(hash.A[quadraticprobe] != 0)
        {
            f++;
            quadraticprobe = (hashfunc + f*f) % hash.size;
        }

        hash.A[quadraticprobe] = key.A[i];
    }
}

hash.length = key.length;
}

int search(Array hash, int key)
{
    int hashfunc = key % hash.size;
    int start = hashfunc;
    int f = 0;

    while (hash.A[hashfunc] != 0)
    {
        if (hash.A[hashfunc] == key)
        {
            return hashfunc;
        }
        f++;
        hashfunc = (hashfunc + f*f) % hash.size;

        if (hashfunc == start)
        {
            break;
        }
    }

    return -1;
}
int main(){
Array Key = create();
Array hash = create();
insert_hash(hash , Key);
Display(hash);
return 0;
}