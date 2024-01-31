#include "main.h"
/**
 * print_binary - Prints the binary representation of a number.
 * @n: The unsigned long integer to be printed in binary.
 *
 * Description: This function takes an unsigned long integer and prints its
 * binary representation to the standard output without using arrays,
 * malloc, or the % or / operators.
 */
int get_remainder(unsigned long int dividend, unsigned long int divisor);
void reverse_and_print(char *strr);
void print_binary(unsigned long int n)
{
	char *str;
	unsigned long int i, number, dividend, divisor, remainder;

	if (n == 0)
	{
		printf("0");
	}
	if (n == 1)
	{
		printf("1");
	}
	dividend = n;
	divisor = 2;
	i = 0;
	while (dividend != 0)
	{
		remainder = get_remainder(dividend, divisor);
		dividend = (dividend >> 1);
		str[i] = remainder;
		i++;
	}
	str[i + 1] = '\0';
	reverse_and_print(str);
}
/**
 * get_remainder - Get the remainder without using the % operator.
 * @dividend: The dividend.
 * @divisor: The divisor (must be positive).
 *
 * Return: The remainder.
 */
int get_remainder(unsigned long int dividend, unsigned long int divisor)
{
    int remainder;

    if (divisor <= 0)
    {
        divisor = -divisor;
    }

    remainder = dividend & (divisor - 1);

    if (dividend < 0)
    {
        remainder = -remainder;
    }

    return remainder;
}
/**
 * reverse_and_print - Reverse a string and print the reversed string.
 * @str: The string to be reversed.
 */
void reverse_and_print(char *strr)
{
    int length = strlen(strr);
    int start = 0;
    int end = length - 1;

    while (start < end)
    {
        char temp = strr[start];
        strr[start] = strr[end];
        strr[end] = temp;

        start++;
        end--;
    }

    printf("Reversed string: %s\n", strr);
}

