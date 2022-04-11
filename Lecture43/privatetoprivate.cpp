#include<bits/stdc++.h>
using namespace std;

class Human{   
                              
    private:
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

class Male: public Human{

    public:
    int color;

    void sleep()
    {
        cout<<"Male Sleeping\n";
    }

    int getHeight()
    {
        // return this->height;              // Note : error because height is a private member of human
    }

};


int main()
{
    Male m1;
    // cout<<m1.height<<endl;                 // NOTE: Error cause we are trying to access height a private member which was inherited by male class in private mode from human class
                                           // therefore height can only be accesed in Human class
    
    return 0;
}