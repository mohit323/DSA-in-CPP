#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
node* create(){
    node *q = new node;
    q->next = nullptr;
    return q;
}
node* create_list(int arr[], int n)
{
    node *head = create();
    head->data = arr[0];

    node *last = head;

    for(int i = 1; i < n; i++)
    {
        last->next = create();
        last = last->next;
        last->data = arr[i];
    }

    return head;
}

int main()
{
    int n;

    cout << "Enter the number of nodes: ";
    cin >> n;

    int *arr = new int[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    node *head = create_list(arr, n);

    delete[] arr;

    return 0;
}

// if(headnode ->next == 0)
// if(headnode ->next == nullptr)