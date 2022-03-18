#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;

    vector<int>a(5,1);
    for(int i:a)
    cout<<i<<" ";
    cout<<endl;

    vector<int> last(a);
    for(int i:last)
    cout<<i<<" ";
    cout<<endl;

    
    cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
    v.push_back(2);
    cout<<v.capacity()<<endl;
    v.push_back(3);
    cout<<v.capacity()<<endl;
    cout<<"Size of the vector is "<<v.size()<<endl;
    cout<<"Element at 2nd index "<<v.at(2)<<endl;
    v.pop_back();
    for(int i:v)
    cout<<i<<" ";
    cout<<"size before clear function "<<v.size()<<endl;
    v.clear();
    cout<<"size after clear function "<<v.size()<<endl;

    
}