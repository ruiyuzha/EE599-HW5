#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <iostream>
#include <queue>
using namespace std;

struct TreeNode {
int val;
TreeNode *left;
TreeNode *right;
TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class BST {
public:
BST();

// Inserts elements of initial_values
// one by one into the Tree
BST(vector<int> initial_values);
//~BST();

void push(int key); // **GT** Inserts a key inside Tree
bool find(int key); // **GT** Returns true of key is in the tree
bool erase(int key); // **GT** Removes the key from the tree. If not successful, returns false.

int GetBTHeight();
void inorder_recursively();
void inorder_nonrecursively();

private:
TreeNode *root_;
void push_helper(TreeNode *&root, int key);
TreeNode *find_helper(TreeNode *&root, int key);
TreeNode *erase_helper(TreeNode *&root, int key);
TreeNode *findMinNode(TreeNode *root);

int GetBTHeight_helper(TreeNode *bt);
void inorder_recursively_helper(TreeNode *&root);
void inorder_nonrecursively_helper(TreeNode *&root);

};
#endif