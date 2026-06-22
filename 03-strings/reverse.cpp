#include<iostream>
using namespace std;

char* create(){
    char* str = new char[50];
    cout << "Enter your string: ";
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

void reverse(char str[]){
    int len = stringlength(str);

    char* str1 = new char[len + 1];

    for(int i = len - 1, j = 0; i >= 0; i--, j++){
        str1[j] = str[i];
    }

    str1[len] = '\0';

    for(int i = 0; i <= len; i++){
        str[i] = str1[i];
    }

    delete[] str1;
}

int main(){
    char* str = create();

    reverse(str);

    cout << "Reversed String: " << str << endl;

    delete[] str;

    return 0;
}