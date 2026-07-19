#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
node* create(){
    node* q = new node;
    q->next = nullptr;
    return q;
}
node* create_list(int arr[],int n){
    node* head = create();
    head->data = arr[0];
    node* last = head;
    for(int i = 1; i<n; i++){
        last->next = create();
        last = last->next;
        last->data = arr[i];
    }
    return head;
}
void Display(node* p){
    while(p != nullptr){
        cout<<p->data<<" ";
        p= p->next;
    }
}
node* insert_before_first(node* head){
    node* q = create();
    cout<<"enter the data: ";
    cin>>q->data;
    q->next = head;
    head = q;
    return head;
}

bool isLinear(node* head) {
    node* p = head;
    node* q = head;

    while (q != nullptr && q->next != nullptr) {
        p = p->next;
        q = q->next->next;

        if (p == q)
            return false;  
    }

    return true;  
}
int main(){
int n;
cout<<"enter the no of nodes: ";
cin>>n;
int* arr = new int[n];
for(int i = 0 ;i<n;i++){
    cout<<"enter the "<<i+1<<" element: ";
    cin>>arr[i];
}
node* head = create_list(arr , n);
Display(head);
cout<<endl;
Display(head);
return 0;
}