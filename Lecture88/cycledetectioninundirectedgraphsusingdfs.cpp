#include<bits/stdc++.h>
using namespace std;

bool dfs(vector<int> adj[],int parent, map<int,bool>&visited,int i)
    {
        visited[i]=true;
        
        for(auto j : adj[i])
        {
            if(!visited[j])
            {
                bool ans =dfs(adj,i,visited,j);
                if(ans==1)
                return 1;
            }
            else if(j!=parent)
            return 1;
        }
        
        return 0;
    }








bool isCycle(int V, vector<int> adj[]) {
        
        map<int,bool>visited;
        
        for(int i=0;i<V;i++)
        {
            if(!visited[i])
            {
                bool ans = dfs(adj,-1,visited,i);
                if(ans==1)
                return true;
            }
        }
        
        return false;
    }
