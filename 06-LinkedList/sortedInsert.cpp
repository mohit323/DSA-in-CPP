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
        p=p->next;
    }
}
node* sorted_insert(node* head,int key){
    node* q = create();
    q->data = key;
    node* p = head;
    node* temp = nullptr;
    while( p != nullptr){
        if(p->data > key){
            temp->next = q;
            q->next = p;
            return head;
        }
        temp = p;
        p= p->next;
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
head = sorted_insert(head,33);
cout<<endl;
Display(head);
return 0;
}