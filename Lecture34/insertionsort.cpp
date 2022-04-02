#include<bits/stdc++.h>
using namespace std;

void insertionSort(int a[],int idx,int n)
{
    if(n==0||n==1)    //base case
    return ;

    if(idx==n)      //base case
    return ;
    int temp=idx;
    for(int i=idx-1;i>=0;i--)
    {
        if(temp==0||a[temp]>=a[i])
        break;
        swap(a[temp--],a[i]);
    }
    
    insertionSort(a,idx+1,n);   //recurrence relation
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    insertionSort(a,1,n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}