#include<bits/stdc++.h>
using namespace std;

void printWave(int arr[][4], int nRows, int mCols)
{
    for(int col=0;col<mCols;col++)
    {
		if(col&1)
        {
          for(int row=nRows-1;row>=0;row--)
              cout<<arr[row][col]<<" ";
        }
        else
        {
            for(int row=0;row<nRows;row++)
              cout<<arr[row][col]<<" ";
        }
    }
}

int main()
{
    int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    printWave(a,3,4);
    return 0;
}