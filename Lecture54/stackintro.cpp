#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;        //declaring a stack

    //push operation
    s.push(2);
    s.push(3);

    //pop operation
    s.pop();

    cout<<"printing top element "<<s.top()<<endl;

    if(s.empty())
    cout<<"stack is empty\n";
    else
    cout<<"stack is not empty\n";

    cout<<"size of stack is "<<s.size()<<endl;

    return 0;
}