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
    // return if the tree is empty
    if (root == nullptr)
    return;
 
    // create an empty stack and push the root node
    stack<node*> stack;
    vector<int>ans;
    stack.push(root);
 
    // loop till stack is empty
    while (!stack.empty())
    {
        // pop a node from the stack and print it
        node* curr = stack.top();
        stack.pop();
 
        ans.push_back(curr->data);
 
 
        // push the left child of the popped node into the stack
        if (curr->left) {
            stack.push(curr->left);
        }

        // push the right child of the popped node into the stack
        if (curr->right) {
            stack.push(curr->right);
        }
 
        // the left child must be pushed first so that the right child
        // is processed first (LIFO order)
    }

    for(int i=ans.size()-1;i>=0;i--)
    cout<<ans[i]<<" ";
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