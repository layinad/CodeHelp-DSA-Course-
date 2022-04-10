#include<bits/stdc++.h>
using namespace std;

class Hero{
    
    //properties
    private:
    int health;

    public:
    char level;

    Hero()                                   //NOTE: Since we have created a constructor the default constructor no longer exists
    {
        cout<<"Constructor called\n";
    }


    Hero(int health)                       //Parameterised constructor
    {
        cout<<"Value of this "<<this<<endl;
        this->health=health;
    }

    Hero(int health, char level){

        this->health=health;
        this->level=level;
    }

    void print()
    {
        cout<<level<<endl;
    }

    int getHealth()                 //getter function
    {
        return health;
    }

    char getLevel()                //getter function
    {
        return level;
    }

    void setHealth(int h)          //setter function
    {
        health=h;
    }

    void setLevel(char ch)        //setter function
    {
        level=ch;
    }
};

int main()
{
    Hero ramesh(10,'A');                  //statically created object
    cout<<"Address of object Ramesh "<<&ramesh<<endl;
    cout<<"health is "<<ramesh.getHealth()<<endl; 
    cout<<"level is "<<ramesh.level<<endl;

    Hero *h=new Hero(11,'B');             //dynamically created object
    cout<<"health is "<<h->getHealth()<<endl;
    cout<<"level is "<<h->level<<endl;
    return 0;
}