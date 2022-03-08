#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int maximum=INT_MIN;
    int minimum=INT_MAX;
    for(int i=0;i<n;i++)
    {
        maximum=max(maximum,a[i]);
        minimum=min(minimum,a[i]);
    }
    cout<<maximum<<" "<<minimum<<endl;
    return 0;
}