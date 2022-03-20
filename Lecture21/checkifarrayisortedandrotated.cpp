#include<bits/stdc++.h>
using namespace std;

bool check(int a[],int n)
{
    int count=0;
    for(int i=1;i<n;i++)
    {
        if(a[i-1]>a[i])
        count++;
    }

    if(a[n-1]>a[0])
    count++;

    return count<=1;                //<= because it is possible that all the elements might be the same
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<check(a,n)<<endl;
    return 0;
}