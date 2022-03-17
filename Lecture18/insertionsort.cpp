#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int i=1;
    while(i<n)
    {
        int temp=a[i];
        int j;
        for(j=i-1;j>=0;j--)
        {
            if(a[j]>temp)
            a[j+1]=a[j];
            else
            break;
        }
        a[j+1]=temp;
        i++;
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}