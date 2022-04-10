#include<bits/stdc++.h>
using namespace std;

class Hero{
    
    //properties
    private:
    int health;

    public:
    char *name;
    char level;

    Hero()
    {
        cout<<"Constructor called\n";
        name=new char[100];
    }

    Hero(int health,char level)
    {
        this->health=health;
        this->level=level;
    }

    // Hero(Hero& temp)            //copy constructor
    // {
    //     this->health=temp.health;
    //     this->level=temp.level;
    // }

    void print()
    {
        cout<<"Name "<<this->name<<endl;
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

    void setName(char name[])
    {
        strcpy(this->name,name);
    }
};

int main()
{
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[8]="Daniyal";
    hero1.setName(name);

    hero1.print();

    //use default copy constructor
    Hero hero2(hero1);
    hero2.print();

    hero1.name[0]='S';
    hero1.print();

    hero2.print();

    return 0;
}