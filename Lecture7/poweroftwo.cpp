#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n) {
        
        int ans = 1;
        
        for(int i = 0; i <= 30; i++) {
            
            //cout<<" ans "<<ans <<endl;
            if(ans == n)
            {
                return true;
            }
            if(ans < INT_MAX/2)
            ans = ans * 2;   
            
        }
        return false;
    }



int main()
{
    int n;
    cin>>n;
    if(isPowerOfTwo(n))
    cout<<"Power of 2\n";
    else
    cout<<"Not a power of 2\n";
    return 0;
}