#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=2;
    int flag=0;
    while(i<n)
    {
        if(n%i==0)
        {
            cout<<"Not Prime\n";
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0)
    cout<<"Prime\n";
    return 0;
}