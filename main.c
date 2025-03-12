#include "bst.h"
#include <time.h>


int main (){
    TreeNode* root = NULL;
    srand(time(NULL));
    int numChars = (rand() %10 ) + 11;

    printf("inserting %d random chars\n", numChars);
    for (int i =0; i < numChars; i++){
        char randomChar = getRandomChar();
        printf("%c", randomChar);
        root = insertNode(root, randomChar);
    }
    printf("\n");
    printf("Inorder Traversal sorted: ");
    traverseTree(root);
    printf("\n");
    printf("Number of nodes in tree is: %d\n",countNode(root));
    printf("Tree Height is: %d\n", treeHeight(root));

    freeTree(root);
    printf("Memory free. Program complete\n");

    return 0;
}