#include<iostream>
using namespace std;
char* create(){
    char* str = new char[100];
    cout<<"enter your string: ";
    cin.getline(str,100);
    return str;
}
int StringLength(char str[]){
    int count =0;
    for(int i = 0;str[i] != '\0';i++){
        count++;
    }
    return count;
}
void Upper_Lower(char str[]){
    for(int i = 0 ;str[i]!='\0';i++){
        str[i]+= 32;
    }
    cout<<str;
}
void Toggle(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
    cout<<str;
}
#include<iostream>
using namespace std;
char* create(){
    char* str = new char[100];
    cout<<"enter your string: ";
    cin.getline(str,100);
    return str;
}
int StringLength(char str[]){
    int count =0;
    for(int i = 0;str[i] != '\0';i++){
        count++;
    }
    return count;
}
void Upper_Lower(char str[]){
    for(int i = 0 ;str[i]!='\0';i++){
        str[i]+= 32;
    }
    cout<<str;
}
void Toggle(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
    cout<<str;
}
void Count_Vowel(char str[])
{
    int vcount = 0;
    int ccount = 0;

    char vowel[] = {'A','E','I','O','U','a','e','i','o','u','\0'};

    for(int i = 0; str[i] != '\0'; i++)
    {
        bool found = false;

        for(int j = 0; vowel[j] != '\0'; j++)
        {
            if(str[i] == vowel[j])
            {
                vcount++;
                found = true;
                break;
            }
        }

        if(!found && ((str[i] >= 'A' && str[i] <= 'Z') ||
                      (str[i] >= 'a' && str[i] <= 'z')))
        {
            ccount++;
        }
    }

    cout << "Vowels = " << vcount << endl;
    cout << "Consonants = " << ccount << endl;
}
int main(){
char* str=create();
Upper_Lower(str);
return 0;
}