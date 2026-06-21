#include<iostream>
using namespace std;
char* create(){
    char *str= new char[100];
    cout<<"enter your string: ";
    cin.getline(str,100);
    return str;
}
void upper_lower(char str[]){
    for(int i = 0; str[i] != '\0';i++){
        str[i]=str[i]+32;
    }
}
void Display(char *str){
     for(int i = 0; str[i] != '\0';i++){
        cout<<str[i];
    }
    cout<<endl;
}
void toggle(char *str){
      for(int i = 0; str[i] != '\0';i++){
        if(str[i]>=65 && str[i]<=90){
            str[i]+=32;
        }
        else if( str[i]>=97 && str[i]<=122){
            str[i]-=32;
        }
    }
}
int main(){
char *str1= create();
upper_lower(str1);
Display(str1);
char *str2= create();
toggle(str2);
Display(str2);

return 0;
}