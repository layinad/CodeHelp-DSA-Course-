#include<bits/stdc++.h>
using namespace std;

int adj[100][100];

void addEdge(int u,int v,bool isDirected)
{
    adj[u][v]=1;

    if(isDirected==0)
    adj[v][u]=1;
}


void printGraph(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main()
{
    int n;
    cout<<"Enter the number of nodes or vertices\n";
    cin>>n;

    int m;
    cout<<"Enter the number of edges\n";
    cin>>m;

    //Declare a 2dMatrix of size n*n
    adj[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        adj[i][j]=0;
    }

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        addEdge(u,v,0);
    }

    printGraph(n);
}