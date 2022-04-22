#include<bits/stdc++.h>
using namespace std;


class Node{

    public:
    int data;
    Node* next;

    //constructor
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

Node* top;      //initialising a top node

void push(int data)
{
    Node* newNode=new Node(data);
    if(!newNode)           //checking if Heap memory is full
    {
        cout<<"stack overflow\n";
        exit(1);
    }
    else
    {
        newNode->next=top;
        top=newNode;
    }
}

void pop()
{
    if(top==NULL)                 
    {
        cout<<"Stack underflow\n";
        return;
    }
    Node* todelete=top;         //storing the top node;
    top=top->next;             
    delete todelete;           //realeasing the space acquired by dynamic memory allocation
}

bool isEmpty()
{
    if(top==NULL)
    return true;
    else
    return false;
}

int peak()
{
    if(!isEmpty())
    return top->data;
    else
    {
        cout<<"Stack is empty\n";
        return -1;
    }
}

void display()
{
    if(top==NULL)
    {
        cout<<"Stack is empty\n";
        return ;
    }
    else
    {
        Node* temp=top;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
}


int main()
{
    //push the elements of the stack
    push(11);
    push(22);
    push(33);
    push(44);
    display();
    pop();
    pop();
    pop();
    pop();
    display();
    cout<<"Top element is "<<peak()<<endl;

    if(isEmpty())
    cout<<"Stack is empty\n";
    else
    cout<<"Stack is not empty\n";
}