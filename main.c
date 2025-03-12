#include "bst.h"

int main (){
    TreeNode* root = NULL;

    root = insertNode(root, 'm');
    root = insertNode(root, 'd');
    root = insertNode(root, 'e');
    root = insertNode(root, 'r');
    root = insertNode(root, 'g');
    root = insertNode(root, 'f');
    root = insertNode(root, 'l');
    root = insertNode(root, 'k');

    printf("Inorder Traversal sorted: ");
    traverseTree(root);
    printf("\n");

    return 0;
}