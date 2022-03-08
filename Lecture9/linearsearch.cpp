#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10]={5,7,-2,10,22,-2,0,5,22,1};
    int key;
    cin>>key;
    int i;
    for(i=0;i<10;i++)
    {
        if(arr[i]==key)
        {
            cout<<"found\n";
            break;
        }
    }
    if(i==10)
    cout<<"Not found\n";
    return 0;
}