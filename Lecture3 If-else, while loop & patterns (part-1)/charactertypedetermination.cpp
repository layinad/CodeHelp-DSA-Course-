#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if(ch>='A' && ch<='Z')
    cout<<"uppercase\n";
    else if(ch>='a' && ch<='z')
    cout<<"lowercase\n";
    else if(ch>='0' && ch<='9')
    cout<<"numericals\n";
    return 0;
}