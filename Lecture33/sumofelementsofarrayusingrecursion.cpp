#include<bits/stdc++.h>
using namespace std;

int sum(int a[],int n)
{
    if(n==0)  //base case
    return 0;
    if(n==1)  //base case
    return a[0];

    int element=a[0];

    int remaining=sum(a+1,n-1);

    return element+remaining;
}



int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int ans=sum(a,n);
    cout<<ans<<endl;
    return 0;
}