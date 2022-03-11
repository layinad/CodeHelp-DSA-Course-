#include<bits/stdc++.h>
using namespace std;


int binarySearch(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while(s<=e)
    {
        mid=s+(e-s)/2;
        if(arr[mid]==key)
            return mid;
        else if(key>arr[mid])
        s=mid+1;
        else if(key<arr[mid])
        e=mid-1;
    }
    return -1;
}











int main()
{
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};
    cout<<binarySearch(even,6,18)<<endl;
    cout<<binarySearch(odd,5,16)<<endl;

    return 0;
} 