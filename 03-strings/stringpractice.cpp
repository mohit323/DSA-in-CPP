#include<iostream>
using namespace std;
char* create(){
    char *str = new char[100];
    cout<<"enter your string: ";
    cin.getline(str,100);
    return str;
}
int string_length(char str[]){
    int count = 0;
    for(int i = 0 ; str[i] != '\0';i++){
        count++;
    }
    cout<<count;
}
void Upper_Lower(char str[]){
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i]+=32;
    }
}
void Toggle(char str[]){
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        else if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
}
void Display(char str[]){
    for(int i = 0;str[i] !='\0';i++){
        cout<<str[i];
    }
}
int Count_Vowel(char str[]){

    int vcount = 0;
    int ccount = 0;

    for(int i = 0; str[i] != '\0';i++){
        if(str[i]=='A'|| str[i]=='a'||
            str[i]=='E' || str[i]=='e'||
            str[i]=='O'|| str[i]=='o' ||
            str[i]=='I' || str[i]=='i'||
            str[i]=='U' || str[i]=='u'){

                vcount++;
            }
        else if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
            ccount++;
        }
    }
    return vcount;
}
void reverse(char str[]){
    int i = 0;
    int j = string_length(str) -1;
    while(i<j){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    i++;
    j--;
    }
}
bool is_palindrome(char str[]){
    int i = 0;
    int j = string_length(str) -1;
    while(i<j){
        if(str[i] != str[j]){
            return false;
        }
        i++;
        j--;
    }
        return true;
}
bool is_Anagram(char str1[],char str2[]){
    int H[26]={0};
    int k[26]={0};
    
    for(int i = 0 ; str1[i] !='\0' ; i++){
        H[str1[i]-97]++;
    }
    for(int i = 0 ; str2[i] !='\0' ; i++){
        k[str2[i]-97]++;
    }
    
    for(int i = 0 ; i<26 ; i++){
        if(H[i] != k[i]){
            return false;
        }
    }
    return true;

}
bool is_Duplicate_hash(char str[]){
    int H[26]={0};
    for(int i = 0 ; str[i] != '\0';i++){
        H[str[i] - 97]++;
    }
    for(int i = 0 ; i<26 ;i++){
        if(H[i]>1){
            return true;
        }
    }
    return false;
}
bool is_Duplicate_bit(char str[]){
    int H = 0;
    int x = 0;

    for(int i = 0; str[i] != '\0'; i++){
        x = 1;
        x = x << (str[i] - 'a');

        if((x & H) > 0){
            return true;
        }

        H = H | x;
    }

    return false;
}
int main(){
char *str= create();
// Upper_Lower(str);
Toggle(str);
Display(str);
return 0;
}
