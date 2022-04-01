#include<bits/stdc++.h>
using namespace std;

bool isSorted(int a[],int n)
{
    if(n==0||n==1) //base case
    return 1;

    if(a[0]>a[1])
    return false;
    else
    {
        bool remainingPart=isSorted(a+1,n-1);
        return remainingPart;
    }
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    if(isSorted(a,n))
    cout<<"Array is sorted\n";
    else
    cout<<"Array is not sorted\n";
}