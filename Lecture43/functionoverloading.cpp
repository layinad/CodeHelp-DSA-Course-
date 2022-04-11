#include<bits/stdc++.h>
using namespace std;


class A{

    public:

    void sayHello()
    {
        cout<<"Hello Daniyal\n";
    }

    int sayHello(char name)
    {
        cout<<"Hello Daniyal\n";
        return 0;
    }

    void sayHello(string name)
    {
        cout<<"Hello Daniyal\n";
    }

};

int main()
{
    A obj;
    obj.sayHello();
    return 0;
}