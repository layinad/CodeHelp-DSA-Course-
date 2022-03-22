#include<bits/stdc++.h>
using namespace std;


void rowWiseSum(int a[][3],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<m;j++)
        sum+=a[i][j];
        cout<<sum<<endl;
    }
}


int main()
{
    int a[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        cin>>a[i][j];
    }

    rowWiseSum(a,3,3);
    return 0;
}