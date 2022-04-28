#include<bits/stdc++.h>
using namespace std;


int main()
{

    //declare a queue
    queue<int>q;

    q.push(11);

    //checking for front of the queue
    cout<<"Front  of the queue is "<<q.front()<<endl;
    q.push(15);
    q.push(13);

    //checking for back of the queue
    cout<<"Back of the queue is "<<q.back()<<endl;

    //size of queue
    cout<<"Size of queue is "<<q.size()<<endl;

    q.pop();
    q.pop();
    q.pop();

    //size of queue
    cout<<"Size of queue is "<<q.size()<<endl;

    //check if queue is empty
    if(q.empty())
    cout<<"Queue is empty\n";
    else
    cout<<"Queue is not empty\n";


}