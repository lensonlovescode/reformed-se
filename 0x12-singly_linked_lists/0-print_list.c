#include "lists.h"
/**
 *
 *
 *
 *
 *
 */
size_t print_list(const list_t *h)
{
	size_t count;
	const list_t *ptr;

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
