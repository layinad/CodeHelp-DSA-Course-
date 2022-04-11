#include<bits/stdc++.h>
using namespace std;


class Animal{

    public:

    void speak()
    {
        cout<<"speaking\n";
    }
};

class Dog:public Animal{

    public:

    void speak()
    {
        cout<<"Bark\n";                //method overriding
    }
};


int main()
{
    Dog obj;
    obj.speak();

    return 0;
}