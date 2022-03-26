#include<bits/stdc++.h>
using namespace std;

void update(int** p2)
{
    // p=p2+1;                                           NO CHANGE IN THE MAIN FUNCTION
    // cout<<"Inside Function "<<p2<<endl;

    // *p2=*p2+1;                                        ADDRESS OF P WILL BE CHANGED IN THE MAIN FUNCTION

    **p2=**p2+1;                                        // VALUE OF I WILL BE CHANGED IN THE MAIN FUNCTION

}


int main()
{
    int i=5;
    int* p=&i;
    int** p2=&p;

    cout<<"before "<<i<<endl;
    cout<<"before "<<p<<endl;
    cout<<"before "<<p2<<endl;
    update(p2);
    cout<<"before "<<i<<endl;
    cout<<"before "<<p<<endl;
    cout<<"before "<<p2<<endl;
}