#include<bits/stdc++.h>
using namespace std;

int countDistinctWayToClimbStair(int n)
{
    if(n<0)
        return 0;
 	if(n==0)
        return 1;
    
    int ans1=countDistinctWayToClimbStair(n-1);
    int ans2=countDistinctWayToClimbStair(n-2);
    
    return ans1+ans2;

}


int main()
{
    int n;
    cin>>n;
    int ans=countDistinctWayToClimbStair(n);
    cout<<ans<<endl;
    return 0;

}