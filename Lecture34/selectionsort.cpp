#include<bits/stdc++.h>
using namespace std;


void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    return ;
}
void selectionSort(int arr[],int n)
{
    if(n==0||n==1)   //base case
    return ;

    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[0])
        swap(arr[0],arr[i]);
    }
    print(arr,n);

    selectionSort(arr+1,n-1);  //Recurrence relation

}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    selectionSort(a,n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}