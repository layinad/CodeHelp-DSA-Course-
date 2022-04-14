#include<bits/stdc++.h>
using namespace std;

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    LinkedListNode<int>* prev=NULL;
    LinkedListNode<int>* curr=head;
    LinkedListNode<int>* nextptr;
    
    while(curr!=NULL)
    {
		nextptr=curr->next;
        curr->next=prev;
        
        prev=curr;
        curr=nextptr;
    }
    return prev;
}