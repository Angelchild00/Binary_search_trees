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

}
int treeHeight(TreeNode* root){

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