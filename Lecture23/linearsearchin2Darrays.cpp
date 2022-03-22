#include<bits/stdc++.h>
using namespace std;

bool isPresent(int a[][4],int key,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==key)
            return 1;
        }
    }
    return 0;
}

int main()
{
    int a[3][4];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        cin>>a[i][j];
    }

    cout<<"Enter the element you wanna search\n";
    int key;
    cin>>key;

    if(isPresent(a,key,3,4))
    cout<<"Element is present\n";
    else
    cout<<"Element not present\n";

}