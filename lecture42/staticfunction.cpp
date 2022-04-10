#include<bits/stdc++.h>
using namespace std;

class Hero{
    
    //properties
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;                                // will create a static data member which can be accessed from anywhere without creating an object of the class NOTE we have to initialise the static data member outside the class to access it

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

    static int random()                //creating a static function
    {
        return timeToComplete;
    }
};

int Hero :: timeToComplete=5;          //Initialsing the static data member 
                                       // Synatx : datatype  Classname  :: datamember = value;

int main()
{
    cout<<Hero::timeToComplete<<endl;
    cout<<Hero::random()<<endl;


    return 0;
}