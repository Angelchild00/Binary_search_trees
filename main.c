#include "bst.h"
#include <time.h>


int main (){
    //start tree with root at Null
    TreeNode* root = NULL;
    
    //use for random numbers
    srand(time(NULL));
    int numChars = (rand() %10 ) + 11;
    char charsArray[numChars]; //store random chars

    //create random chars in array
    printf("inserting %d random chars\n", numChars);
    for (int i =0; i < numChars; i++){
        charsArray[i] = getRandomChar();
        printf("%c", charsArray[i]);
    }
    printf("\n");
    //create nodes and insert into tree using array 
    for (int i = 0; i < numChars; i++){
        root = insertNode(root, charsArray[i]);
    }
    //traverse tree
    printf("Inorder Traversal sorted: ");
    traverseTree(root);
    printf("\n");
    //count nodes
    printf("Number of nodes in tree is: %d\n",countNode(root));
    //find height of tree
    printf("Tree Height is: %d\n", treeHeight(root));
    //free memory, no leaks.  
    freeTree(root);
    printf("Memory free. Program complete\n");

    return 0;
}