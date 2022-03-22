#include<bits/stdc++.h>
using namespace std;


void rowWiseSum(int a[][3],int n,int m)
{
    int maximum=INT_MIN;
    int maxIndex=-1;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<m;j++)
        sum+=a[i][j];
        if(sum>maximum)
        {
            maximum=sum;
            maxIndex=i;
        }
    }
    cout<<"The maximum sum is "<<maximum<<" The maximum index is "<<maxIndex<<endl;
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