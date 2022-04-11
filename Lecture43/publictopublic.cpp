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

class Male: public Human{

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
    cout<<m1.height<<endl;                  //Accessible
    
    return 0;
}