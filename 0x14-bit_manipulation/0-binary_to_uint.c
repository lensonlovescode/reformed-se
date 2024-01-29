#include "main.h"
/**
 * binary_to_uint - Convert a binary number represented 
 * as a string to an unsigned int.
 * @b: A pointer to a string containing the binary number 
 * (0 and 1 chars).
 * Return: The converted unsigned int. Returns 0 if:
 *         - There is one or more characters in the string 'b' 
 *		that is not '0' or '1'.
 *         - The input string 'b' is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, result, len;
	if (b == NULL)
	{
		return (0);
	}

	i = 0;
	result = 0;
	len = strlen(b);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		i++;
	}
	i = 0;
	while (len > 0)
	{
		len--;
		if (b[len] == '1')
		{
			result += (1 << i);
		}
		i++;
	}
	return (result);
}

