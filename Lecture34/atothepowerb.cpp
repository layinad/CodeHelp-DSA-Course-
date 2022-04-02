#include<bits/stdc++.h>
using namespace std;

int power(int a,int b)
{
    if(b==0)   //base case
    return 1;

    if(b==1)   //base case
    return a;

    int ans=power(a,b/2);   //Recursive call

    if(b%2==0)         
    {
        return ans*ans;
    }
    else
    {
        return a*ans*ans;
    }
}


int main()
{
    int a;
    cin>>a;
    int b;
    cin>>b;
    cout<<power(a,b)<<endl;
    return 0;
}