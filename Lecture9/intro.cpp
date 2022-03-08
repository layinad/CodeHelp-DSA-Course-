#include<bits/stdc++.h>
using namespace std;

void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
    int number[15];
    cout<<number[0]<<endl;
    cout<<"Everything is fine\n";

    int second[3]={5,7,11};
    cout<<second[2]<<endl;

    int third[15]={2,7};
    print(third,15);

    int fourth[10]={0};
    print(fourth,10);

    int fourthsize=sizeof(fourth)/sizeof(int);
    cout<<fourthsize<<endl;

    char ch[5]={'a','b','c','d','e'};
    for(int i=0;i<5;i++)
    cout<<ch[i]<<" ";

    return 0;
}