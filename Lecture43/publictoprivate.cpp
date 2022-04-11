#include<bits/stdc++.h>
using namespace std;

class Human{   
                              

    public:

    int height;
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

class Male: private Human{

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
    // cout<<m1.height<<endl;                 // NOTE: Error cause we are trying to access height which was inherited by male class privately from human class
                                           // therefore it can only be accessed in male class itself

    cout<<m1.getHeight()<<endl;            //this will worl completely fine as we are using a getter function to access the height and not directly accessing the height
    
    return 0;
}