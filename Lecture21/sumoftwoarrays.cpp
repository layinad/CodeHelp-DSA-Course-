#include<bits/stdc++.h>
using namespace std;

vector<int>sumOfArrays(int a[],int n,int b[],int m)
{
    int i=n-1;
    int j=m-1;
    vector<int>ans;
    int carry=0;
    while(i>=0 && j>=0)
    {
        int sum=a[i]+b[j]+carry;
        if(sum>9)
        {
            carry=1;
            int rem=sum%10;
            ans.push_back(rem);
        }
        else
        {
            carry=0;
            ans.push_back(sum);
        }
        i--;
        j--;
    }
    while(i>=0)
    {
        int sum=a[i]+carry;
        if(sum>9)
        {
            carry=1;
            int rem=sum%10;
            ans.push_back(rem);
        }
        else
        {
            carry=0;
            ans.push_back(sum);
        }
        i--;
    }
    while(j>=0)
    {
        int sum=b[j]+carry;
        if(sum>9)
        {
            carry=1;
            int rem=sum%10;
            ans.push_back(rem);
        }
        else
        {
            carry=0;
            ans.push_back(sum);
        }
        j--;
    }
    if(carry!=0)
    ans.push_back(carry);

    reverse(ans.begin(),ans.end());
    return ans;
}


int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int b[m];
    for(int j=0;j<m;j++)
    cin>>b[j];
    vector<int>ans=sumOfArrays(a,n,b,m);
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    cout<<endl;
    return 0;

}