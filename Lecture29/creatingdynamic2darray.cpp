#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cout<<"Enter the  number of rows "<<endl;
    cin>>row;

    int col;
    cout<<"Enter the number of columns "<<endl;
    cin>>col;

    //Creating a 2D array using heap memory or dynamic memory allocation
    int** arr=new int*[row];
    for(int i=0;i<row;i++)
    arr[i]=new int[col];

    //taking input of the dynamically created 2d array
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }

    //printing output of the dynamically created 2d array
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //releasing the memory of the 2d array
    for(int i=0;i<row;i++)
    delete [] arr[i];

    delete []arr;
}