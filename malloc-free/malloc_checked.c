#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - this allocates memory of size b
 * @b: this is the amount of bytes to be allocated
 * Return: returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
