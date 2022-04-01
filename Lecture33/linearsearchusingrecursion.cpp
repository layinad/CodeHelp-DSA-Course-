#include<bits/stdc++.h>
using namespace std;

bool found(int a[],int n,int key)
{
    if(n==0)
    return 0;


    if(a[0]==key)
    return true;
    else
    {
        bool remaining=found(a+1,n-1,key);
        return remaining;
    }
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int key;
    cin>>key;
    if(found(a,n,key))
    cout<<"Key found\n";
    else
    cout<<"Key not found\n";
}