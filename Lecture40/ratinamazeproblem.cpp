#include<bits/stdc++.h>
using namespace std;

    
    void printPath(vector<vector<int>> &m, int n,string output,int row,int col,vector<string>& ans)
    {
        if(m[row][col]==0)
        return;
        
        
        if(row==n-1 && col==n-1)     // base case
        {
            ans.push_back(output);
            return;
        }
        
        
        
            m[row][col]=0;         //cell visited

            //up
            if(row-1>=0)
            {
            output.push_back('U');
            printPath(m,n,output,row-1,col,ans);
            output.pop_back();
            }
            
            //left
            if(col-1>=0)
            {
            output.push_back('L');
            printPath(m,n,output,row,col-1,ans);
            output.pop_back();
            }
            
            //right
            if(col+1<n)
            {
            output.push_back('R');
             printPath(m,n,output,row,col+1,ans);
             output.pop_back();
            }
        
            //down
            if(row+1<n)
            {
            output.push_back('D');
            printPath(m,n,output,row+1,col,ans);
            output.pop_back();
            }
            
            m[row][col]=1;         //backtracking (unvisit the visited cell)
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string>ans;
        int row=0;
        int col=0;
        string output="";
        printPath(m,n,output,row,col,ans);
        return ans;
    }


int main()
{
    int n=4;
    vector<vector<int>>m={{1,0,0,0},
                          {1,1,0,1}, 
                          {1,1,0,0},
                          {0,1,1,1}};
    vector<string> ans;
    ans=findPath(m,n);
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}


