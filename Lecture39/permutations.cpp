#include<bits/stdc++.h>
using namespace std;


 void solve(vector<int> nums,int index,vector<vector<int> >& ans)
    {

    if(index>=nums.size())   //base case
    {
        ans.push_back(nums);
        return ;
    }
    
    for(int j=index;j<nums.size();j++)
    {
        swap(nums[index],nums[j]);
        solve(nums,index+1,ans);
        //backtrack
        swap(nums[index],nums[j]);
    } 
    
}
    
    

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index=0;
        solve(nums,index,ans);
        return ans;
    }




int main()
{
    vector<int> nums={1,2,3};

    vector<vector<int>>ans;
    ans=permute(nums);

    for(int i=0;i<ans.size();i++)
    {
       vector<int>temp;
       temp=ans[i];
       for(int i=0;i<temp.size();i++)
       {
           cout<<temp[i]<<",";
       }
       cout<<endl;
    }
    return 0;
}