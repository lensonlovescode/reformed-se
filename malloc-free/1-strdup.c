#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * duplicates the string given as the parameter
 * @str: this is the string to be duplicated
 * Return: return a pointer to the new string
 */
char *_strdup(char *str)
{
	int i;
	int length;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	ptr = malloc((length + 1) * sizeof(char));

	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
