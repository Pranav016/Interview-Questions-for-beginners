#include<iostream>
using namespace std;
//finding mid of Linked List
class node
{
public:
    int data;
    node* next;
    node(int d):data(d),next(NULL){};
};

void insertAtFront(node* &head,int d)
{
    if(head==NULL)
    {
        node *n=new node(d);
        head=n;
        return;
    }
    node* n=new node(d);
    n->next=head;
    head=n;
    return;
}

node* mid(node* head)
{
    if(head==NULL)
    {
        return head;
    }
    node* slow=head;
    node* fast=head->next;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

int main()
{
    node* head=NULL;
    insertAtFront(head,1);
    insertAtFront(head,2);
    insertAtFront(head,3);
    insertAtFront(head,4);
    insertAtFront(head,5);
    node* temp=mid(head);
    if(temp)
    {cout<<temp->data;}
}