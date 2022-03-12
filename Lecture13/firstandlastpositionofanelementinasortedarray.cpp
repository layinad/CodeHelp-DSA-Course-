#include<bits/stdc++.h>
using namespace std;

int first(int arr[],int n,int k)
{
    int s=0;
    int e=n-1;
    int mid;
    int ans=-1;
    while(s<=e)
    {
        mid=s+(e-s)/2;
        if(arr[mid]==k)
        {
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>k)
        e=mid-1;
        else if(arr[mid]<k)
        s=mid+1;
    }
    return ans;
}

int last(int arr[],int n,int k)
{
    int s=0;
    int e=n-1;
    int mid;
    int ans=-1;
    while(s<=e)
    {
        mid=s+(e-s)/2;
        if(arr[mid]==k)
        {
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>k)
        e=mid-1;
        else if(arr[mid]<k)
        s=mid+1;
    }
    return ans;
}

int main()
{
    int even[11]={1,2,3,3,3,3,3,3,3,3,5};
    cout<<"First Occurence of 3 is "<<first(even,11,3)<<endl;
    cout<<"Last Occurence of 3 is "<<last(even,11,3)<<endl;
    return 0;
}