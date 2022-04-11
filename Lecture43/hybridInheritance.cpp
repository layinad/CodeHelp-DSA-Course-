#include<bits/stdc++.h>
using namespace std;

class A{

    public:
    void funcA()
    {
        cout<<"Inside function A\n";
    }
};

class D{

    public:
    void funcD()
    {
        cout<<"Inside function D\n";
    }
};

class B: public A{                                
    public:
    void funcB()
    {
        cout<<"Inside function B\n";
    }
};


class C:public A,public D{                           //Heirarchical Inheritance + Multiple Inheritance

    public:
    void funcC()
    {
        cout<<"Inside function C\n";
    }
};






int main()
{
    B obj1;
    obj1.funcA();
    obj1.funcB();


    C obj2;
    obj2.funcA();
    obj2.funcC();
    obj2.funcD();

    
    return 0;
}