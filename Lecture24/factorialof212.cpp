#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin>>n;
    int res=1;
    int m=1e9+7;
    while(n>0)
    {
        res=(1LL*res*(n)%m)%m;
        n--;
    }
    cout<<res<<endl;
    return 0;
}