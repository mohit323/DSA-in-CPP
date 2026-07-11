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
int count_nodes(node* p){
    int count = 0;
    while (p != nullptr)
    {
        count++;
        p= p->next;
    }
    return count;
}
bool linear_search(node* p,int key){
    while(p != nullptr){
        if(key == p->data){
            return true;
        }
        p = p->next;
    }
    return false;
}
node* Rlinear_search(node* p ,int key){
    if(p == nullptr){
        return nullptr;
    }
    if(key == p->data){
        return p;
    }
    return Rlinear_search(p->next, key);
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
cout<<linear_search(head,2);

return 0;
}