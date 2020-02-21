#include "BST.h"
#include <stack>

BST::BST(){
  root_ = nullptr;
}

// Inserts elements of initial_values
// one by one into the Tree
//O(n)
BST::BST(vector<int> initial_values){
  root_ = nullptr;
  for (auto it: initial_values){
    BST::push(it);
  }
}

//O(1)
void BST::push(int key){
  BST::push_helper(root_, key);
} 

//O(log(n))
void BST::push_helper (TreeNode *&root, int key){
  if(root == nullptr){
    root = new TreeNode(key);
    return;
  }
  if(key < root -> val){
    push_helper(root -> left, key);
  }
  else{
    push_helper(root -> right, key);
  }
}


//HW5-Question1
void BST::GetBTHeight(){
  int h=0;
  h=BST::GetBTHeight_helper(root_);
  cout<<h<<endl;
}

int BST::GetBTHeight_helper(TreeNode *bt){
	if(bt == nullptr)
		return 0;
	return max( GetBTHeight_helper(bt->left),GetBTHeight_helper(bt->right) ) + 1;
}

//HW5-Question2
//O(1)
void BST::inorder_recursively(){
  BST::inorder_recursively_helper(root_);
  cout<<endl;
}

//O(logn)
void BST::inorder_recursively_helper(TreeNode *&root){
  if(root == nullptr){
    return;
  }
  inorder_recursively_helper(root->left);
  cout<< root->val<<" ";
  inorder_recursively_helper(root->right);
}

void BST::inorder_nonrecursively(){
  BST::inorder_nonrecursively_helper(root_);
}

//O(logn)
void BST::inorder_nonrecursively_helper(TreeNode *&root){
  stack<TreeNode*> s;
  TreeNode *temp=root;
  while (temp||!s.empty()){
    while (temp){
      s.push(temp);
      temp=temp->left;
    }
    temp=s.top();
    s.pop();
    cout<< temp->val<<" ";
    temp=temp->right;
  }
  cout<<endl;
}