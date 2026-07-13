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
node* linear_search(node* p, int key) {
    node* head = p;
    node* q = nullptr;

    while (p != nullptr) {
        if (p->data == key) {

            // If the node is already the head
            if (q == nullptr)
                return head;

            // Remove p from its current position
            q->next = p->next;

            // Move p to the front
            p->next = head;
            head = p;

            return head;
        }

        q = p;
        p = p->next;
    }

    // Key not found
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
head = linear_search(head,2);
cout<<endl;
Display(head);

return 0;
}