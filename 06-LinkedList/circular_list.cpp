#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
node* create(){
    node* q = new node;
    q->next = nullptr;
    return q;
}
node* create_circular_list(int arr[], int n){
    node* head = create();
    head->data = arr[0];
    node* last = head;

    for(int i = 1 ; i<n ; i++){
        last->next = create();
        last = last->next;
        last->data = arr[i];
    }
    last->next = head;
    return head;
}
void Display(node* head){
    node* p = head;
    cout<<p->data<<" ";
    p = p->next;
    while( p != head){
        cout<<p->data<<" ";
        p = p->next;
    }
}
bool is_loop(node* head){
    node* p,*q;
    p = q = head;
    while( q != nullptr && q->next != nullptr){
        p = p->next;
        q = q->next->next;
        if(p == q){
            return true;
        }
    }
    return false;
}
int main(){
int n;
cout<<"enter the no of nodes: ";
cin>>n;
int* arr = new int[n];
for(int i = 0 ; i<n ; i++){
    cout<<"enter the "<<i+1<<" value: ";
    cin>>arr[i];
}
node* head = create_circular_list(arr,n);
cout<<is_loop(head);
cout<<endl;
Display(head);
return 0;
}