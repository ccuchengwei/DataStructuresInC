#include <stdio.h>
#include <stdlib.h>
#include "tree.h"
int main()
{

    printf("insert 3\n");
    TreeNode* root = createTreeNode(3);
    printf("insert 5\n");
    BSTInsert(root,5);
    printf("insert 1\n");
    BSTInsert(root,1);
    printf("insert 7\n");
    BSTInsert(root,7);
    printf("insert 4\n");
    BSTInsert(root,4);
    printf("inorderTraversal\n");
    InorderTraversal(root);
    printf("\n");

    printf("delet 7\n");
    BSTDelete(root,7);

    printf("delet 4\n");
    BSTDelete(root,4);

    printf("inorderTraversal\n");
    InorderTraversal(root);
    printf("\npreorderTraversal\n");
    PreorderTraversal(root);
    printf("\npostorderTraversal\n");
    PostorderTraversal(root);





}