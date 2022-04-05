#include<bits/stdc++.h>
using namespace std;


void solve(string str,string s,int index,vector<string>& ans)
{
	if(index>=str.size())         //base case
    {
        if(s.length()>0)
        ans.push_back(s);
        return ;
    }

	//exclude
   	solve(str,s,index+1,ans);
    
    //exclude
    s.push_back(str[index]);
    solve(str,s,index+1,ans);
    
}

vector<string> subsequences(string str){
	
	vector<string>ans;
    string s="";
    int index=0;
    solve(str,s,index,ans);
//    	ans.erase(ans.begin());
    return ans;
}



int main()
{
    string s;
    cin>>s;
    vector<string>ans;
    ans=subsequences(s);
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}