#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
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

    for(int i = 1; i<n ;i++){
        last->next = create();
        last = last->next;
        last->data = arr[i];
    }
    return head;
}
void Display(node* head){
    node* p = head;
    while(p != nullptr){
        cout<<p->data<<" ";
        p = p->next;
    }
}
bool is_sorted(node* head){
    if(head == nullptr){
        return true;
    }
    node* p = head->next;
    node* tail = head;
    while(p != nullptr){
        if(p->data < tail->data){
            return false;
        }
        tail = p;
        p = p->next;
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
cout<<endl;
cout<<is_sorted(head);

return 0;
}