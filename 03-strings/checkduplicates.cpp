#include<iostream>
using namespace std;

char* create() {
    char* str = new char[50];
    cout << "Enter your string: ";
    cin.getline(str, 50);
    return str;
}

#include<iostream>
using namespace std;

char* create() {
    char* str = new char[50];
    cout << "Enter your string: ";
    cin.getline(str, 50);
    return str;
}

void duplicate(char str[]) {

    for(int i = 0; str[i] != '\0'; i++) {

        int count = 1;

        if(str[i] != -1) {

            for(int j = i + 1; str[j] != '\0'; j++) {

                if(str[i] == str[j]) {
                    count++;
                    str[j] = -1;
                }
            }

            if(count > 1) {
                cout << str[i] << " appears " << count << " times" << endl;
            }
        }
    }
}

int main() {

    char* str = create();

    duplicate(str);

    delete[] str;

    return 0;
}
int main() {
    char* str = create();

    duplicate(str);

    delete[] str;

    return 0;
}