// #include<iostream>
// using namespace std;

// char* create() {
//     char* str = new char[50];
//     cout << "Enter your string: ";
//     cin.getline(str, 50);
//     return str;
// }

// void Check_Duplicate_hash(char str[]){

//     int maximum = 25;

//     int H[26] = {0};

//     for(int i = 0; str[i] != '\0'; i++){
//         H[str[i] - 97]++;
//     }

//     for(int i = 0; i <= maximum; i++){
//         if(H[i] > 1){
//             cout << char(i + 97)
//                  << " appears "
//                  << H[i]
//                  << " times" << endl;
//         }
//     }
// }

// int main() {

//     char* str = create();

//     Check_Duplicate_hash(str);

//     delete[] str;

//     return 0;
// }

#include<iostream>
using namespace std;

char* create() {
    char* str = new char[50];
    cout << "Enter your string: ";
    cin.getline(str, 50);
    return str;
}

void Check_Duplicate_hash(char str[]){

    int H=0,x=0;
    for(int i = 0;str[i]!='\0';i++){
         x= 1;
        x=x<<(str[i]-97);
        if((x&H)>0){
            cout<<str[i]<<" "<<"Has a Duplicate";
        }
        else
            H = x|H;
    }
}

int main() {

    char* str = create();

    Check_Duplicate_hash(str);

    delete[] str;

    return 0;
}