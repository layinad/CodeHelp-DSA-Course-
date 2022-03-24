#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num=5;
    cout<<num<<endl;

    //address of the operator - &
    cout<<"address of nums is "<<&num<<endl;

    //creating of ptr
    int *ptr=&num;
    cout<<"value of num is "<<*ptr<<endl;
    cout<<ptr<<endl;

    double d=4.3;
    double *d2=&d;
    cout<<"value of d is "<<*d2<<endl;
    cout<<d2<<endl;


    cout<<"size of integer is "<<sizeof(num)<<endl;
    cout<<"size of pointer is "<<sizeof(ptr)<<endl;
    cout<<"size of double is "<<sizeof(d)<<endl;
    cout<<"size of pointer is "<<sizeof(d2)<<endl;



    return 0;
}