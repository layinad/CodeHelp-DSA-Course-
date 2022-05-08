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










int main()
{
    node* root=NULL;

    root= buildTree(root);

    return 0;
}

