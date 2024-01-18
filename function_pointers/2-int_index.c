#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - this searches for an integer
 * @size: size of the array
 * @cmp: function for a specific integer bering searched for
 * Return: this returns the index of the integer being searched for
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int return_value;

	if (size <= 0)
	{
		return (-1);
	}
	if (cmp != NULL || array == NULL)
	{
		for (i = 0; i < size; i++)
		{
			return_value = cmp(array[i]);
			if (return_value != 0)
				return (i);
		}
	}
	return (-1);
}
