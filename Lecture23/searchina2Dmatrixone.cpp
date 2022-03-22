#include<bits/stdc++.h>
using namespace std;


bool searchMatrix(int a[][4],int i,int j,int target)
{
        int row=i;
        int col=j;
        
        int start=0;
        int end=row*col-1;
        
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            int element=a[mid/col][mid%col];
            if(element==target)
                return true;
            else if(element>target)
                end=mid-1;
            else if(element<target)
                start=mid+1;
        }
        return false;

}


int main()
{
    int a[3][4]={{1,3,5,7},{10,11,16,20},{23,30,34,60}};

    int target;
    cin>>target;

    cout<<searchMatrix(a,3,4,target)<<endl;
    return 0;
}