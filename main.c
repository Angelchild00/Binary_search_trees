#include "bst.h"

int main (){
    TreeNode* root = NULL;

    root = insertNode(root, 'm');
    root = insertNode(root, 'd');
    root = insertNode(root, 'e');
    root = insertNode(root, 'r');
    root = insertNode(root, 'g');
    root = insertNode(root, 'm');
    root = insertNode(root, 'l');
    root = insertNode(root, 'k');

    printf("Inorder Traversal sorted: ");
    traverseTree(root);
    printf("\n");
    printf("Number of nodes in tree is: %d\n",countNode(root));
    printf("Tree Height is: %d\n", treeHeight(root));

    return 0;
}