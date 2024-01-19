#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: this separates the numbers
 * @n: his is the number of remaining arguments
 * Return: returns nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int CURRENT;
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
			CURRENT = va_arg(args, int);
			printf("%d", CURRENT);
			printf("%s", separator);
		}
		else
		{
			CURRENT = va_arg(args, int);
			printf("%d", CURRENT);
		}
	}
	printf("\n");
}
