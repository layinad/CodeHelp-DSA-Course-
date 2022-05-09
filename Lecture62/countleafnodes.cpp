
void solve(BinaryTreeNode<int> *root,int &count)
{
	if(root==NULL)           //base case
		return ;
	
	if(root->left==NULL && root->right==NULL)       //checking for leaf node
		count++;
	
	solve(root->left,count);             //recursive call for left
	solve(root->right,count);            //recursive call for right
}
int noOfLeafNodes(BinaryTreeNode<int> *root){
    
	int count=0;
	solve(root,count);
	return count;
}