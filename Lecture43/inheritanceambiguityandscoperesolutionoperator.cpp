#include<bits/stdc++.h>
using namespace std;


class A{

    public:
    void func()
    {
        cout<<"Inside function A\n";
    }
};


class B{

    public:
    void func()
    {
        cout<<"Inside function B\n";
    }
};


class C:public A,public B{

};


int main()
{
    C obj;
    // obj.func();                    //NOTE : This will throw an error of being ambiguous as the compiler wont be able to figure out which function is supposed to be called 
                                   // as function name is same in both class A and class B
    
    obj.A::func();                 //Here I am using the scope resolution operator to avoid the ambiguity error
    obj.B::func();
    return 0;
} 