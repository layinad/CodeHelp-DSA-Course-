#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x=1;
    int ans=0;
    while(n!=0)
    {
        int bit=n & 1;
        ans=(bit*x)+ans;
        n=n>>1;
        x*=10;
    }
    cout<<ans<<endl;
}