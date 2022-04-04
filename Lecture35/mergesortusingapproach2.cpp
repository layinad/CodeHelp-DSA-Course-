#include<bits/stdc++.h>
using namespace std;


void merge(int a[],int s,int e)
{

    int mid=s+(e-s)/2;

    int len1=mid-s+1;
    int len2=e-mid;


    int *first=new int[len1];       //creating a dynamic array for left part
    int *second=new int[len2];      // creating a dynamic array for right part


    int mainArrayIndex=s;
    for(int i=0;i<len1;i++)
    first[i]=a[mainArrayIndex++];

    mainArrayIndex=mid+1;
    for(int i=0;i<len2;i++)
    second[i]=a[mainArrayIndex++];


    //merge the two arrays
    int i=0;
    int j=0;
    int k=s;

    while(i<len1 && j<len2)
    {
        if(first[i]<second[j])
        a[k++]=first[i++];
        else
        a[k++]=second[j++];
    }

    while(i<len1)
    {
        a[k++]=first[i++];
    }

    while(j<len2)
    {
        a[k++]=second[j++];
    }

    delete []first;
    delete []second;


}


void mergeSort(int a[],int s,int e)
{
    if(s>=e)  //base case
    return ;

    int mid=s+(e-s)/2;


    //for left part of the array
    mergeSort(a,s,mid);

    //for right part of the aarray
    mergeSort(a,mid+1,e);

    //merge
    merge(a,s,e);

}










int main()
{
    int arr[7]={38,27,43,3,9,82,10};
    int n=7;

    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}