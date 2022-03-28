#include<bits/stdc++.h>
using namespace std;


int main()
{
    int row;
    cout<<"Enter the number of row "<<endl;
    cin>>row;

    int col[row];
    for(int i=0;i<row;i++)
        cin>>col[i];

    //creating a 2d array using heap memory or dynamic memory location
    int** arr= new int*[row];
    for(int i=0;i<row;i++)
        arr[i]=new int[col[i]];

    //taking input of the dynamically created 2d array
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col[i];j++)
        {
            cin>>arr[i][j];
        }
    }

    //printing output of the dynamically created 2d array
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col[i];j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // releasing the arrays created for each rows
    for(int i=0;i<col[i];i++)
    delete [] arr[col[i]];

    delete []arr;
}