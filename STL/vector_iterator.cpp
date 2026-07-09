#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> vr;
int n;
cout<<"enter the length of the vector: ";
cin>>n;
for(int i = 0;i<n;i++){
    int x;
    cout<<"enter the value of the vector: ";
    cin>>x;
    vr.push_back(x);
}

vector<int>::iterator itr;
for( itr = vr.begin();itr != vr.end();itr++){
    cout<<*itr<<" ";
}

// WE can ue auto inseted of vector<int>::iterator itr; in the loop itself to avoid this khatarnak sa syntax
// vector<int>::reverse_iterator itr1;
cout<<endl;

for( auto itr1 = vr.rbegin();itr1 != vr.rend();itr1++){
    cout<<*itr1<<" ";
}
return 0;
}   