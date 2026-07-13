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
node* remove(node* head,int index){
    node* p = head;
    node* tail = nullptr;
    node* todelete = nullptr;
    int count = 0;
    while(p != nullptr){
        count++;
        if(count == index){
            todelete = p;
            p = p->next;
            tail->next = p;
            delete todelete;
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
head = remove(head,3);
cout<<endl;
Display(head);
return 0;
}