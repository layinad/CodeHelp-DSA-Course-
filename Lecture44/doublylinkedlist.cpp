#include<bits/stdc++.h>
using namespace std;

class Node{

    public:

    int data;
    Node* prev;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }

    ~Node()
    {
        int value=this->data;
        if(next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};


void insertAtHead(Node* &head,Node* &tail,int data)
{
    if(head==NULL)
    {
        Node* temp=new Node(data);
        head=temp;
        tail=temp;
        return;
    }
    Node* temp=new Node(data);                   //creating the node to be inserted
    temp->next=head;
    head->prev=temp;
    head=temp;
}


void insertAtTail(Node* &tail,Node* &head,int data)
{
    if(tail==NULL)
    {
        Node* temp=new Node(data);
        tail=temp;
        head=temp;
        return;
    }
    Node* temp=new Node(data);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertAtPosition(Node* &tail,Node* &head,int position,int data)
{

    if(position==1)                          //base case
    {
        insertAtHead(head,tail,data);
        return;
    }


    Node* temp=head;
    int count=1;
    while(count<position-1)
    {
        temp=temp->next;
        count++;
    }

    if(temp->next==NULL)                   //base case
    {
        insertAtTail(tail,head,data);
        return;
    }


    Node* nodetobeInserted=new Node(data);

    nodetobeInserted->next=temp->next;
    temp->next->prev=nodetobeInserted;
    temp->next=nodetobeInserted;
    nodetobeInserted->prev=temp;

}

void deleteAtHead(Node* &head)
{
    Node* todelete=head;
    todelete->next->prev=NULL;
    head=todelete->next;
    todelete->next=NULL;
    delete todelete;
}

void deleteNode(Node* &tail,Node* &head,int position)
{

    if(position==1)
    {
        deleteAtHead(head);
        return;
    }

    int count=1;
    Node* temp=head;
    while(count < position-1)
    {
        temp=temp->next;
        count++;
    }
    
    Node* todelete=temp->next;

    todelete->prev=NULL;
    temp->next=todelete->next;
    if(todelete->next!=NULL)
    {
        todelete->next->prev=temp;
        todelete->next=NULL;
    }
    else
    tail=temp;

    delete todelete;
}

int getLength(Node* head)
{
    Node* temp=head;
    int len=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        len++;
    }
    return len;
}

void print(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    // Node* node1=new Node(10);              //dynamically creating the first node
    // Node* head=node1;
    // Node* tail=node1;

    Node* head=NULL;
    Node* tail=NULL;


    print(head);
    cout<<getLength(head)<<endl;

    insertAtHead(head,tail,11);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtHead(head,tail,12);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtHead(head,tail,13);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtTail(tail,head,9);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtPosition(tail,head,4,17);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtPosition(tail,head,1,69);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtPosition(tail,head,7,100);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    deleteNode(tail,head,1);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    deleteNode(tail,head,6);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    deleteNode(tail,head,3);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    return 0;
}