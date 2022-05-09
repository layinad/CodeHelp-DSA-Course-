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


// Iterative function to perform inorder traversal on the tree
void inorder(node* root)
{
    // create an empty stack
    stack<node*> stack;
 
    // start from the root node (set current node to the root node)
    node* curr = root;
 
    // if the current node is null and the stack is also empty, we are done
    while (!stack.empty() || curr != nullptr)
    {
        // if the current node exists, push it into the stack (defer it)
        // and move to its left child
        if (curr != nullptr)
        {
            stack.push(curr);
            curr = curr->left;
        }
        else {
            // otherwise, if the current node is null, pop an element from the stack,
            // print it, and finally set the current node to its right child
            curr = stack.top();
            stack.pop();
            cout << curr->data << " ";
 
            curr = curr->right;
        }
    }
}

int main()
{
    node* root=NULL;

    root= buildTree(root);

    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    levelOrderTraversal(root);

    cout<<endl;
    inorder(root);
    return 0;
}
