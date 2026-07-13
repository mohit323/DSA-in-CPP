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
int max(node* p){
    int max = p->data;
    while(p != nullptr){
        if(max<p->data){
            max = p->data;
        }
        p= p->next;
    }
    return max;
}
int min(node* p){
    int min = p->data;
    while(p != nullptr){
        if(min>p->data){
            min = p->data;
        }
        p= p->next;
    }
    return min;
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
int maximum = max(head);
cout<<"the maximum value of the linked list is : "<<maximum<<endl;
int minimum = min(head);
cout<<"the minimum value of the linked list is : "<<minimum<<endl;
return 0;
}