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
    int count = 0;
    while(str[count] != '\0'){
        count++;
    }
    return count;
}

bool compare(char str[],char str1[]){
    for(int i = 0;i<max(stringlength(str),stringlength(str1));i++){
        if(str[i]!=str1[i]){
             if(str[i]<str1[i]){
                cout<<"string one will come earlier in dictionary: "<<endl;
            }
            else if(str[i]>str1[i]){
                cout<<"string two will come earlier in dictionary: "<<endl;
            }
            return false;
        }

    }
    return true;
}
bool checkpalindrome(char str[]){
    int i= 0;
    int j = stringlength(str)-1;
    while(i<j){
        if(str[i]!=str[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main(){
char *str1=create();
char *str2=create();

bool say = compare(str1,str2);
cout<<say<<endl;
bool say1= checkpalindrome(str1);
cout<<say1;
return 0;
}