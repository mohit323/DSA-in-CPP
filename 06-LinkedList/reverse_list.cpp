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
// node* reverse_list(node* head,int n){
//     node* p = head;
//     int j = 0;
//     int* arr = new int[n];
//     for(int i = 0;i<n;i++){

//         arr[i] = p->data;
//         p = p->next;
//     }
//     p = head;
//     for(int i = n -1  ; i >= 0 ; i-- ){
//         p->data = arr[i];
//         p=p->next;
//     }
//     return head;
// }
node* reverse_list(node* head){
    node* p = head;
    node* q = nullptr;
    node* r = nullptr;
    while( p != nullptr){
        r = q;
        q = p;
        p = p->next;
        q->next = r; 
    }
    head = q;
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
head = reverse_list(head);
Display(head);
return 0;
}