#include<bits/stdc++.h>
using namespace std;


class Animal{

    public:
    int age;
    int weight;

    public:
    void bark()
    {
        cout<<"Barking\n";
    }

};

class Human{

    public:
    string color;

    public:
    void speak()
    {
        cout<<"Speaking\n";
    }
};


//Multipe Inheritance

class Hybrid: public Animal, public Human{

};


int main()
{
    Hybrid obj1;
    obj1.speak();
    obj1.bark();
    return 0;
}