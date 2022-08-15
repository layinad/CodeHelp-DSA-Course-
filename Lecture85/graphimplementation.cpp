#include<bits/stdc++.h>
using namespace std;

class graph{

    public :

    map< int,list<int> > adj;

    void addEdge(int u,int v,bool direction)
    {
        //direction = 0 ->undirected
        //direction = 1 ->directed

        adj[u].push_back(v);

        if(direction == 0)
        adj[v].push_back(u);
    }

    void printAdjList()
    {
        for(auto i: adj)
        {
            cout<<i.first<<"->";
            for(auto j: i.second)
            {
                cout<<j<<",";
            }
            cout<<endl;
        }
    }
};



int main()
{
    int n;
    cout<<"Enter the number of nodes\n";
    cin>>n;

    int m;
    cout<<"Enter the number of edges\n";
    cin>>m;

    graph g;

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;

        //creating an undirected graph
        g.addEdge(u,v,0);
    }


    //printing graph
    g.printAdjList();
    
    return 0;
}