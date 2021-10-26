#include <bits/stdc++.h>
using namespace std;

class Node
{
    public: int data;
            Node* next;
            
            Node(int val)
            {
                data=val;
                next=NULL;
            }
};

void insertTail(Node* &head, int val)
{
    Node* n=new Node(val);
    
    if(head==NULL)
    {
        head=n;
        return;
    }
    Node* temp=head;
    
    while(temp->next!=NULL)
        temp=temp->next;
    
    temp->next=n;
}

void insertHead(Node* &head, int val)
{
    Node* n=new Node(val);
    
    n->next=head;
    head=n;
}

bool search(Node* head, int val)
{
    Node* temp=head;
    
    while(temp!=NULL)
    {
        if(temp->data==val)
            return true;
        temp=temp->next;
    }
    
    return false;
}

void deletion(Node* &head, int val)
{
    Node* temp=head;
    Node* prev=NULL;
    
    if(temp==NULL)
        return;
    
    if(temp->data==val)
    {
        head=temp->next;
        delete temp;
        return;
    }
    
    while(temp->data!=val)
    {
        prev=temp;
        temp=temp->next;
    }
    
    if(temp==NULL)
        return;
    prev->next=temp->next;
    delete temp;
}

void printnode(Node* head)
{
    Node* temp=head;
        
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}

void reverse(Node* &head)
{
    Node* prev=NULL;
    Node* current=head;
    Node* nextptr;
    
    while(current!=NULL)
    {
        nextptr=current->next;
        current->next=prev;
        
        prev=current;
        current=nextptr;
    }
    head=prev;
}

Node* reverseRecursive(Node* &head)
{
    if(head==NULL || head->next==NULL)
        return head;
        
    Node* newhead=reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    
    return newhead;
}

Node* reversek(Node* &head, int k)
{
    Node* prev=NULL;
    Node* current=head;
    Node* nextptr;
    int count=0;
    
    while(count<k && current!=NULL)
    {
        nextptr=current->next;
        current->next=prev;
        prev=current;
        current=nextptr;
        count++;
    }
    
    if(nextptr!=NULL)
        head->next=reversek(nextptr, k);
    
    return prev;
}
void lastfirst(Node* &head)
{
    Node* prev=NULL;
    Node* temp=head;
    
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    temp->next=head;
    head=temp;
}
int main() 
{
	Node* head=NULL;
	insertTail(head, 1);
	insertTail(head, 2);
	insertTail(head, 3);
	insertHead(head, 0);
	printnode(head);
	
	cout<<endl<<search(head, 5)<<endl;
	//deletion(head, 0);
	//printnode(head);
	//reverse(head);
	//cout<<endl;
	//printnode(head);
	head=reversek(head, 2);
	printnode(head); cout<<endl;
	lastfirst(head);
	printnode(head);
	
	return 0;
}
