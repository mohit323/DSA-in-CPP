#include<iostream>
using namespace std;
struct stack{
    int size;
    int top;
    int* arr;
};
stack create(){
    stack st;
    cout<<"enter the size of the stack: ";
    cin>>st.size;
    st.arr = new int[st.size];
    st.top = -1;
    return st;
}
void push(stack &st){
    if(st.top == st.size -1){
        cout<<"stack is full";
    }                                           /*This is a function to push elements in a valid stack*/
    cout<<"enter the value u want to push: ";
    st.top++;
    cin >> st.arr[st.top];
}
bool isEmpty(stack st){
    if(st.top == -1){
        return true;
    }
    else{
        return false;
    }
}
bool isfull(stack st){
    if(st.top == st.size -1){
        return true;
    }
    else{
        return false;
    }
}
void Display(stack st){                         /*this is a function to display emements in a stack*/
    for(int i=st.top;i>=0;i--){
        cout<<st.arr[i]<<" ";
    }
}

int main(){
stack st = create();
push(st);
push(st);
push(st);
push(st);
push(st);
cout<<endl;
bool result = isfull(st);
bool result1 = isEmpty(st);
cout<<result;
cout<<endl;
cout<<result1;
cout<<endl;
Display(st);
return 0;
}