#include "tree.h"

/*
typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
    struct TreeNode *parents;
} TreeNode;*/
TreeNode* createTreeNode(int data)
{
   TreeNode*  node = (TreeNode*)malloc(sizeof(TreeNode));
   node->data = data;
   node->left = NULL;
   node->right = NULL;
   node->parents = NULL;
   return node;

}

TreeNode* BSTSearch(TreeNode *root, int target)
{
    if(!root) return NULL;
    if(target > root->data) return BSTSearch(root->right,target);
    if(target < root->data) return BSTSearch(root->left,target);
    return root;
}

void BSTInsert(TreeNode *root, int data)
{
    while(1)
    {
        if(data > root->data) 
            {
                if(root->right == NULL)break;
                root=root->right;
            }
        else if(data < root->data) 
            {
                if(root->left == NULL)break;
                root=root->left;
            }
        else exit(1);
    }
   
    TreeNode *temp = createTreeNode(data);
    temp->parents = root;
    if(data > root->data) root->right =temp;
    else if(data < root->data) root->left =temp;
}
void BSTDelete(TreeNode *root, int data)
{
    TreeNode *dnode = BSTSearch(root,data);
    if(dnode != NULL)
    {
        if(data > dnode->parents->data )dnode->parents->right =NULL;
        else if(data < dnode->parents->data )dnode->parents->left =NULL;
        free(dnode);
    }

}

void InorderTraversal(TreeNode *root)
{
    if(root!=NULL) 
    {
        InorderTraversal(root->left);
        printf("%d ",root->data);
        InorderTraversal(root->right);
    }


}
void PreorderTraversal(TreeNode *root)
{
    if(root!=NULL) 
    {
        printf("%d ",root->data);
        InorderTraversal(root->left);  
        InorderTraversal(root->right);
    }


}
void PostorderTraversal(TreeNode *root)
{
    if(root!=NULL) 
    {
        InorderTraversal(root->left);
        InorderTraversal(root->right);
        printf("%d ",root->data);
    }


}