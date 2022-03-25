#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int arr[10]={23,122,41,67};
    // cout<<"address of first memory block is "<<arr<<endl;
    // cout<<arr[0]<<endl;
    // cout<<"address of first memory block is "<<&arr[0]<<endl;
    // cout<<*arr<<endl;
    // cout<<*arr+1<<endl;
    // cout<<*(arr+1)<<endl;
    // cout<<(*arr)+1<<endl;
    // cout<<arr[2]<<endl;
    // cout<<*(arr+2)<<endl;

    // int i=3;
    // cout<<i[arr]<<endl;
    // cout<<*(i+arr)<<endl;

    // int temp[10]={1,2};
    // cout<<"size of array is "<<sizeof(temp)<<endl;
    // cout<<sizeof(*temp)<<endl;
    // cout<<sizeof(&temp)<<endl;

    // int *p=&temp[0];
    // cout<<"size of pointer is "<<sizeof(p)<<endl;
    // cout<<sizeof(*p)<<endl;
    // cout<<sizeof(&p)<<endl;

    // int a[20]={1,2,3,5};
    // cout<<&a[0]<<endl;
    // cout<<&a<<endl;
    // cout<<a<<endl;

    // int *p=&a[0];
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<&p<<endl;

    int arr[10];
    // arr=arr+1;   ERROR

    int *p=&arr[0];
    cout<<p<<endl;
    p=p+1;
    cout<<p<<endl;
}