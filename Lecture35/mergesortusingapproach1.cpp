#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int s,int e)
{
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    int *first=new int[len1];        //creating an array for left part
    int *second=new int[len2];       //creating an array for right part

    //copy values
    int mainArrayIndex1=s;
    for(int i=0;i<len1;i++)
    first[i]=a[mainArrayIndex1++];

    //copy values
    mainArrayIndex1=mid+1;
    for(int i=0;i<len2;i++)
    second[i]=a[mainArrayIndex1++];

    //merge 2 sorted arrays
    int i=0;
    int j=0;
    int mainArrayIndex=s;
    while(i<len1 && j<len2)
    {
        if(first[i]<second[j])
            a[mainArrayIndex++]=first[i++];
        else
            a[mainArrayIndex++]=second[j++];
    }

    while(i<len1)
    {
        a[mainArrayIndex++]=first[i++];
    }

    while(j<len2)
    {
        a[mainArrayIndex++]=second[j++];
    }

    delete []first;
    delete []second;

}

void mergeSort(int a[],int s,int e)
{
    if(s>=e)   //base case
    return;

    int mid=s+(e-s)/2;

    //left part
    mergeSort(a,s,mid);

    //right part
    mergeSort(a,mid+1,e);

    //merge
    merge(a,s,e);

}

int main()
{
    int arr[5]={2,5,1,6,9};
    int n=5;

    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}