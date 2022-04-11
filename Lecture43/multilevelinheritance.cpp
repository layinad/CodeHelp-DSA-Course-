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

class GermanShepherd : public Dog           //Multi level Inheritance
{

};


int main()
{
    GermanShepherd g;
    g.speak();
    cout<<g.age<<endl;
    return 0;
}