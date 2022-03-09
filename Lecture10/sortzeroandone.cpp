#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int zp=0;
    int op=n-1;
    while(zp<op)
    {
        if(a[zp]==0)
        zp++;
        else if(a[zp]==1)
        {
            if(a[op]==1)
            {
            while(a[op]==1)
            {
                op--;
                if(op==zp)
                break;
            }
            }
            swap(a[zp],a[op]);
            zp++;
            op--;
        }
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}