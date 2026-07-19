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
node* remove(node* head,int index){
    int count = 1;
    node* p = head;
    node* temp = nullptr;
    node* q = nullptr;
    if (index == 1){
        temp = p;
        p = p->next;
        delete temp;

    }
    p = p->next;
    while(p != head){
        count++;
        if(count == index){
        temp = p;
        p = p->next;
        q->next = p;
        delete temp;
        return head;         
        }
        q = p;
        p = p->next;
    }
    return head;
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
cout<<endl;
head = remove(head, 4);
Display(head);
return 0;
}