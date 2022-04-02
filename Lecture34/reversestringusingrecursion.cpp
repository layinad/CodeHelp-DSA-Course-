#include<bits/stdc++.h>
using namespace std;

void reverseString(int i,int j,string& s)
{

    if(i>j)  //base case
    return ;

    swap(s[i],s[j]);

    i++;
    j--;

    reverseString(i,j,s);

}

int main()
{
    string s;
    cin>>s;
    reverseString(0,s.size()-1,s);
    cout<<s<<endl;
    return 0;
}