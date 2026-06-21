#include<iostream>
using namespace std;

int stringlength(char str[]){
    int count = 0;
    while(str[count] != '\0'){
        count++;
    }
    return count;
}
int main(){
char name[50];
cout<<"enter your name: ";
cin.getline(name ,50);
int result = stringlength(name);
cout<<result;
return 0;
}