#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0;
    int n,i=1;
    cin>>n;
    while(i<=n)
    {
        sum+=i;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}