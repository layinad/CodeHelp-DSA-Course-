#include<bits/stdc++.h>
using namespace std;

void prepareAdjList(vector<pair<int, int>>edges,unordered_map<int, set<int> >&adjList)
{
    if(edges.size()==0)
        return ;
    
    for(int i=0;i<edges.size();i++)
    {
        int u=edges[i].first;
        int v=edges[i].second;
        
        adjList[u].insert(v);
        adjList[v].insert(u);
    }  
}

void bfs(unordered_map<int, set<int> > &adjList, unordered_map<int,bool>&visited,vector<int>&ans,int node)
{
    queue<int>q;
    q.push(node);
    visited[node]=true;
    
    while(!q.empty())
    {
        int frontNode=q.front();
        q.pop();
        
        //store front node into ans
        ans.push_back(frontNode);
        
        //traverse all neighbours of frontNode
        for(auto i : adjList[frontNode])
        {
            if(!visited[i])
            {
                q.push(i);
                visited[i]=true;
            }
        }
    }
}

vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    unordered_map<int, set<int> > adjList;
    
    vector<int>ans;
   
    unordered_map<int,bool>visited;
    
    //Step1 : create the adjacency list
    prepareAdjList(edges,adjList);
    
    //traverse all components of a graph
    for(int i=0;i<vertex;i++)
    {
        if(!visited[i])
            bfs(adjList,visited, ans, i);
    }
    
    return ans;
}