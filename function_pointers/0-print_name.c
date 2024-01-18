#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - prints out a name
 * @name: this is name to be printed
 * @f: function pointer
 * Return: returns nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
