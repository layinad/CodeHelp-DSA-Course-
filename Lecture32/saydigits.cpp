#include<bits/stdc++.h>
using namespace std;

void sayDigits(int n,string arr[])
{
    if(n==0)
    return ;

    int digit=n%10;
    n/=10;

    sayDigits(n,arr);

    cout<<arr[digit]<<endl;
    

}



int main()
{
    int n;
    cin>>n;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    sayDigits(n,arr);
    return 0;
}