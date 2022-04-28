#include<bits/stdc++.h>
using namespace std;


class Queue{

    public:

    //data memebers
    int size;
    int* arr;
    int top;
    int rear;


    //parameterised constructor
    Queue(int s)
    {
        size=s;
        arr=new int[size];
        top=rear=-1;
    }


    //push operation
    bool push(int data)
    {
        //check for overflow;
        if((top==0 && rear==size-1)  || (rear == (top-1)%(size-1)))
        return false;

        //if it is the first element
        else if(top==-1)
        {
            top=rear=0;
        }
        //if rear is at the last element
        else if(rear==size-1 && top!=0)
        {
            rear=0;
        }
        //normal push in the array
        else
        {
            rear++;
        }
        
        arr[rear]=data;
        return true;
    }

    //pop operation
    int pop()
    {
        int ans=0;
        //check for underflow
        if(top==-1)
        return -1;

        //if it is the first element
        else if(top==rear)
        {
            ans=arr[top];
            top=rear=-1;
        }

        //if top is at last
        else if(top==size-1)
        {
            ans=arr[top];
            top=0;
        }

        //normal pop
        else
        {
            ans=arr[top];
            top++;
        }

        return ans;
    }

};


int main()
{
    Queue q(3);

    cout<<q.push(11)<<endl;
    cout<<q.push(12)<<endl;
    cout<<q.pop()<<endl;
    cout<<q.push(13)<<endl;
    cout<<q.push(14)<<endl;
    cout<<q.push(15)<<endl;
    cout<<q.pop()<<endl;
}