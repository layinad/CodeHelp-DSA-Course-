#include<bits/stdc++.h>
using namespace std;

class Human{   
                              
    protected:
    int height;

    public:

    int weight;
    int age;

    int getAge()
    {
        return this->age;
    }

    void setWeight(int w)
    {
        this->weight=w;
    }

};

class Male: protected Human{

    public:
    int color;

    void sleep()
    {
        cout<<"Male Sleeping\n";
    }

    int getHeight()
    {
        return this->height;
    }

};


int main()
{
    Male m1;
    //cout<<m1.height<<endl;                 // NOTE: Error cause we are trying to access height a protected member which was inherited by male class in protected mode from human class
                                           // therefore it can only be accessed in male class itself and its sub/child class

    cout<<m1.getHeight()<<endl;            //this will worl completely fine as we are using a getter function to access the height and not directly accessing the height
    
    return 0;
}