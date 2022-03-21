#include<bits/stdc++.h>
using namespace std;

string replaceSpaces(string &str){
	string s="";
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ')
        {
            s.push_back('@');
            s.push_back('4');
            s.push_back('0');
        }
        else
        s.push_back(str[i]);
    }
    return s;
}


int main()
{
    string s;
    getline(cin,s);
    string ans=replaceSpaces(s);
    for(int i=0;i<ans.length();i++)
    cout<<ans[i];
    cout<<endl;
}