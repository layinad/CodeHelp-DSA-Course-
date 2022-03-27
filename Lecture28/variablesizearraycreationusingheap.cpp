#include<bits/stdc++.h>
using namespace std;

int getSum(int* arr,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    sum+=arr[i];
    return sum;
}


int main()
{
    int n;
    cin>>n;

    //creating a variable size array using heap memory
    int* arr=new int[n];

    for(int i=0;i<n;i++)
    cin>>arr[i];

    int ans=getSum(arr,n);
    cout<<"answer is "<<ans<<endl;
}