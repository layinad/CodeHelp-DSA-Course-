#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int> adj[],map<int,bool>&visited,stack<int>&s,int node)
    {
        visited[node]=true;
        
        for(auto j :adj[node])
        {
            if(!visited[j])
                dfs(adj,visited,s,j);
        }
        
        s.push(node);
    }

vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    stack<int>s;
	    vector<int>ans;
	    
	    map<int,bool>visited;
    
        for(int i=0;i<V;i++)
        {
            if(!visited[i])
            {
                dfs(adj,visited,s,i);
            }
        }
    
        while(!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        }
        
        return ans;
	}