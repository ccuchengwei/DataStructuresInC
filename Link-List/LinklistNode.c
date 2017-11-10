#include "LinklistNode.h"

llnode* creatnode(int data)
{
    llnode* temp = (llnode*)malloc(sizeof(llnode));
    temp->next = NULL;
    temp->data = data;
    return temp;
}

void insertdata(llnode* head,int data)
{
    llnode* temp = (llnode*)malloc(sizeof(llnode));
    temp->next = NULL;
    temp->data = data;
    while(head->next){head = head->next;}
    head->next = temp;

}

llnode*  deletenode(llnode* head,int data)
{
    llnode *prenode,*temp;
    if(head->data == data)
    {
        temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    for(prenode=head,head=head->next;head;)
    {
        if(head->data == data)
        {
            temp = head;
            head = head->next;
            prenode->next = head;
            free(temp);
            return head;
        }
    }
    return head;
}

int searchdata(llnode* head,int data){

    while(head){
        if(head->data == data) return 1;
        head = head->next;
    }
    return 0;
}
void printlist(llnode* head){


    while(head)
    {
        printf("%d ",head->data);
        head = head->next;

    }
    printf("\n");
}

void freelist(llnode *head)
{
    llnode *temp;
    
    while(head)
    {
        temp = head;
        head = head->next;
        free(temp);

    }
}

void reverselist(llnode **head)
{
    llnode* nextnode = (*head)->next,*currnode = *head;
    (*head)->next = NULL;
    while(nextnode)
    {
        (*head) = nextnode ;
        nextnode = nextnode->next;
        (*head)->next = currnode;
        currnode = (*head);

    }
}