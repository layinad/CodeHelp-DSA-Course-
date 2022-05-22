//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

 // } Driver Code Ends


/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    private :
    
    void createMapping(int in[],map<int,int> &nodeToIndex,int n)
    {
        for(int i=0;i<n;i++)
        {
            nodeToIndex[in[i]]=i;
        }
    }
    
    Node* solve(int in[],int pre[],int &index,int start,int end,int n,map<int,int> &nodeToIndex)
    {
        //base case
        if(index>=n || start>end)
        return NULL;
        
        int element=pre[index++];        //take out the element from the preorder array
        
        Node* root=new Node(element);  //create a node of the extracted element
        
        //find the current nodes position in inorder
        int position=nodeToIndex[element];
        
        root->left=solve(in,pre,index,start,position-1,n,nodeToIndex);
        root->right=solve(in,pre,index,position+1,end,n,nodeToIndex);
        
        return root;
    }
    
    public:
    Node* buildTree(int in[],int pre[], int n)
    {
       int preOrderIndex = 0; 
       map<int,int>nodeToIndex;
       
       //createmapping will map the inorder elements with their index positions
       createMapping(in,nodeToIndex,n);
       
       Node* ans=solve(in,pre,preOrderIndex,0,n-1,n,nodeToIndex);
       return ans;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}
  // } Driver Code Ends