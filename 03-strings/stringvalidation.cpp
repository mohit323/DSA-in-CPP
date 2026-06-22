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
int stringlength(char str[]){
    int count = 0;
    while(str[count] != '\0'){
        count++;
    }
    return count;
}

bool valid(char str[]){
for(int i=0; str[i]!='\0'; i++)
{
    if(!( (str[i]>='A' && str[i]<='Z') ||
          (str[i]>='a' && str[i]<='z') ||
          (str[i]>='0' && str[i]<='9') ))
    {
        return false;
    }
}

return true;
}
int main(){
    char* str=create();
    bool x=valid(str);
    cout<<x;
return 0;
}