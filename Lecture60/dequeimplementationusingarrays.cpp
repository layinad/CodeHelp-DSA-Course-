#include<bits/stdc++.h>
using namespace std;

class Deque {

    public:

    //data members
    int* arr;
    int size;
    int top;
    int rear;

    //Parameterised Constructor
    Deque(int s)
    {
        this->size=s;
        arr=new int[size];
        top=-1;
        rear=-1;
    }

    //push_front operation
    void push_front(int x)
    {
        if((top==0 && rear==size-1) || (rear==(top-1)%(size-1)))       //if the dequeue is full
        {
            cout<<"Deque overflow\n";
            return;
        }

        else if(top==-1)                  //if we are inserting the first element
        top=rear=0;

        else if(top==0)            //to maintain the cyclic nature
        top==size-1;

        else                   //normal insertion in top
        top--;

        arr[top]=x;
        return;
    }


    //push_back operation
    void push_back(int x)
    {
        if((top==0 && rear==size-1) || (rear==(top-1)%(size-1)))       //if the dequeue is full
        {
            cout<<"Deque overflow\n";
            return;
        }

        else if(rear==-1)                  //if we are inserting the first element
        top=rear=0;

        else if(rear==size-1 && top!=0)            //to maintain the cyclic nature
        rear=0;

        else                   //normal insertion in top
        rear++;

        arr[rear]=x;
        return;
    }


    //pop_front operation
    int pop_front()
    {
        int ans=0;
        if(top==-1)                //if queue is empty
        {
            cout<<"Queue underflow\n";
            return -1;
        }


        //if it is the first element
        else if(top==rear)
        {
            ans=arr[top];
            top=rear=-1;
        }

        //if it is the last element
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


    //pop_back operation
    int pop_back()
    {
        int ans=0;
        if(rear==-1)                //if queue is empty
        {
            cout<<"Queue underflow\n";
            return -1;
        }


        //if it is the first element
        else if(top==rear)
        {
            ans=arr[rear];
            top=rear=-1;
        }

        //maintaining the cyclic nature
        else if(rear==0)
        {
            ans=arr[rear];
            rear=size-1;
        }

        //normal pop
        else
        {
            ans=arr[rear];
            rear--;
        }

        return ans;
    }

};










int main()
{

}
