#include "bst.h"
#include <stdlib.h>

TreeNode* insertNode (TreeNode* root, char data){
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

}
int countNode(TreeNode* root){

}
int treeHeight(TreeNode* root){

}
void traverseTree(TreeNode* root){

}