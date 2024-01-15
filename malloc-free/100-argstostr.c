#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * argstostr - this concatenates all the arguments
 * @ac: this is the number of arguments
 * @av: this is the pointer to pointers to strings
 * Return: this will return a pointer to the new string
 */
char *argstostr(int ac, char **av)

{
	char *ptr;
	int length;
	int i;
	unsigned int j;

	length = 0;
	for (i = 0; i < ac; i++)
	{
		length = length + strlen(av[i]) + 1;
	}

	ptr = malloc(sizeof(char) * length);
	i = 0;
	while (i < length)
	{
		for (j = 0; j < strlen(av[i]); j++ )
		{
			ptr[i] = av[i][j];
			i++;
		}
		ptr[i] = ' ';
	}
	ptr[i] = '\0';
	return (ptr);
}
