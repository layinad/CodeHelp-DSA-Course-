#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> maxi;       //maxheap

    priority_queue<int,vector<int>,greater<int>> mini;   //minheap

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    int n=maxi.size();
    for(int i=0;i<n;i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }

    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);

    int m=mini.size();
    for(int i=0;i<m;i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }

    cout<<mini.empty()<<endl;
}