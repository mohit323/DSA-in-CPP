// #include<iostream>
// #include<cstring>
// using namespace std;

// char* create() {
//     char* str = new char[100];
//     cout << "Enter your string: ";
//     cin.getline(str, 100);
//     return str;
// }

// bool check_anagram(char str[], char str1[]) {

//     if(strlen(str) != strlen(str1))
//         return false;

//     for(int i = 0; str[i] != '\0'; i++) {

//         if(str[i] != -1) {

//             bool found = false;

//             for(int j = 0; str1[j] != '\0'; j++) {

//                 if(str[i] == str1[j]) {

//                     str[i] = -1;
//                     str1[j] = -1;
//                     found = true;
//                     break;
//                 }
//             }

//             if(!found)
//                 return false;
//         }
//     }

//     return true;
// }

// int main() {

//     char* str = create();
//     char* str1 = create();

//     bool ischeck = check_anagram(str, str1);

//     cout << ischeck;

//     delete[] str;
//     delete[] str1;

//     return 0;
// }

#include<iostream>
#include<cstring>
using namespace std;

char* create() {
    char* str = new char[50];
    cout << "Enter your string: ";
    cin.getline(str, 50);
    return str;
}

bool Check_anigram_hash(char str[],char str1[]){

    if(strlen(str) != strlen(str1))
        return false;

    int H[26] = {0};
    int K[26] = {0};

    for(int i = 0; str[i] != '\0'; i++){
        H[str[i] - 97]++;
    }

    for(int j = 0; str1[j] != '\0'; j++){
        K[str1[j] - 97]++;
    }

    for(int l = 0; l < 26; l++){
        if(H[l] != K[l]){
            return false;
        }
    }

    return true;
}

int main() {

    char* str = create();
    char* str1 = create();

    cout<<Check_anigram_hash(str,str1);

    delete[] str;

    return 0;
}
