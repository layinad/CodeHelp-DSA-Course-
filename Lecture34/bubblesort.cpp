#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[],int n)
{

    if(n==0||n==1)    //base case
    return ;


    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        swap(a[i],a[i+1]);
    }

    bubbleSort(a,n-1);    //Recursive call

}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    bubbleSort(a,n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}