#include<iostream>
using namespace std;
char* create(){
    char* str;
    str= new char[50];
    cout<<"enter your string: ";
    cin.getline(str,50);
    return str;
}
int stringlength(char str[]){
    int count=0;
    while(str[count] != '\0'){
        count++;
    }
    return count;
}


int main(){
char *str1=create();
char *str2=create();
int result1 = stringlength(str1);
int result2 = stringlength(str2);
cout<<result1<<endl;
cout<<result2<<endl;
return 0;
}