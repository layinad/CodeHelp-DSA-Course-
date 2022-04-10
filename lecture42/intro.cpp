#include<bits/stdc++.h>
using namespace std;

class Hero{
    
    //properties
    private:
    int health;

    public:
    char level;

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
    // Hero Ramesh;                    //creating an object of class hero

    // cout<<"Ramesh health is "<<Ramesh.getHealth()<<endl;                //printing the value of a private data member using getter functions

    // Ramesh.setHealth(70);                                               //using setter function to update the value of a private data member

    // cout<<"Ramesh health is "<<Ramesh.getHealth()<<endl;                //printing the value of a private data member using getter functions

    // Ramesh.level='A';
    // cout<<"health is "<<Ramesh.getHealth()<<endl;
    // cout<<"level is "<<Ramesh.level<<endl;
    // cout<<"Size of Ramesh "<<sizeof(Ramesh)<<endl;

    Hero a;                      //static allocation

    a.setHealth(80);
    a.setLevel('B');
    cout<<"Level is "<<a.level<<endl;
    cout<<"Health is "<<a.getHealth()<<endl;

    Hero *b=new Hero;            //dynamic allocation

    b->setLevel('A');
    b->setHealth(70);

    cout<<"level is "<<(*b).level<<endl;
    cout<<"Health is "<<(*b).getHealth()<<endl;

    //better way to write to acces the dynamic object data members is
    cout<<"level is "<<b->level<<endl;
    cout<<"Health is "<<b->getHealth()<<endl;
    return 0;
}