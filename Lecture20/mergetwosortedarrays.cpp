#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1[5]={1,3,5,7,9};
    int a2[3]={2,4,6};
    int newsize=5+3;
    int a3[newsize]={0};
    for(int i=0;i<newsize;i++)
    cout<<a3[i]<<" ";

    int i=0;
    int j=0;
    int k=0;

    while(i<5 && j<3)
    {
        if(a1[i]<a2[j])
        {
            a3[k]=a1[i];
            i++;
        }
        else if(a1[i]==a2[j])
        {
            a3[k]=a1[i];
            i++;
        }
        else
        {
            a3[k]=a2[j];
            j++;
        }
        k++;
    }

    while(i<5)
    {
        a3[k]=a1[i];
        i++;
        k++;
    }
    while(j<3)
    {
        a3[k]=a2[j];
        j++;
        k++;
    }

    for(int i=0;i<newsize;i++)
    cout<<a3[i]<<" ";
    cout<<endl;
    return 0;
}