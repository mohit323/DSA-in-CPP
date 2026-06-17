#include<iostream>
using namespace std;
class Array{
    private:
    int *A;
    int size;
    int length;
    public:
    Array(int s,int l){
        size = s;
        length = l;
        A = new int[size];
    }
    void insert(int index , int no){
        if(index < 0 || index > length || length >= size) {
            cout << "Insert error: invalid index or array full" << endl;
            return;
        }
        for(int i = length; i > index; --i) {
            A[i] = A[i-1];
        }
        A[index] = no;
        ++length;
    }
 void remove(int index){
    if(index < 0 || index >= length){
        cout << "Invalid index\n";
        return;
    }

    for(int i = index; i < length - 1; i++){
        A[i] = A[i + 1];
    }

    length--;
}
};
int main(){
    Array a(10,5);


return 0;
}