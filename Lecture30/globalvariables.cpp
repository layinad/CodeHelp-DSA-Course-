#include<bits/stdc++.h>
using namespace std;

int global=69;  //Creating a Global Variable


void a(int& i)
{
    cout<<"Global variable in a "<<global<<endl;
    cout<<i<<endl;
}

void b(int& i)
{
    cout<<"Global variable in b "<<global<<endl;
    cout<<i<<endl;
}


int main()
{
    int i=5;
    cout<<"Global variable in main "<<global<<endl;
    a(i);
    b(i);
    return 0;
}