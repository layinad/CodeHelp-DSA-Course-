#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=10;
    int t1=0,t2=1;
    int t3=0;
    cout<<t1<<" "<<t2<<" ";
    for(int i=1;i<=n;i++)
    {
        t3=t1+t2;
        cout<<t3<<" ";
        t1=t2;
        t2=t3;
    }
}