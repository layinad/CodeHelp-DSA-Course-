#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(4);
    v.push_back(5);
    v.push_back(2);
    v.push_back(3);
    v.push_back(6);
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    int m=3;
    int i=m+1;
    int j=v.size()-1;
    while(i<=j)
    {
        swap(v[i],v[j]);
        i++;
        j--;
    }
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
    return 0;

}
