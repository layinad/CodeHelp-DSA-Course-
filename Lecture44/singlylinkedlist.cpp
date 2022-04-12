#include<bits/stdc++.h>
using namespace std;

class Node{

    public:

    int data;
    Node* next;

    Node(int data)                  //custom constructor
    {
        this->data=data;
        this->next=NULL;
    }

    ~Node()                         //destructor
    {
        int value=this->data;
        if(this->next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};

void insertAtHead(Node* &head,int data)
{
    Node* temp=new Node(data);      //creating a new node
    
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &tail,int data)
{
    if(tail==NULL)                  //base condition
    insertAtHead(tail,data);
    
    
    Node* temp=new Node(data);      //creating a new node
    tail->next=temp;
    tail=temp;
}

void insertAtPosition(Node* &tail,Node* &head,int position,int data)
{
    if(position==1)                //base case
    {
        insertAtHead(head,data);
        return;
    }

    Node* temp=head;
    int count=1;
    while(count < position-1)
        {
            temp=temp->next;
            count++;
        }

    if(temp->next==NULL)
    {
        insertAtTail(tail,data);
        return;
    }

    Node* nodeToInsert=new Node(data);       //creating the node to be inserted
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}

void deleteAtHead(Node* &head)
{
    Node* todelete=head;
    head=head->next;
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
    if(todelete->next==NULL)
        tail=temp;

    temp->next=temp->next->next;

    todelete->next=NULL;
    delete todelete;
}

bool isCircular(Node* head){
    if(head==NULL)
        return 1;
    
    Node* temp=head->next;
    while(temp!=NULL && temp!=head)
        temp=temp->next;
    
    if(temp==head)
        return 1;
    else
        return 0;
}

bool detectLoop(Node* head)
{
    if(head==NULL)
    return false;

    map<Node*,bool>visited;
    Node* temp=head;
    while(temp!=NULL)
    {
        if(visited[temp]==true)
        {
            cout<<"Present on element "<<temp->data<<endl;
            return 1;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return 0;
}


Node* floydDetectionCycle(Node* head)
{
    if(head==NULL)
    return NULL;

    Node* slow=head;
    Node* fast=head;

    while(slow!=NULL && fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        fast=fast->next;
        slow=slow->next;

        if(slow==fast)
        {
            cout<<"present at "<<slow->data<<endl;
            return slow;
        }
    }

    return NULL;
}

Node* getStartingNode(Node* head)
{
    if(head==NULL)
    return NULL;

    Node* intersection=floydDetectionCycle(head);
    Node* slow=head;
    while(slow!=intersection)
    {
        intersection=intersection->next;
        slow=slow->next;
    }

    return slow;
}

void removeCycle(Node* &head)
{
    if(head==NULL)
    return;

    Node* startOfLoop=getStartingNode(head);
    Node* temp=startOfLoop;
    while(temp->next!=startOfLoop)
    {
        temp=temp->next;
    }

    temp->next=NULL;
}

void print(Node* &head)
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
    Node* node1=new Node(10);          //Dynamically creating an object
    // cout<<node1->data<<endl; 
    // cout<<node1->next<<endl;

    //head pointed to node1
    Node* head=node1;
    Node* tail=node1;
    print(head);
    
    insertAtHead(head,12);
    print(head);
    insertAtHead(head,15);
    print(head);

    insertAtTail(tail,12);
    print(head);
    insertAtTail(tail,15);
    print(head);

    insertAtPosition(tail,head,4,22);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    deleteNode(tail,head,4);
    print(head);  

    tail->next=head->next;                               //creating a circular linked list

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl; 

    // print(head);

    if(floydDetectionCycle(head)!=NULL)
    {
        cout<<"Cycle is present\n";
        Node* start=getStartingNode(head);
        cout<<"beginning node is "<<start->data<<endl;
    }
    else
    cout<<"No cycle is present\n";

    removeCycle(head);
    print(head);



    // if(isCircular(tail))
    // cout<<"Linked List is circular\n";
    // else
    // cout<<"Linked List is not circular\n";

    return 0;
}