#include<bits/stdc++.h>
using namespace std;

class Hero{
    
    //properties
    private:
    int health;

    public:
    char level;

    Hero(int health,char level)
    {
        this->health=health;
        this->level=level;
    }

    Hero(Hero& temp)            //copy constructor
    {
        this->health=temp.health;
        this->level=temp.level;
    }

    void print()
    {
        cout<<"health "<<this->health<<endl;
        cout<<"level "<<this->level<<endl;
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
    // Hero suresh;
    
    // suresh.setHealth(70);              //We can avoid this setter functions to initialise the data members by using a parameterised constructor
    // suresh.setLevel('C');

    Hero suresh(70,'C');
    suresh.print();

    Hero ritesh(suresh);
    //the meaning of the above is
    // ritesh.health=suresh.health
    // ritesh.level=suresh.level
    ritesh.print();


    return 0;
}