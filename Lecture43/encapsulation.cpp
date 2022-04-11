#include<bits/stdc++.h>
using namespace std;

class Student{                                  // NOTE: This is not a fully encapsulated class as function is not private

    private:

        string name;
        int age;
        int height;

    public:

        int getAge()
        {
            return this->age;
        }
};

int main()
{
    Student first;
}