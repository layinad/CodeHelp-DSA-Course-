#include<bits/stdc++.h>
using namespace std;

void update2(int& n)
{
    n++;
}

void update(int n)
{
    n++;
}

int main()
{
    int n=5;
    cout<<"Before update "<<n<<endl;
    // update(n);
    update2(n);
    cout<<"After update "<<n<<endl;
    return 0;
}