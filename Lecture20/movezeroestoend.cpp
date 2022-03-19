#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int nonZero=0;
        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]!=0)
            {
                swap(nums[j],nums[nonZero]);
                nonZero++;
            }
        }
    }
};


int main()
{
    Solution s;
    vector<int>ans ={0,1,0,3,12};
    s.moveZeroes(ans);

    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
        cout<<endl;
    return 0;
}