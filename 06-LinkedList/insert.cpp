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
node* insert_after_position(node* head,int index){
    node* q = create();
    node* tail = nullptr;
    node* p = head;
    cout<<"enter the data: ";
    cin>>q->data;
    int count = 0;
    while(p != nullptr){
        count++;
        if(count == index){
            tail = p;
            p = p->next;
            tail->next = q;
            q->next = p;
            return head;
        }
        tail = p;
        p = p->next;
    }
    return head;
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
head = insert_after_position(head,2);
cout<<endl;
Display(head);
return 0;
}