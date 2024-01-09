#include <stdio.h>
/**
 * main - this prints the number of arguments
 * @argc: this is the number of arguments
 * @argv: this is the array of arguments
 * Return: this reurns 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
