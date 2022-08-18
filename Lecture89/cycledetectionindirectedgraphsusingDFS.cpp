#include<bits/stdc++.h>
using namespace std;

 bool dfs(int node,unordered_map<int,bool>&visited,unordered_map<int,bool>&dfsVisited,vector<int> adj[])
  {
      visited[node]=true;
      dfsVisited[node]=true;
      
      for(auto j :adj[node])
      {
          if(!visited[j])
          {
              bool ans= dfs(j,visited,dfsVisited,adj);
              if(ans)
              return true;
          }
          else if(dfsVisited[j])
          return true;
      }
      
      dfsVisited[node]=false;
      return false;
  }

bool isCyclic(int V, vector<int> adj[]) {
        
        unordered_map<int,bool>visited;
        unordered_map<int,bool>dfsVisited;
        
        for(int i=0;i<V;i++)
        {
            if(!visited[i])
            {
                bool ans = dfs(i,visited,dfsVisited,adj);
                if(ans)
                return true;
            }
        }
        
        return false;
    }