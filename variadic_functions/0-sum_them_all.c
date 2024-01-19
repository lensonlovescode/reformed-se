#include "variadic_functions.h"
/**
 * sum_them_all - returns sum of all parameters
 * @n: the first parameter
 * Return: returns the sum
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list args;

	va_start(args, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	return (sum);
}
