#include<bits/stdc++.h>
using namespace std;

class Queue{

    public:

    //data memebers
    int size;
    int* arr;
    int front;
    int back;

    //parameterised constructor
    Queue(int s)
    {
        this->size=s;
        arr=new int[size];
        front=-1;
        back=-1;
    }


    //push operation

    void push(int data)
    {
        if(back==size-1)
        {
            cout<<"Queue overflow\n";
            return ;
        }
        else
        {
            if(back==-1)
            front++;

            back++;
            arr[back]=data;
        }
    }


    //pop operation

    void pop()
    {
        if(front==-1)
        {
            cout<<"Queue underflow\n";
            return;
        }
        else
        {
            if(front<back)
            front++;
            else if(front==back)
            {
                front=-1;
                back=-1;
            }
        }
    }


    //retrieve the front element
    int top()
    {
        if(front==-1)
        {
            cout<<"Stack is empty\n";
            return -1;
        }
        else
        return arr[front];
    }

    //retrieve the back element
    int rear()
    {
        if(back==-1)
        {
            cout<<"Stack is empty\n";
            return -1;
        }
        else
        return arr[back];
    }


    //is Empty operation
    bool empty()
    {
        if(front==-1 && back==-1)
        return true;
        else
        return false;
    }

};


int main()
{
    Queue q(5);

    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);

    cout<<"front of queue is "<<q.top()<<endl;
    cout<<"back of queue is "<<q.rear()<<endl;

    
    q.pop();
    q.pop();
    q.pop();
    q.pop();

    cout<<"front of queue is "<<q.top()<<endl;
    cout<<"back of queue is "<<q.rear()<<endl;

    q.pop();
    q.pop();

    cout<<"front of queue is "<<q.top()<<endl;
    cout<<"back of queue is "<<q.rear()<<endl;

    q.push(10);
    cout<<"front of queue is "<<q.top()<<endl;
    cout<<"back of queue is "<<q.rear()<<endl;

    // q.pop();
    // cout<<"front of queue is "<<q.top()<<endl;



}