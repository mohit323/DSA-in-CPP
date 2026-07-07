#include<iostream>
#include <cstring>
using namespace std;
int main(){
char str[100];
cout<<"enter your string: ";
cin.getline(str,100);
int i = 0;
int j = 0;
int n = strlen(str);
int H[256] ={0};
int max_length = 0;
while(j<n){
    H[str[j]]++;
        while(H[str[j]]>1){
            H[str[i]]--;
            i++;
        }
        max_length = max(max_length , j-i +1);
        j++;

    }
    cout<<max_length;
    return 0;
}

