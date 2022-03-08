#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int i=0;
    while(i<n-1)
    {
        swap(a[i],a[i+1]);
        i+=2;
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}