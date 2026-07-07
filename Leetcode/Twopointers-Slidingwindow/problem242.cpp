#include<iostream>
using namespace std;
char* create(){
    char *str=new char[100];
    cout<<"enter your string: ";
    cin.getline(str , 100);
    return str;
}
bool Valid_Anagram(char str1[],char str2[]){
    int H[26] = {0};
    int k[26] = {0};
    for(int i = 0; str1[i] != '\0' ; i++){
        H[str1[i] - 97]++;
    } 
    for(int j = 0; str2[j] != '\0' ; j++){
        k[str2[j] - 97]++;
    } 
    for(int l = 0; l<26 ; l++){
        if(H[l] != k[l]){
            return false;
        }
    }
    return true; 
}
int main(){
char* str1 = create();
char* str2 = create();
cout<<Valid_Anagram(str1,str2);
return 0;
}