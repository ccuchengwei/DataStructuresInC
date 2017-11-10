#ifndef LINK_LIST_NODE_H
#define LINK_LIST_NODE_H
#include <stdio.h>
#include <stdlib.h>
typedef struct llnode* pointer;
typedef  struct llnode
{
    int data;
    pointer next;

}llnode;

llnode* creatnode(int data);
void insertdata(llnode* head,int data);
llnode* deletenode(llnode* head,int data);
int searchdata(llnode* head,int data);
void printlist(llnode* head);
void freelist(llnode *head);
void reverselist(llnode **head);

#endif