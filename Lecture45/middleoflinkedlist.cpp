#include<bits/stdc++.h>
using namespace std;

Node *findMiddle(Node *head) {
    
    if(head==NULL ||head->next==NULL)
    return head;
    
    if(head->next->next == NULL)
        return head->next;
    
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
            fast=fast->next;
        slow=slow->next;
    }
    return slow;
}