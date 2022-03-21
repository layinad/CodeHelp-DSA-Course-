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

int main()
{
    char name[20];
    cout<<"Enter your name "<<endl;
    cin>>name;
    // name[2]='\0';
    cout<<"Your name is "<<name<<endl;

    cout<<"Length "<<getLength(name)<<endl;
    return 0;
}