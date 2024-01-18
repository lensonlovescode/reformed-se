#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - this is the main function
 * @argc: this is the number of arguments
 * @argv: this is the array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int (*opfunc)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (((atoi(argv[2]) == '/') || (atoi(argv[2]) == '%')) && (atoi(argv[3]) == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	opfunc = get_op_func(argv[2]);

	if (opfunc == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = opfunc(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", result);

	return (0);
 }
