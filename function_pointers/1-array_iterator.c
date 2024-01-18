#include "function_pointers.h"
/**
 * array_iterator - performs action passed as argument
 * @array: this is the array to be ferformed action on
 * @size: this is the size of the array
 * @action: this is the action to be done
 * Return: returns nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
 }
