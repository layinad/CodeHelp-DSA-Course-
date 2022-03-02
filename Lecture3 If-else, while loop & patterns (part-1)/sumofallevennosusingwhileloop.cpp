#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0;
    int i=2;
    int n;
    cin>>n;
    while(i<=n)
    {
        sum+=i;
        i+=2;
    }
    cout<<sum<<endl;
    return 0;
}