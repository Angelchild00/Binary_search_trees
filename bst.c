#include "bst.h"
#include <stdio.h>

TreeNode* insertNode (TreeNode* root, char data){
if(searchNode(root, data) != NULL){
    printf("duplicate value found, '%c' not inserted\n", data);
    return root; 
}
if (root == NULL){
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
if(!newNode){
    printf("Memory Allocation failed\n");
    return NULL;
}

newNode->data = data;
newNode->pLeft = NULL;
newNode->pRight = NULL;
return newNode;
}
if(data < root->data){
    root->pLeft = insertNode(root->pLeft, data);
}
else
{
    root->pRight = insertNode(root->pRight,data);
}
return root;
}


TreeNode* searchNode(TreeNode* root, char targetNode){
if(root == NULL || root->data == targetNode)
    return root;

if(targetNode < root->data){
    return searchNode(root->pLeft, targetNode);
}
    return searchNode(root->pRight, targetNode);
}
int countNode(TreeNode* root){
if (root == NULL){
    return 0;
}
return 1 + countNode(root->pLeft) + countNode(root->pRight);
}
int treeHeight(TreeNode* root){
if (root == NULL){
    return -1;
}
int leftHeight = treeHeight(root->pLeft);
int rightHeight = treeHeight(root->pRight);
if (leftHeight > rightHeight){
    return (leftHeight + 1);
}
    return (rightHeight + 1);
}
void traverseTree(TreeNode* root){
if(root == NULL){
    return;
}
traverseTree(root->pLeft);
printf("%c", root->data);
traverseTree(root->pRight);
return;
}
void freeTree(TreeNode* root){
    if (root == NULL){
        return;
    }
    freeTree(root->pLeft);
    freeTree(root->pRight);
    free(root);
}