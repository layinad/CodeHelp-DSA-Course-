#include<bits/stdc++.h>
using namespace std;


void dfs(vector<int>adj[], map<int,bool> &visited, vector<int> &ans, int node)
  {
      ans.push_back(node);
      visited[node]=1;
      
      for(auto j: adj[node])
      {
          if(!visited[j])
          dfs(adj,visited,ans,j);
      }
  }



vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        
        vector<int>ans;
        
        map<int,bool>visited;
        
        int node=0;
        if(!visited[0])
        dfs(adj,visited,ans,node);
        
        return ans;
    }