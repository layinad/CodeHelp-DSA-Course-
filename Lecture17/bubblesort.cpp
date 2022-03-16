#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int count=1;
    bool swapped=false;
    while(count<n)
    {
        for(int i=0;i<n-count;i++)
        {
            if(a[i]>a[i+1])
            {
                swapped=true;
                swap(a[i],a[i+1]);
            }
        }
        if(swapped==false)
        break;
        count++;
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}