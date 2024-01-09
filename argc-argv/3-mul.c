#include <stdio.h>
#include <stdlib.h>
/**
 * main - this multiplies two numbers
 * @argc: this is the number of arguments
 * @argv: this is the array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
	int a;
	int b;
	int c;

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	c = a*b;

	printf("%d\n", c);

	return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
