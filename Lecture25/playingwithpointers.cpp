#include<bits/stdc++.h>
using namespace std;




int main()
{
    //pointer to int is created pointing to a garbage value(ALERT : BAD PRACTICE [sippose it is pointing to a memory which is read only and you updated it that will create a lot of problems])
    // int *p;
    // cout<<*p<<endl;

    // int i=5;
    // int *p=0;
    // p=&i;
    // cout<<p<<endl;
    // cout<<*p<<endl;

    // int num=5;
    // int a=num;
    // a++;
    // cout<<a<<endl;
    // cout<<num<<endl;

    int num=5;
    int *ptr=&num;
    cout<<"before incrementing pointer "<<num<<endl;
    (*ptr)++;
    cout<<"after incrementing pointer "<<num<<endl;


    //copying a pointer in another pointer
    int*q=ptr;
    cout<<ptr<<" "<<q<<endl;
    cout<<*ptr<<" "<<*q<<endl;

    //important concept
    int i=3;
    int *t=&i;
    // cout<<(*t)++<<endl;
    *t=*t+1;
    cout<<*t<<endl;
    cout<<"before t"<<t<<endl;
    t=t+1;                   //wiil move to next memory location
    cout<<"after t"<<t<<endl;

    int d=5;
    cout<<d<<endl;
    cout<<(&d)<<endl;

    
}