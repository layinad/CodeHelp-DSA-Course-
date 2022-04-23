#include<bits/stdc++.h>
using namespace std;

bool isValidParenthesis(string expression)
{
    stack<char>ans;
    int i=0;
    for(int i=0;i<expression.size();i++)
    {
        if(expression[i]==')')
        {
            if(!ans.empty() && ans.top()=='(')
                ans.pop();
            else
                return 0;
        }
        else if(expression[i]==']')
        {
            if(!ans.empty() && ans.top()=='[')
                ans.pop();
            else
                return 0;
        }
        else if(expression[i]=='}')
        {
            if(!ans.empty() && ans.top()=='{')
                ans.pop();
            else
                return 0;
        }
        else
            ans.push(expression[i]);
    }
    
    if(!ans.empty())
        return 0;
    else
        return 1;
}

int main()
{
    string expression1="[()]{}{[()()]()}";
    string expression2="[(])";

    if(isValidParenthesis(expression1))
    cout<<"Balanced\n";
    else
    cout<<"Not Balanaced\n";

    cout<<endl; 

    if(isValidParenthesis(expression2))
    cout<<"Balanced\n";
    else
    cout<<"Not Balanaced\n";
}