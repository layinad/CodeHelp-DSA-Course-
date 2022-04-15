#include<bits/stdc++.h>
using namespace std;



Node* kReverse(Node* head, int k) {
   
    if(head==NULL)                //base condition
    {
		Node* prev=NULL;
        return prev;
    }		
    
    Node* prev=NULL;
    Node* curr=head;
    Node* nextptr;
    Node* newTail;
    int count=1;
    while(count<=k && curr!=NULL)
    {
		nextptr=curr->next;
        curr->next=prev;
        
        prev=curr;
        curr=nextptr;
        count++;
    }
    
    Node* newHead=prev;
    Node* rest=kReverse(nextptr,k);
    head->next=rest;
    return newHead;
}



int main()
{



    return 0;
}