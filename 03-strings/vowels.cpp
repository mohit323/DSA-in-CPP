#include<iostream>
using namespace std;
char* create(){
    char* str;
    str=new char[50];
    cout<<"enter your string: ";
    cin.getline(str,50);
    return str;
}
void lower(char str[]){
    for(int i= 0;str[i] != '\0';i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]+=32;
        }
    }
}
int vowel_count(char str[]){
    int count=0;
    lower(str);

    char str1[]="aeiou";

    for(int i=0; str[i]!='\0'; i++){
        for(int j=0; str1[j]!='\0'; j++){
            if(str[i]==str1[j]){
                count++;
            }
        }
    }
    return count;
}
int main(){
    char* str=create();
    int result= vowel_count(str);
    cout<<result;

return 0;
}