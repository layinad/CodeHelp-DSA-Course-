#include<bits/stdc++.h>
using namespace std;


int celebrity(vector<vector<int> >& M, int n) 
    {
        
        //Step1 : push the elements in stack
        stack<int>ans;
        for(int i=0;i<n;i++)
        ans.push(i);
        
        while(ans.size()>1)
        {
            //pop 2 elements
            int element1=ans.top();
            ans.pop();
            int element2=ans.top();
            ans.pop();
            
            //Check if element1 know element2 or vice versa
            if(M[element1][element2]==1)
            ans.push(element2);
            else if(M[element2][element1]==1)
            ans.push(element1);
        }
        
        
        //now the topmost stack element is a potential candidate
        //checking for the row
        bool allZero=true;
        for(int i=0;i<n;i++)
        {
            if(M[ans.top()][i]==1)
            {
                allZero=false;
                break;
            }
        }
        
        //checking for column
        bool allOnes=true;
        for(int i=0;i<n;i++)
        {
            if(i!=ans.top() && M[i][ans.top()]==0)
            {
               allOnes=false;
               break;
            }
        }
        
        //if the candidate element satisfies both the above condition it is a candidate
        if(allZero && allOnes)
        return ans.top();
        else
        return -1;
    }


int main()
{
    int n;
    cin>>n;
    vector<vector<int>>ans;
    for(int i=0;i<n;i++)
    {
       vector<int>temp;
       for(int j=0;j<n;j++)
       {
           int element;
           cin>>element;
           temp.push_back(element);
       }
       ans.push_back(temp);
    }

    int celebrityIndex=-1;
    celebrityIndex=celebrity(ans,n);
    if(celebrityIndex==-1)
    cout<<"No celebrity present "<<celebrityIndex;
    else
    cout<<"The celebrity is index "<<celebrityIndex<<endl;
    return 0;
}