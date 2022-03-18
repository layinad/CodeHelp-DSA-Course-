#include<iostream>
#include<array>
using namespace std;
int main(){
    int basic[3]={1,2,3};                 //normal array

    array<int,4> a={1,2,3,4};             //STL Array
    int size=a.size();                    //determining the size of STL array
    for(int i=0;i<size;i++)               //Traversing the STL array
    cout<<a[i]<<endl;
    cout<<"Element at 2nd index "<<a.at(2)<<endl;         //accesing of the elements
    cout<<"Empty or not "<<a.empty()<<endl;               //check wether the array is empty or not
    cout<<"Element at first index "<<a.front()<<endl;     //wiil return the element at first index
    cout<<"Element at last index "<<a.back()<<endl;       //will return the element at last index
}