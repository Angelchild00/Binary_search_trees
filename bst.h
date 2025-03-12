#ifndef BST_H
#define BST_H
#include <stdio.h>
#include <stdlib.h>

struct TreeNode
{
    char data;
    struct TreeNode* pLeft;
    struct TreeNode* pRight;
} TreeNode;



TreeNode* insertNode (TreeNode* root, char data);
TreeNode* searchNode(TreeNode* root, char targetNode);
int countNode(TreeNode* root);
int treeHeight(TreeNode* root);
void traverseTree(TreeNode* root);

#endif //BST_H