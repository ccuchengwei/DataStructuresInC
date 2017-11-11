#ifndef TREE_H
#define TREE_H
#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
    struct TreeNode *parents;
} TreeNode;

TreeNode* createTreeNode(int data);

TreeNode* BSTSearch(TreeNode *root, int target);

void BSTInsert(TreeNode *root, int data);

void BSTDelete(TreeNode *root, int data);

void InorderTraversal(TreeNode *root);

void PreorderTraversal(TreeNode *root);

void PostorderTraversal(TreeNode *root);

#endif