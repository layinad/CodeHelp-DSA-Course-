#include<bits/stdc++.h>
using namespace std;


vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    
    //prepare adjList
    unordered_map<int,list<int>>adjList;
    for(int i=0;i<e;i++)
    {
        int u=edges[i][0];
        int v=edges[i][1];
        
        adjList[u].push_back(v);
    }
        
    
    //Using Kahns Algorithm
    
    //Step1 : create the indegree 
    vector<int>indegree(v);
    for(auto i : adjList)
    {
        for(auto j:i.second)
            indegree[j]++;
    }
    
    //Step2 : push all the nodes with 0 indegree in the queue
    queue<int>q;
    for(int i=0;i<v;i++)
    {
        if(indegree[i]==0)
            q.push(i);
    }
    
    //Step3 : bfs
    vector<int>ans;
    while(!q.empty())
    {
        int frontnode=q.front();
        q.pop();
        
        ans.push_back(frontnode);
        
        for(auto j : adjList[frontnode])
        {
            indegree[j]--;
            if(indegree[j]==0)
                q.push(j);
        }
    }
        
    
    return ans;
}









