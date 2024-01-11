#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int length;
	int len1;
	int len2;
	char *ptr;
	
	if (s1 == NULL )
	{
		s1 = (" ");
	}
	if (s2 == NULL)
	{
		s2 = (" ");
	}

	len1 = 0;
	len2 = 0;

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	length = len1 + len2;

	ptr = malloc((length + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		ptr[len1 + j] = s2[j];
	}

	ptr[length] = '\0';

	return (ptr);
}	
