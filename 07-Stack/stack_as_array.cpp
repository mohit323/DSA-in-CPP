#include<iostream>
using namespace std;
struct stack{
    int size;
    int top;
    int *arr;
};
stack create(){
    stack st;
    cout<<"enter the size of the stack : ";
    cin>>st.size;
    st.arr = new int[st.size];
    st.top = -1;
}
int main(){

return 0;
}

// if(top = -1) condition for empty stack
// if(top = st.size - 1) condition for full stack