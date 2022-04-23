#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    stack<char>st;
    for(int i=0;i<s.size();i++)
    {
        st.push(s[i]);
    }

    int i=0;
    while(!st.empty())
    {
        s[i++]=st.top();
        st.pop();
    }

    cout<<s<<endl;
    cout<<endl;
    return 0;

}