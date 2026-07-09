// #include<iostream>
// #include <vector>
// using namespace std;
// int main(){
// vector<int> vr;
// cout<<sizeof(vr);
// return 0;
// }

// #include<iostream>
// #include <vector>
// using namespace std;
// int main(){
// vector<int> vr;
// int n;
// cout<<"enter the length of the array: ";
// cin>>n;
// int arr[n];

// for(int i = 0;i<n;i++){
//     cout<<"enter the elements in the array: ";
//     cin>>arr[i];
// }
// for(int i = 0;i<n;i++){
//     cout<<"copying the elements in vector ";
//     vr.push_back(arr[i]);
// }
// cout<<vr.size();
// return 0;
// }



#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> vr;
// vr.push_back(1);
// vr.push_back(2);
// vr.push_back(3);
// vr.push_back(4);
// vr.push_back(5);


// SYNTAX --> vector<int>vr(3,10) This means that we are creating
//                               a vector of size 3 and all the elements of this vector
//                                is goint to be 10

// SYNTAX --> vector<int>vr2(vr1) This means we are creating a vector vr2
//                                and giving the values of vector 1 to vector 2    



int n;
int index;
int value;
cout<<"enter the size of the vector: ";
cin>>n;
for(int i = 0; i<n;i++){
    int x;
    cout<<"enter the elements of the vector: ";
    cin>>x;
    vr.push_back(x);
}
// vr.pop_back();
vr.erase(vr.begin());/*if we want to erase the element at index 2 
                        we anc do something like 
                        vr.erase(vr.begin()+2) 
                        as begain gives us the position of the 0th index of the vector */

/*we can also delete a range of elements in the verctor we just have to give it a range like a start 
and a ending like   vr.erase(start,end) -> the start can be vr.begin()+1 and end can be vr.begin()+2
note that erase can change the size of the vector but have no effect on capacity of the vector */

cout<<&(*vr.begin())<<endl;
cout<<*vr.begin()<<endl;
// cout<<*vr.end()<<endl;

cout<<"enter the value u want to insert: ";
cin>>value;
vr.insert(vr.begin()+2,value);
for(int i : vr){
    cout<<i<<" ";
}
cout<<endl;
cout<<vr.size()<<endl;
cout<<vr.capacity()<<endl;
cout<<"enter the index of the vector whose value u want to see: ";
cin>>index;
cout<<"the value at "<<index<<" "<<"is "<<vr[index]<<endl;
// cout<<"the value at "<<index<<" "<<"is "<<vr.at(index)<<endl;
cout<<"the value at front "<<"is "<<vr.front()<<endl;
cout<<"the value at back "<<"is "<<vr.back()<<endl;
vr.clear();
cout<<vr.size()<<endl;  /*from line no 91 to 93 we can see that we clear the vector and size become 0 
                                    but the capacity remains the same*/ 
cout<<vr.capacity()<<endl;
return 0;
}