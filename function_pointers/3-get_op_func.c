#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - gets the operaion based on the operator
 * @s: this is the operator
 * @a: first int
 * @b: second int
 * Return: a pointer to the operation function
 */
int (*get_op_func(char *s))(int a, int b)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;

	while (ops[i].op != NULL && s != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return(NULL);
}
