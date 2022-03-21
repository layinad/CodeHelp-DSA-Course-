#include<bits/stdc++.h>
using namespace std;

string removeOccurrences(string s,string part)
{
    while(s.length()!=0 && s.find(part)<s.length())
    s.erase(s.find(part),part.length());
    return s;
}

int main()
{
    string s;
    cin>>s;
    string part;
    cout<<"Enter the substring you want to remove \n";
    cin>>part;
    string ans=removeOccurrences(s,part);
    cout<<ans<<endl;
}