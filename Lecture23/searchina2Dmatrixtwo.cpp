#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(int a[][5],int i,int j,int target)
{
        
        int rowStart=0;
        int colStart=0;
        int rowEnd=i-1;
        int colEnd=5-1;
        
        int i1=rowStart;
        int j1=colEnd;
        while(i1<=rowEnd && j1>=colStart)
        {
            if(a[i1][j1]==target)
                return true;
            else if(a[i1][j1]>target)
                j1--;
            else if(a[i1][j1]<target)
                i1++;
        }
        
        return false;

}


int main()
{
    int a[5][5]={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};

    int target;
    cin>>target;

    cout<<searchMatrix(a,5,5,target)<<endl;
    return 0;
}