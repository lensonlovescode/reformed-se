#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**@op_mod - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: returns the result
 */
int op_add(int a, int b)
{
	int result;

	result = a + b;

	return (result);
}
/**@op_mod - subtracts two integers
 * @a: first integer
 * @b: second integer
 * Return: returns the result
 */
int op_sub(int a, int b)
{
	int result;

	result = a - b;

	return (result);
}
/**@op_mod - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: returns the result
 */
int op_mul(int a, int b)
{
	int result;

	result = a * b;

	return (result);
}
/**@op_mod - divides two integers
 * @a: first integer
 * @b: second integer
 * Return: returns the result
 */
int op_div(int a, int b)
{
	int result;

	result = a/b;

	return (result);
}
/**
 * @op_mod - gets the modulus of two integers
 * @a: first integer
 * @b: second integer 
 * Return: returns the result
 *
 */
int op_mod(int a, int b)
{
	int result;

	result = a%b;

	return (result);
}
