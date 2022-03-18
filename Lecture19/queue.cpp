#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string> q;
    q.push("Daniyal");
    q.push("Khan");
    q.push("Zaman");

    cout<<"FirstElement "<<q.front()<<endl;
    q.pop();
    cout<<"First Element "<<q.front()<<endl;

    cout<<"size after pop "<<q.size()<<endl;
}