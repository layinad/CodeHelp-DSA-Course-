#include<bits/stdc++.h>
using namespace std;

int getLength(char name[])
{
    int count=0;
    for(int i=0;i<name[i]!='\0';i++)
    count++;
    return count;
}


void reverseName(char name[],int i,int j)
{
    while(i<=j)
    {
        swap(name[i],name[j]);
        i++;
        j--;
    }
}

int main()
{
    char name[20];
    cin>>name;

    int l=getLength(name);
    l=l-1;
    reverseName(name,0,l);
    cout<<name<<endl;
    return 0;
}