#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s,int i,int j)
{
    if(i>j)  //base case
    return true;

    if(s[i]!=s[j])
    return false;
    else{
        i++;
        j--;
        bool ans=checkPalindrome(s,i,j);
        return ans;
    }
}


int main()
{
    string s;
    cin>>s;
    if(checkPalindrome(s,0,s.size()-1))
    cout<<"Palindrome\n";
    else
    cout<<"Not Palindrome\n";
    return 0;
}