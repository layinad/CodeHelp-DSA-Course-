#include<bits/stdc++.h>
using namespace std;


void rotate(int a[][3],int i,int j)
{
        
        int rowStart=0;
        int colStart=0;
        int rowEnd=3-1;
        int colEnd=3-1;
        
        
        while(rowStart<rowEnd && colStart<colEnd)
        {
            int i=colEnd;
            int j=rowEnd;
            while(i>colStart && j>rowStart)
            {
                swap(a[rowStart][i--],a[j--][colStart]);
            }
            rowStart++;
            colStart++;
        }
        
        for(int itr = 0; itr < 3; itr++){
            int start=0;
            int end=2;
            while(start<end)
            swap(a[itr][start++],a[itr][end--]);
        }

}

int main()
{
    int a[3][3]={{1,2,3},{4,5,6,},{7,8,9}};
    rotate(a,3,3);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
}