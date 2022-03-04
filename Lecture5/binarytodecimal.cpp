#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    int x=1;
    while(n!=0)
    {
        int digit=n%10;;
        if(digit==1)
        {
            ans=ans+x;
        }
        n=n/10;
        x*=2;
    }
    cout<<ans<<endl;
}