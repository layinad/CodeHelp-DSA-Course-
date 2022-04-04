#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int s,int e)
{

    int pivot=a[s];
    int count=0;
    for(int i=s+1;i<=e;i++)
    {
        if(a[i]<=pivot)
        count++;
    }

    int correctPosition=s+count;
    swap(a[s],a[correctPosition]);

    int i=s;
    int j=e;

    while(i<correctPosition && j>correctPosition)
    {
        while(a[i]<a[correctPosition])
        i++;

        while(a[j]>a[correctPosition])
        j--;

        if(i < correctPosition && j > correctPosition)
            swap(a[i++], a[j--]);

    }

    return correctPosition;
}


void quickSort(int a[],int s,int e)
{
    if(s>=e)    //base case
    return ;

    //partition
    int p=partition(a,s,e);

    //for left part
    quickSort(a,s,p-1);      //recurrence relation

    //for right part
    quickSort(a,p+1,e);      //recurrence relation

}

int main()
{
    int a[10]={2,4,1,6,9,9,9,9,9,9};
    int n=10;
    quickSort(a,0,n-1);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}