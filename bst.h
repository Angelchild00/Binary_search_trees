#ifndef BST_H
#define BST_H
#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode
{
    char data;
    struct TreeNode* pLeft;
    struct TreeNode* pRight;
} TreeNode;

TreeNode* insertNode (TreeNode* root, char data); //add node
TreeNode* searchNode(TreeNode* root, char targetNode); //search for specific node
int countNode(TreeNode* root); //count number of nodes
int treeHeight(TreeNode* root); //count tree height
void traverseTree(TreeNode* root); // inorder traverse tree
void freeTree(TreeNode* root); //free memory
char getRandomChar(void); //get random chars

#endif //BST_H