#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int n,int start=0)           //Using default arguments as start=0
{
    for(int i=start;i<n;i++)
    cout<<arr[i]<<endl;

}
int main()
{
    int arr[5]={1,4,7,8,9};
    print(arr,5,2);

    return 0;
}