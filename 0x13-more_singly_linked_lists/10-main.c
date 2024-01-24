#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
 listint_t *head;
 head = NULL;
 add_nodeint_end(&head, 0);
 add_nodeint_end(&head, 1);
 add_nodeint_end(&head, 2);
 add_nodeint_end(&head, 3);
 add_nodeint_end(&head, 4);
 add_nodeint_end(&head, 98);
 add_nodeint_end(&head, 402);
 add_nodeint_end(&head, 1024);
 print_listint(head);
 printf("-----------------\n");
 delete_nodeint_at_index(&head, 5);
 print_listint(head);
 printf("-----------------\n");
 delete_nodeint_at_index(&head, 0);
 print_listint(head);
 printf("-----------------\n");
 delete_nodeint_at_index(&head, 0);
 print_listint(head);
 printf("-----------------\n");
 delete_nodeint_at_index(&head, 0);
 print_listint(head);
 printf("-----------------\n");
 delete_nodeint_at_index(&head, 0);
 print_listint(head);
 printf("-----------------\n");
 delete_nodeint_at_index(&head, 0);
 print_listint(head);
 printf("-----------------\n");
 delete_nodeint_at_index(&head, 0);
 print_listint(head);
 printf("-----------------\n");
 delete_nodeint_at_index(&head, 0);
 printf("-----------------\n");
 delete_nodeint_at_index(&head, 0);
 printf("-----------------\n");
 delete_nodeint_at_index(&head, 0);

(/)
1/15/24, 4:02 PM Project: 0x13. C - More singly linked lists | Nairobi Intranet
https://intranet.alxswe.com/projects/230 23/33
 printf("-----------------\n");
 delete_nodeint_at_index(&head, 0);
 printf("-----------------\n");
 delete_nodeint_at_index(&head, 0);
 printf("-----------------\n");
 delete_nodeint_at_index(&head, 0);
 printf("-----------------\n");
 delete_nodeint_at_index(&head, 0);
 printf("-----------------\n");
 delete_nodeint_at_index(&head, 0);
 printf("-----------------\n");
 delete_nodeint_at_index(&head, 0);
 printf("-----------------\n");
 delete_nodeint_at_index(&head, 0);
 print_listint(head);
 return (0);
}

