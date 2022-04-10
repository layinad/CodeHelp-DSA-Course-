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

    Hero(Hero& temp)            //copy constructor
    {
        char *ch=new char[strlen(temp.name)+1];                 //creating a dynamic array of size of the input array +1 for null character to avoid shallow copy
        strcpy(ch,temp.name);                                  // copying the input array in the nealy created array
        this->name=ch;                                          //initalising this object name with the pointer to the nealy created array
        this->health=temp.health;
        this->level=temp.level;
    }

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


    Hero hero2(hero1);

    hero1.name[0]='S';

    hero1.print();
    hero2.print();

    hero1=hero2;                 //Copy Assignment Operator '='     wiil copy the values of hero2 to hero1

    hero1.print();
    hero2.print();


    return 0;
}