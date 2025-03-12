#include "bst.h"
#include <time.h>


int main (){
    TreeNode* root = NULL;
    srand(time(NULL));
    int numChars = (rand() %10 ) + 11;
    char charsArray[numChars];

    printf("inserting %d random chars\n", numChars);
    for (int i =0; i < numChars; i++){
        charsArray[i] = getRandomChar();
        printf("%c", charsArray[i]);
    }
    printf("\n");
    for (int i = 0; i < numChars; i++){
        root = insertNode(root, charsArray[i]);
    }

    printf("Inorder Traversal sorted: ");
    traverseTree(root);
    printf("\n");
    printf("Number of nodes in tree is: %d\n",countNode(root));
    printf("Tree Height is: %d\n", treeHeight(root));

    freeTree(root);
    printf("Memory free. Program complete\n");

    return 0;
}