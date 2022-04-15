#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }

    ~Node()
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



void insertNode(Node* &tail,int element,int data)
{

    if(tail==NULL)                            //base case  (if the lsit is empty)
    {
        Node* temp=new Node(data);                //node to be inserted
        tail=temp;
        temp->next=temp;                      //pointing the node to itself as it is a circular linked list
    }

    else                                    //non empty list
    {
        Node* temp=tail;
        while(temp->data!=element)
        {
            temp=temp->next;
        }

        Node* nodeToInsert=new Node(data);
        nodeToInsert->next=temp->next;
        temp->next=nodeToInsert;

    }


}

void deleteNode(Node* &tail,int element)
{
    if(tail==NULL)
    {
        cout<<"List is empty\n";
        return;
    }
    else
    {
        Node* prev=tail;
        Node* curr=prev->next;
        while(curr->data!=element)
        {
            prev=curr;
            curr=curr->next;
        }

        prev->next=curr->next;

        if(curr==prev)
        {
            tail=NULL;
        }
        if(tail==curr)
        {
            tail=prev;
        }
        curr->next=NULL;

        delete curr;
    }
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
            return 1;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return 0;
}

void print(Node* tail)
{
    Node* temp=tail;
    if(tail==NULL)
    {
        cout<<"List is empty\n";
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);

    cout<<endl;
}

int main()
{
    Node* tail=NULL;

    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);

    // insertNode(tail,5,7);
    // print(tail);

    // insertNode(tail,7,9);
    // print(tail);

    // insertNode(tail,5,6);
    // print(tail);

    // insertNode(tail,9,10);
    // print(tail);

    // insertNode(tail,3,4);
    // print(tail);

    // deleteNode(tail,5);

    // if(isCircular(tail))
    // cout<<"Linked List is circular\n";
    // else
    // cout<<"Linked List is not circular\n";
    print(tail);
    return 0;
}