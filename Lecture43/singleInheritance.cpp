#include<bits/stdc++.h>
using namespace std;


class Animal{

    public:
    int age;
    int weight;

    public:
    void speak()
    {
        cout<<"Speaking\n";
    }

};

class Dog: public Animal                    //Single Inheritance
{

};


int main()
{
    Dog d;
    d.speak();
    cout<<d.age<<endl;
    return 0;
}