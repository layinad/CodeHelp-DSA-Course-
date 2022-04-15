#include<bits/stdc++.h>
using namespace std;

bool isCircular(Node* head){
    if(head==NULL)
        return 1;
    
    Node* temp=head->next;
    while(temp!=NULL && temp!=head)
        temp=temp->next;
    
    if(temp==head)
        return 1;
    else
        return 0;
}




int main()
{

    return 0;
}