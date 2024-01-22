#include "lists.h"
/**
 * print_list - Prints the elements of a singly linked list
 * @h: A pointer to the head of the linked list.
 * Return: The number of nodes (elements) in the linked list.
 */
size_t print_list(const list_t *h)
{
	siize_t count;
	co nst list_t *ptr;

	if (h == NULL)
	{
		printf("Empty list");
	}
	count  = 0;
	ptr = h;
	while (ptr != NULL)
	{
		printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		count++;
	}
	return (count);

}
