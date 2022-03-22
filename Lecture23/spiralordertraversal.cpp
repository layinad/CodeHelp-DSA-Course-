#include<bits/stdc++.h>
using namespace std;


void spiralOrderTraversal(int a[][4],int n,int m)
{
    int count=0;
    int row_start=0,row_end=n-1,col_start=0,col_end=m-1;
    while(row_start<=row_end && col_start<=col_end)
    {
        for(int i=col_start;i<=col_end;i++)
        {
            cout<<a[row_start][i]<<" ";
            count++;
        }
        row_start++;

        if(count==n*m)
        break;

        for(int i=row_start;i<=row_end;i++)
        {
            cout<<a[i][col_end]<<" ";
            count++;
        }
        col_end--;

        if(count==n*m)
        break;

        for(int i=col_end;i>=col_start;i--)
        {
            cout<<a[row_end][i]<<" ";
            count++;
        }
        row_end--;

        if(count==n*m)
        break;

        for(int i=row_end;i>=row_start;i--)
        {
            cout<<a[i][col_start]<<" ";
            count++;
        }
        col_start++;

        if(count==n*m)
        break;

    }
}

int main()
{
    int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    spiralOrderTraversal(a,3,4);
    return 0;
}