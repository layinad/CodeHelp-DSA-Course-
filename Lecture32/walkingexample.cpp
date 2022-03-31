#include<bits/stdc++.h>
using namespace std;

void reachHome(int src,int dest)
{
    
    cout<<"Source "<<src<<" "<<"Destination "<<dest<<endl;


    //base case
    if(src==dest)
    {
        cout<<"Reached Home\n";
        return;
    }

    //recursive/recurrence relation
    reachHome(src+1,dest);
}

int main()
{
    int dest=10;
    int src=1;

    reachHome(src,dest);

    return 0;
}