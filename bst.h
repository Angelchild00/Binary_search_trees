#ifndef BST_H
#define BST_H
#include <stdio.h>

struct TreeNode
{
    char data;
    struct TreeNode* pLeft;
    struct TreeNode* pRight;
} TreeNode;



void insertNode (TreeNode** root, char node);
TreeNode* searchNode(TreeNode* root, char targetNode);
int countNode(TreeNode* root);
int treeHeight(TreeNode* root);
void traverseTree(TreeNode* root);

#endif //BST_H