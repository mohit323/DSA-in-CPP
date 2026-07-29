#include<iostream>
using namespace std;

struct stack{
    int size;
    int top;
    char* arr;
};

stack create(){
    stack st;
    cout<<"enter the size of the stack: ";
    cin>>st.size;
    st.top = -1;
    st.arr = new char[st.size];
    return st;
}

void push(stack &st,char key){
    if(st.top == st.size -1){
        cout<<"stack overflow";
        return;
    }
    st.top++;
    st.arr[st.top] = key;  
}

void pop(stack &st){
    if(st.top == -1){
        cout<<"your stack is empty ";
        return;
    }
    else{
        st.top--;
    }
}

void Display(stack st){
    for(int i = st.top ; i>=0 ; i--){
        cout<<st.arr[i]<<" ";
    }
}

bool paranthesis_match(stack &st){
    // Initialize temp stack directly to avoid triggering 'cin' from create() again
    stack st1;
    st1.size = st.size;
    st1.top = -1;
    st1.arr = new char[st1.size];
    
    for(int i = 0 ; i<= st.top ;i++){
        if(st.arr[i] == '(' ||
            st.arr[i] == '{' ||
            st.arr[i] == '['){
                push(st1,st.arr[i]);
            }
        else if(st.arr[i] == ')' ||
            st.arr[i] == '}' ||
            st.arr[i] == ']'){
                
            // If stack is already empty when we find a closing bracket, it's invalid
            if(st1.top == -1){
                delete[] st1.arr;
                return 0;
            }
            
            // Look at the top element before popping
            char popped = st1.arr[st1.top];
            pop(st1);
            
            // Check if the popped bracket matches the current closing bracket
            if(st.arr[i] == ')' && popped != '(') { delete[] st1.arr; return 0; }
            if(st.arr[i] == '}' && popped != '{') { delete[] st1.arr; return 0; }
            if(st.arr[i] == ']' && popped != '[') { delete[] st1.arr; return 0; }
        }
    }
  
    bool result;
    if(st1.top == -1){
        result = 1;
    }
    else{
        result = 0;
    }
    
    // Free the temporary array memory
    delete[] st1.arr;
    
    return result;
}

int main(){
    stack st = create();
    push(st,'(');
    push(st,'(');
    push(st,'(');
    push(st,')');
    push(st,')');
    cout<<endl;
    // Display(st);
    cout<<paranthesis_match(st);
    return 0;
}