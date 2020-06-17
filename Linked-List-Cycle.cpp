#include<iostream>
using namespace std;
//we have to identify whether the Linked List has a cycle or not and then break it.
// I'll be creating a cycle first since Linked List has no cycle by default

class node
{
public:
	int data;
	node* next;
	node(int d):data(d),next(NULL){}
};

void insertAtFront(node* &head,int d)
{
	if(head==NULL)
	{
		node* n=new node(d);
		head=n;
		return;
	}
	node* n=new node(d);
	n->next=head;
	head=n;
	return;
}


void createCycle(node* head)
{
	node* temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}

	temp->next=head->next->next;
}

bool detectCycle(node* head)
{
	node* slow=head;
	node* fast=head;

	while(fast)
	{
		fast=fast->next;
		if(fast)
		{
			fast=fast->next;
			slow=slow->next;
			if(slow==fast)
			{
				return true;
			}
		}
	}
	return false;
}


void breakCycle(node* head)
{
	node* slow=head;
	node* fast=head;

	while(fast)
	{
		fast=fast->next->next;
		slow=slow->next;
		if(slow==fast)
		{
			break;
		}
	}

	node* prev=head;
	while(prev->next!=fast)
	{
		prev=prev->next;
	}
	
	while(fast!=head)
	{
		fast=fast->next;
		head=head->next;
		prev=prev->next;
	}

	prev->next=NULL;
}


void print(node* head)
{
	while(head)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}



int main()
{
	node* head=NULL;
	insertAtFront(head,5);
	insertAtFront(head,4);
	insertAtFront(head,3);
	insertAtFront(head,2);
	insertAtFront(head,1);
	createCycle(head);
	if(detectCycle)
	{
		cout<<"Yes Linked List has Cycle"<<endl;
	}
	breakCycle(head);
	print(head);
}














