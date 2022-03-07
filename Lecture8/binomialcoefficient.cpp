#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    f=f*i;
    return f;
}





int binomial(int n,int r)
{
    int t1=factorial(n);
    int t2=factorial(r)*factorial(n-r);
    int ans=t1/t2;
    return ans;
}




int main()
{
    int n,r;
    cin>>n>>r;
    cout<<binomial(n,r)<<endl;
    return 0;
}