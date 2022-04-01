#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int a[],int s,int e,int key)
{
    if(s>e)  //base case
    return 0;


    int mid=s+(e-s)/2;

    if(a[mid]==key) //base case
    return true;

    if(a[mid]<key)
    {
        bool ans=binarySearch(a,mid+1,e,key);
        return ans;
    }
    else if(a[mid]>key)
    {
        bool ans=binarySearch(a,s,mid-1,key);
        return ans;
    }
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int key;
    cin>>key;
    if(binarySearch(a,0,n-1,key))
    cout<<"Element found\n";
    else
    cout<<"Element not found\n";
}