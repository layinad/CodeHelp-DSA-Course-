#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string>s;
    s.push("Daniyal");
    s.push("Khan");
    s.push("Zaman");
    cout<<"Element at top "<<s.top()<<endl;
    s.pop();
    cout<<"Element at top "<<s.top()<<endl;
    cout<<"size of stack "<<s.size()<<endl;
    cout<<"Empty or not"<<s.empty()<<endl;
}