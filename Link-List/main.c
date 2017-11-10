#include <stdio.h>
#include <stdlib.h>
#include "LinklistNode.h"
int main ()
{
    llnode* head;
    printf("Insert 3 \n");
    head = creatnode(3);
    printlist(head);


    printf("Insert 4\n");
    insertdata(head,4);
    printlist(head);


    printf("Insert 7\n");
    insertdata(head,7);
    printlist(head);

    printf("Search 4 : %c \n",(searchdata(head,4)== 1 ? 'Y' : 'N' ));

    printf("Search 5 : %c \n",(searchdata(head,5)== 1 ? 'Y' : 'N' ));

    printf("Delete 3\n");
    head = deletenode(head,3);
    printlist(head);

    printf("Insert 9\n");
    insertdata(head,9);
    printlist(head);

    printf("Insert 5\n");
    insertdata(head,5);
    printlist(head);

    printf("Insert 6\n");
    insertdata(head,6);
    printlist(head);


    printf("reverse list\n");
    reverselist(&head);
    printlist(head);


    freelist(head);
    

}