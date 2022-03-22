#include<bits/stdc++.h>
using namespace std;


void colWiseSum(int a[][3],int n,int m)
{
    for(int i=0;i<m;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        sum+=a[j][i];
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

    colWiseSum(a,3,3);
    return 0;
}