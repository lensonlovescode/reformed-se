#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of characters
 * @size: this is the number of characters
 * @c: this is the character to fill the memory spaces
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	
	return (ptr);
}
