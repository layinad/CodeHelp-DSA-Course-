#include<bits/stdc++.h>
using namespace std;

class Stack{

    public:

    //data members / properties
    int *arr;
    int top;
    int size;

    //constructor
    Stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    //behaviors/methods/functions

    //push operation
    void push(int  element)
    {
        if(top<size-1)
        {
            top++;
            arr[top]=element;
        }
        else
        {
            cout<<"Stack Overflow\n";
            return;
        }
    }

    //pop operation
    void pop()
    {
        if(top>=0)
        {
           top--;
        }
        else
        {
            cout<<"Stack underflow\n";
        }
    }

    //top operation
    int peek()
    {
        if(top>=0)
        return arr[top];
        else
        {
            cout<<"Stack is empty\n";
            return -1;
        }
    }

    //empty operation
    bool isEmpty()
    {
        if(top==-1)
            return true;
        else
            return false;
    }
};



int main()
{
    Stack st(5);      //statically creating an object

    st.push(22);
    st.push(43);
    st.push(44);
    st.push(45);
    st.push(46);
    st.push(47);

    cout<<"Top element "<<st.peek()<<endl;

    st.pop();
    cout<<"Top element "<<st.peek()<<endl;

    st.pop();
    cout<<"Top element "<<st.peek()<<endl;
    st.pop();
    cout<<"Top element "<<st.peek()<<endl;

    if(st.isEmpty())
    cout<<"Stack is empty\n";
    else
    cout<<"Stack is not empty\n";

    return 0;
}