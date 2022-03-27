#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i=5;
    int& j=i;             //Created a reference variable or simply gave variable i another name
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    cout<<j<<endl;
}