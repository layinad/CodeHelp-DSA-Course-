#include<bits/stdc++.h>
using namespace std;

bool findRedundantBrackets(string &s)
{
    stack<char>ans;
   for(int i=0;i<s.size();i++)
   {
       if(s[i]=='(' || s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
           ans.push(s[i]);
       else
       {
           if(s[i]==')')
           {
              	if(ans.top()=='(')
               		return 1;
           		else
          		 {
               		while(!ans.empty() && ans.top()!='(')
                   	ans.pop();
               		ans.pop();
           		}
           }
       }
   }
    return 0;
}


int main()
{
    string s="(a+c*b)+(c))";
    if(findRedundantBrackets(s))
    cout<<"Redundant Brackets found\n";
    else
    cout<<"No Redundant Brackets Found\n";

    return 0;
}