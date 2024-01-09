#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc:this is the number of arguments
 * @argv:this is the array of arguments
 * Return: this will return null
 */
int main(int argc, char **argv)
{
	(void) argc;

	printf("%s\n", argv[0]);
	
	return (0);
}
