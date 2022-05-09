#include<bits/stdc++.h>
using namespace std;

class node{

    public:

    //data members
    int data;
    node* left;
    node* right;

    node(int val)
    {
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
};

void buildFromLevelOrder(node* &root)
{
    cout<<"Enter the data of the node "<<endl;
    int data;
    cin>>data;
    root= new node(data);

    queue<node*>q;
    q.push(root);

    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();

        cout<<"Enter left node for "<<temp->data<<endl;

        int leftData;
        cin>>leftData;

        if(leftData!=-1)
        {
            temp->left=new node(leftData);
            q.push(temp->left);
        }


        cout<<"Enter right node for "<<temp->data<<endl;

        int rightData;
        cin>>rightData;

        if(rightData!=-1)
        {
            temp->right=new node(rightData);
            q.push(temp->right);
        }
    }

}

void levelOrderTraversal(node* root)
{
    queue<node*>q;

    q.push(root);
    node* dummy=new node(-1);
    q.push(dummy);
    int level=0;
    cout<<"Level "<<level<<endl;

    while(!q.empty())
    {
        if(q.front()->data==-1)                     //the level is completed
        {
            level++;
            q.pop();
            if(!q.empty())                         //if queue is still not empty push the separator
            q.push(dummy);
            else
            break;

            cout<<endl;
            cout<<"Level "<<level<<endl;
        }

        node* temp=q.front();
        q.pop();

        cout<<temp->data<<" ";

        if(temp->left)
        q.push(temp->left);

        if(temp->right)
        q.push(temp->right);
    }
}

int main()
{
    node* root=NULL;

    buildFromLevelOrder(root);

    levelOrderTraversal(root);

    return 0;
}