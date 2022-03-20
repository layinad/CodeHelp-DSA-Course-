#include<bits/stdc++.h>
using namespace std;

void rotateArray(int a[],int n,int k)
{

    int temp[n];
    for(int i=0;i<n;i++)
    {
        temp[(i+k)%n]=a[i];
    }

    for(int i=0;i<n;i++)
    a[i]=temp[i];

}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter the number of times you want to rotate the array ";
    int k;
    cin>>k;
    rotateArray(a,n,k);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}