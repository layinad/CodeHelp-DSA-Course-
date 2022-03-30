#include<bits/stdc++.h>
using namespace std;

void printCount(int n)
{
    //base case
    if(n==0)
    return ;

    //recurrence/recursive relation
    printCount(n-1);


    //processing
    cout<<n<<" ";

}




int main()
{
    int n;
    cin>>n;
    printCount(n);
    return 0;
}