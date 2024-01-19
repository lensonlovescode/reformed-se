#include "variadic_functions.h"
/**
 * print_strings - this prints strings
 * @separator: this is the separator between strings
 * @n: this is the number of strings
 * Return: this will return nothing
 *
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *CURRENT;
	unsigned int i;
	va_list args;

	if (separator == NULL)
	{
		exit(98);
	}
	
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i !=  n - 1)
		{
			CURRENT = va_arg(args, char*);
			printf("%s", CURRENT);
			printf("%s", separator);
		}
		else
		{
			CURRENT = va_arg(args, char*);
			printf("%s", CURRENT);
		}
	}
	printf("\n");
}
