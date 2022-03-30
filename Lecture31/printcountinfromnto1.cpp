#include<bits/stdc++.h>
using namespace std;

void printCount(int n)
{
    //base case
    if(n==0)
    return ;

    //processing
    cout<<n<<" ";

    //recurrence/recursive relation
    printCount(n-1);

}




int main()
{
    int n;
    cin>>n;
    printCount(n);
    return 0;
}