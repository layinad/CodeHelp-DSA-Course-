#include<bits/stdc++.h>
using namespace std;

bool bfs(vector<int> adj[],map<int,int>&parent, map<int,bool>&visited,int i)
    {
        visited[i]=true;
        parent[i]=-1;
        queue<int>q;
        q.push(i);
        
        while(!q.empty())
        {
            int frontNode=q.front();
            q.pop();
            
            for(auto i : adj[frontNode])
            {
                if(visited[i] && i!=parent[frontNode])
                return 1;
                else if(!visited[i])
                {
                    q.push(i);
                    visited[i]=true;
                    parent[i]=frontNode;
                }
            }
        }
        
        return 0;
    }



bool isCycle(int V, vector<int> adj[]) {
        
        map<int,bool>visited;
        
        map<int,int>parent;
        
        for(int i=0;i<V;i++)
        {
            if(!visited[i])
            {
                bool ans = bfs(adj,parent,visited,i);
                if(ans==1)
                return true;
            }
        }
        
        return false;
    }