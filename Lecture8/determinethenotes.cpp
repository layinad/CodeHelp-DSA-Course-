#include<bits/stdc++.h>
using namespace std;
int main()
{
    int amt;
    cin>>amt;
    int current=amt;
    switch(1)
    {
        case 1:
            if(current>100)
            cout<<(current/100)<<" 100 Rupee notes will be required\n";
            current=current-((current/100)*100);

        case 2:
            if(current>50)
            cout<<(current/50)<<" 50 Rupee notes will be required\n";
            current=current-((current/50)*50);

        case 3:
            if(current>20)
            cout<<(current/20)<<" 20 Rupee notes will be required\n";
            current=current-((current/20)*20);

        case 4:
            if(current>1)
            cout<<(current/1)<<" 1 Rupee notes will be required\n";
            current=current-((current/1)*1);
            break;

        default:
            cout<<"Invalid choice\n";
    }
    return 0;
}