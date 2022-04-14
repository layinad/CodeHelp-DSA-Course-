#include<bits/stdc++.h>
using namespace std;

void reverse(LinkedListNode<int>* &head,LinkedListNode<int>* curr,LinkedListNode<int>* prev)
{
	if(curr==NULL)
    {
        head=prev;
        return;
    }

	LinkedListNode<int>* nextptr=curr->next;
    reverse(head,nextptr,curr);
    curr->next=prev;

}
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    LinkedListNode<int> *curr=head;
    LinkedListNode<int> *prev=NULL;
    reverse(head,curr,prev);
    return head;
}