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


node* buildTree(node* root)
{
    cout<<"Enter the data "<<endl;
    int data;
    cin>>data;
    root=new node(data);

    if(data==-1)
    return NULL;

    cout<<"Enter data for inserting in left "<<data<<endl;

    root->left=buildTree(root->left);

    cout<<"Enter data for inserting in right "<<data<<endl;

    root->right=buildTree(root->right);

    return root;
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

void postorder(node* root)
{
    if(root==NULL)            //base case
    return ;

    postorder(root->left);
    postorder(root->right);

    cout<<root->data<<" ";
}

int main()
{
    node* root=NULL;

    root= buildTree(root);

    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    levelOrderTraversal(root);

    cout<<endl;
    postorder(root);
    return 0;
}
