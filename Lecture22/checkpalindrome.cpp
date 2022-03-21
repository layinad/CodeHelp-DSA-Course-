#include<bits/stdc++.h>
using namespace std;

int getLength(char name[])
{
    int count=0;
    for(int i=0;i<name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}

bool checkPalindrome(char a[],int n)
{
    int i=0;
    int j=n-1;
    while(i<=j)
    {
        if(a[i]!=a[j])
        return 0;
        i++;
        j--;
    }
    return 1;
}
int main()
{
    char a[20];
    cin>>a;
    int n=getLength(a);
    cout<<checkPalindrome(a,n);
    return 0;
}